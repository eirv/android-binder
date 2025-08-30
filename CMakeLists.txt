cmake_minimum_required(VERSION 3.22.1)

project("binder")

set(CMAKE_CXX_STANDARD 20)

set(BINDER_COMPILE_FLAGS -U_FORTIFY_SOURCE -D__ANDROID_UNAVAILABLE_SYMBOLS_ARE_WEAK__)

add_library(fmtlib-headers INTERFACE)
target_include_directories(fmtlib-headers INTERFACE platform/external/fmtlib/include)

add_library(log-headers INTERFACE)
target_include_directories(log-headers INTERFACE platform/system/logging/liblog/include)

add_library(base-headers INTERFACE)
target_include_directories(base-headers INTERFACE platform/system/libbase/include)

add_library(cutils-headers INTERFACE)
target_include_directories(cutils-headers INTERFACE platform/system/core/libcutils/include)

add_library(system-headers INTERFACE)
target_include_directories(system-headers INTERFACE platform/system/core/libsystem/include)

add_library(utils-headers INTERFACE)
target_include_directories(utils-headers INTERFACE platform/system/core/libutils/include)
target_link_libraries(utils-headers INTERFACE base-headers cutils-headers log-headers system-headers)

add_library(processgroup-headers INTERFACE)
target_include_directories(processgroup-headers INTERFACE platform/system/core/libprocessgroup/include)

add_library(binder-headers INTERFACE)
target_include_directories(binder-headers INTERFACE platform/framework/native/libs/binder/include platform/framework/native/libs/binder)

add_library(async_safe-static STATIC platform/bionic/libc/async_safe/async_safe_log.cpp)
target_include_directories(async_safe-static PUBLIC platform/bionic/libc/async_safe/include)
target_include_directories(async_safe-static PRIVATE platform/bionic/libc)
target_link_libraries(async_safe-static PUBLIC log-headers)
target_compile_options(async_safe-static PRIVATE ${BINDER_COMPILE_FLAGS})

add_library(log-static STATIC
        platform/system/logging/liblog/log_event_list.cpp
        platform/system/logging/liblog/log_event_write.cpp
        platform/system/logging/liblog/logger_name.cpp
        platform/system/logging/liblog/logger_read.cpp
        platform/system/logging/liblog/logger_write.cpp
        platform/system/logging/liblog/logprint.cpp
        platform/system/logging/liblog/properties.cpp
        platform/system/logging/liblog/event_tag_map.cpp
        platform/system/logging/liblog/log_time.cpp
        platform/system/logging/liblog/pmsg_reader.cpp
        platform/system/logging/liblog/pmsg_writer.cpp
        platform/system/logging/liblog/logd_reader.cpp
        platform/system/logging/liblog/logd_writer.cpp
)
target_link_libraries(log-static PUBLIC log-headers)
target_link_libraries(log-static PRIVATE base-headers cutils-headers utils-headers)
target_compile_definitions(log-static PRIVATE
        LIBLOG_LOG_TAG=1006
        SNET_EVENT_LOG_TAG=1397638484
        ANDROID_DEBUGGABLE=0
)
target_compile_options(log-static PRIVATE ${BINDER_COMPILE_FLAGS})

add_library(base-static STATIC
        platform/system/libbase/abi_compatibility.cpp
        platform/system/libbase/chrono_utils.cpp
        platform/system/libbase/cmsg.cpp
        platform/system/libbase/file.cpp
        platform/system/libbase/hex.cpp
        platform/system/libbase/logging.cpp
        platform/system/libbase/mapped_file.cpp
        platform/system/libbase/parsebool.cpp
        platform/system/libbase/parsenetaddress.cpp
        platform/system/libbase/posix_strerror_r.cpp
        platform/system/libbase/process.cpp
        platform/system/libbase/properties.cpp
        platform/system/libbase/result.cpp
        platform/system/libbase/stringprintf.cpp
        platform/system/libbase/strings.cpp
        platform/system/libbase/threads.cpp
        platform/system/libbase/test_utils.cpp
)
target_link_libraries(base-static PUBLIC base-headers fmtlib-headers)
target_link_libraries(base-static PRIVATE log-static)
target_compile_definitions(base-static PRIVATE _FILE_OFFSET_BITS=64)
target_compile_options(base-static PRIVATE ${BINDER_COMPILE_FLAGS})

