/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/os/IServiceManager.h>

namespace android {
namespace os {
class LIBBINDER_EXPORTED BpServiceManager : public ::android::BpInterface<IServiceManager> {
public:
  explicit BpServiceManager(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpServiceManager() = default;
  ::android::binder::Status getService(const ::std::string& name, ::android::sp<::android::IBinder>* _aidl_return) override __attribute__((deprecated("TODO(b/355394904): Use getService2 instead. This does not return metadata that is included in ServiceWithMetadata")));
  ::android::binder::Status getService2(const ::std::string& name, ::android::os::Service* _aidl_return) override;
  ::android::binder::Status checkService(const ::std::string& name, ::android::sp<::android::IBinder>* _aidl_return) override __attribute__((deprecated("TODO(b/355394904): Use checkService2 instead. This does not return metadata that is included in ServiceWithMetadata")));
  ::android::binder::Status checkService2(const ::std::string& name, ::android::os::Service* _aidl_return) override;
  ::android::binder::Status addService(const ::std::string& name, const ::android::sp<::android::IBinder>& service, bool allowIsolated, int32_t dumpPriority) override;
  ::android::binder::Status listServices(int32_t dumpPriority, ::std::vector<::std::string>* _aidl_return) override;
  ::android::binder::Status registerForNotifications(const ::std::string& name, const ::android::sp<::android::os::IServiceCallback>& callback) override;
  ::android::binder::Status unregisterForNotifications(const ::std::string& name, const ::android::sp<::android::os::IServiceCallback>& callback) override;
  ::android::binder::Status isDeclared(const ::std::string& name, bool* _aidl_return) override;
  ::android::binder::Status getDeclaredInstances(const ::std::string& iface, ::std::vector<::std::string>* _aidl_return) override;
  ::android::binder::Status updatableViaApex(const ::std::string& name, ::std::optional<::std::string>* _aidl_return) override;
  ::android::binder::Status getUpdatableNames(const ::std::string& apexName, ::std::vector<::std::string>* _aidl_return) override;
  ::android::binder::Status getConnectionInfo(const ::std::string& name, ::std::optional<::android::os::ConnectionInfo>* _aidl_return) override;
  ::android::binder::Status registerClientCallback(const ::std::string& name, const ::android::sp<::android::IBinder>& service, const ::android::sp<::android::os::IClientCallback>& callback) override;
  ::android::binder::Status tryUnregisterService(const ::std::string& name, const ::android::sp<::android::IBinder>& service) override;
  ::android::binder::Status getServiceDebugInfo(::std::vector<::android::os::ServiceDebugInfo>* _aidl_return) override;
};  // class BpServiceManager
}  // namespace os
}  // namespace android
