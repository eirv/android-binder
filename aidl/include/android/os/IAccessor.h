/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/ParcelFileDescriptor.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android {
namespace os {
class LIBBINDER_EXPORTED IAccessorDelegator;

class LIBBINDER_EXPORTED IAccessor : public ::android::IInterface {
public:
  typedef IAccessorDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(Accessor)
  enum : int32_t { ERROR_CONNECTION_INFO_NOT_FOUND = 0 };
  enum : int32_t { ERROR_FAILED_TO_CREATE_SOCKET = 1 };
  enum : int32_t { ERROR_FAILED_TO_CONNECT_TO_SOCKET = 2 };
  enum : int32_t { ERROR_FAILED_TO_CONNECT_EACCES = 3 };
  enum : int32_t { ERROR_UNSUPPORTED_SOCKET_FAMILY = 4 };
  virtual ::android::binder::Status addConnection(::android::os::ParcelFileDescriptor* _aidl_return) = 0;
  virtual ::android::binder::Status getInstanceName(::android::String16* _aidl_return) = 0;
};  // class IAccessor

class LIBBINDER_EXPORTED IAccessorDefault : public IAccessor {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status addConnection(::android::os::ParcelFileDescriptor* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getInstanceName(::android::String16* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IAccessorDefault
}  // namespace os
}  // namespace android