add_library(cutils-static STATIC
        platform/system/core/libcutils/config_utils.cpp
        platform/system/core/libcutils/iosched_policy.cpp
        platform/system/core/libcutils/load_file.cpp
        platform/system/core/libcutils/native_handle.cpp
        platform/system/core/libcutils/properties.cpp
        platform/system/core/libcutils/record_stream.cpp
        platform/system/core/libcutils/strlcpy.c
        platform/system/core/libcutils/sockets.cpp
        platform/system/core/libcutils/android_get_control_file.cpp
        platform/system/core/libcutils/socket_inaddr_any_server_unix.cpp
        platform/system/core/libcutils/socket_local_client_unix.cpp
        platform/system/core/libcutils/socket_local_server_unix.cpp
        platform/system/core/libcutils/socket_network_client_unix.cpp
        platform/system/core/libcutils/sockets_unix.cpp
        platform/system/core/libcutils/android_reboot.cpp
        platform/system/core/libcutils/ashmem-dev.cpp
        platform/system/core/libcutils/klog.cpp
        platform/system/core/libcutils/partition_utils.cpp
        platform/system/core/libcutils/qtaguid.cpp
        platform/system/core/libcutils/trace-dev.cpp
        platform/system/core/libcutils/uevent.cpp
)
target_link_libraries(cutils-static PUBLIC cutils-headers processgroup-headers)
target_link_libraries(cutils-static PRIVATE log-static base-static)
target_compile_options(cutils-static PRIVATE ${BINDER_COMPILE_FLAGS})

add_library(vndksupport-static STATIC libvndksupport/linker.cpp)
target_include_directories(vndksupport-static PUBLIC platform/system/core/libvndksupport/include)
target_include_directories(vndksupport-static PRIVATE platform/system/core/libvndksupport/include/vndksupport .)
target_link_libraries(vndksupport-static PRIVATE log-static)
target_compile_options(vndksupport-static PRIVATE ${BINDER_COMPILE_FLAGS})

add_library(utils-static STATIC
        platform/system/core/libutils/FileMap.cpp
        platform/system/core/libutils/JenkinsHash.cpp
        platform/system/core/libutils/LightRefBase.cpp
        platform/system/core/libutils/NativeHandle.cpp
        platform/system/core/libutils/Printer.cpp
        platform/system/core/libutils/StopWatch.cpp
        platform/system/core/libutils/SystemClock.cpp
        platform/system/core/libutils/Threads.cpp
        platform/system/core/libutils/Timers.cpp
        platform/system/core/libutils/Tokenizer.cpp
        platform/system/core/libutils/misc.cpp
        platform/system/core/libutils/Trace.cpp
)
target_link_libraries(utils-static PUBLIC utils-headers)
target_link_libraries(utils-static PRIVATE vndksupport-static)
target_compile_definitions(utils-static PRIVATE ANDROID_UTILS_REF_BASE_DISABLE_IMPLICIT_CONSTRUCTION)
target_compile_options(utils-static PRIVATE ${BINDER_COMPILE_FLAGS})

add_library(utils_binder-static STATIC
        platform/system/core/libutils/binder/Errors.cpp
        platform/system/core/libutils/binder/RefBase.cpp
        platform/system/core/libutils/binder/SharedBuffer.cpp
        platform/system/core/libutils/binder/String16.cpp
        platform/system/core/libutils/binder/String8.cpp
        platform/system/core/libutils/binder/StrongPointer.cpp
        platform/system/core/libutils/binder/Unicode.cpp
        platform/system/core/libutils/binder/VectorImpl.cpp
)
target_include_directories(utils_binder-static PUBLIC platform/system/core/libutils/binder/include)
target_link_libraries(utils_binder-static PRIVATE base-static cutils-static log-static utils-static)
target_compile_options(utils_binder-static PRIVATE ${BINDER_COMPILE_FLAGS})

add_library(apexsupport-static STATIC platform/system/apex/libs/libapexsupport/apexsupport.cpp)
target_include_directories(apexsupport-static PUBLIC platform/system/apex/libs/libapexsupport/include)
target_link_libraries(apexsupport-static PRIVATE dl log-static)
target_compile_options(apexsupport-static PRIVATE ${BINDER_COMPILE_FLAGS})

add_library(binder-static STATIC
        platform/framework/native/libs/binder/Binder.cpp
        platform/framework/native/libs/binder/BpBinder.cpp
        platform/framework/native/libs/binder/Debug.cpp
        platform/framework/native/libs/binder/FdTrigger.cpp
        platform/framework/native/libs/binder/IInterface.cpp
        platform/framework/native/libs/binder/IResultReceiver.cpp
        platform/framework/native/libs/binder/Parcel.cpp
        platform/framework/native/libs/binder/ParcelFileDescriptor.cpp
        platform/framework/native/libs/binder/RecordedTransaction.cpp
        platform/framework/native/libs/binder/RpcSession.cpp
        platform/framework/native/libs/binder/RpcServer.cpp
        platform/framework/native/libs/binder/RpcState.cpp
        platform/framework/native/libs/binder/RpcTransportRaw.cpp
        platform/framework/native/libs/binder/Stability.cpp
        platform/framework/native/libs/binder/Status.cpp
        platform/framework/native/libs/binder/TextOutput.cpp
        platform/framework/native/libs/binder/Utils.cpp
        platform/framework/native/libs/binder/file.cpp

        platform/framework/native/libs/binder/BufferedTextOutput.cpp
        platform/framework/native/libs/binder/BackendUnifiedServiceManager.cpp
        platform/framework/native/libs/binder/IPCThreadState.cpp
        platform/framework/native/libs/binder/IServiceManager.cpp
        platform/framework/native/libs/binder/IServiceManagerFFI.cpp
        platform/framework/native/libs/binder/ProcessState.cpp
        platform/framework/native/libs/binder/Static.cpp

        platform/framework/native/libs/binder/OS_android.cpp
        platform/framework/native/libs/binder/OS_unix_base.cpp

        platform/framework/native/libs/binder/IPermissionController.cpp
        platform/framework/native/libs/binder/PermissionCache.cpp
        platform/framework/native/libs/binder/PermissionController.cpp

        aidl/src/android/content/pm/ApexStagedEvent.cpp
        aidl/src/android/content/pm/IPackageManagerNative.cpp
        aidl/src/android/content/pm/IStagedApexObserver.cpp
        aidl/src/android/content/pm/StagedApexInfo.cpp
        aidl/src/android/os/ConnectionInfo.cpp
        aidl/src/android/os/IAccessor.cpp
        aidl/src/android/os/IClientCallback.cpp
        aidl/src/android/os/IServiceCallback.cpp
        aidl/src/android/os/IServiceManager.cpp
        aidl/src/android/os/Service.cpp
        aidl/src/android/os/ServiceDebugInfo.cpp
        aidl/src/android/os/ServiceWithMetadata.cpp
)
target_include_directories(binder-static PUBLIC
        platform/framework/native/libs/binder/include
        platform/framework/native/libs/binder/ndk/include_cpp
        aidl/include
)
target_include_directories(binder-static PRIVATE platform/framework/native/libs/binder)
target_link_libraries(binder-static PUBLIC base-static cutils-static utils-static utils_binder-static)
target_link_libraries(binder-static PRIVATE apexsupport-static vndksupport-static)
target_compile_definitions(binder-static PRIVATE BINDER_RPC_DEV_SERVERS BINDER_ENABLE_RECORDING BINDER_WITH_KERNEL_IPC BUILDING_LIBBINDER=0)
target_compile_options(binder-static PRIVATE ${BINDER_COMPILE_FLAGS})

# add_executable(main main.cc)
# target_link_libraries(main binder-static)
