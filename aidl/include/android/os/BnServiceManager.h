/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/os/IServiceManager.h>
#include <android/os/BnClientCallback.h>
#include <android/os/BnServiceCallback.h>
#include <android/os/BnServiceManager.h>
#include <binder/Delegate.h>


namespace android {
namespace os {
class LIBBINDER_EXPORTED BnServiceManager : public ::android::BnInterface<IServiceManager> {
public:
  static constexpr uint32_t TRANSACTION_getService = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getService2 = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_checkService = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_checkService2 = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_addService = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_listServices = ::android::IBinder::FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_registerForNotifications = ::android::IBinder::FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_unregisterForNotifications = ::android::IBinder::FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_isDeclared = ::android::IBinder::FIRST_CALL_TRANSACTION + 8;
  static constexpr uint32_t TRANSACTION_getDeclaredInstances = ::android::IBinder::FIRST_CALL_TRANSACTION + 9;
  static constexpr uint32_t TRANSACTION_updatableViaApex = ::android::IBinder::FIRST_CALL_TRANSACTION + 10;
  static constexpr uint32_t TRANSACTION_getUpdatableNames = ::android::IBinder::FIRST_CALL_TRANSACTION + 11;
  static constexpr uint32_t TRANSACTION_getConnectionInfo = ::android::IBinder::FIRST_CALL_TRANSACTION + 12;
  static constexpr uint32_t TRANSACTION_registerClientCallback = ::android::IBinder::FIRST_CALL_TRANSACTION + 13;
  static constexpr uint32_t TRANSACTION_tryUnregisterService = ::android::IBinder::FIRST_CALL_TRANSACTION + 14;
  static constexpr uint32_t TRANSACTION_getServiceDebugInfo = ::android::IBinder::FIRST_CALL_TRANSACTION + 15;
  explicit BnServiceManager();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnServiceManager

class LIBBINDER_EXPORTED IServiceManagerDelegator : public BnServiceManager {
public:
  explicit IServiceManagerDelegator(const ::android::sp<IServiceManager> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IServiceManager> getImpl() { return _aidl_delegate; }
  ::android::binder::Status getService(const ::std::string& name, ::android::sp<::android::IBinder>* _aidl_return) override __attribute__((deprecated("TODO(b/355394904): Use getService2 instead. This does not return metadata that is included in ServiceWithMetadata"))) {
    return _aidl_delegate->getService(name, _aidl_return);
  }
  ::android::binder::Status getService2(const ::std::string& name, ::android::os::Service* _aidl_return) override {
    return _aidl_delegate->getService2(name, _aidl_return);
  }
  ::android::binder::Status checkService(const ::std::string& name, ::android::sp<::android::IBinder>* _aidl_return) override __attribute__((deprecated("TODO(b/355394904): Use checkService2 instead. This does not return metadata that is included in ServiceWithMetadata"))) {
    return _aidl_delegate->checkService(name, _aidl_return);
  }
  ::android::binder::Status checkService2(const ::std::string& name, ::android::os::Service* _aidl_return) override {
    return _aidl_delegate->checkService2(name, _aidl_return);
  }
  ::android::binder::Status addService(const ::std::string& name, const ::android::sp<::android::IBinder>& service, bool allowIsolated, int32_t dumpPriority) override {
    return _aidl_delegate->addService(name, service, allowIsolated, dumpPriority);
  }
  ::android::binder::Status listServices(int32_t dumpPriority, ::std::vector<::std::string>* _aidl_return) override {
    return _aidl_delegate->listServices(dumpPriority, _aidl_return);
  }
  ::android::binder::Status registerForNotifications(const ::std::string& name, const ::android::sp<::android::os::IServiceCallback>& callback) override {
    ::android::sp<::android::os::IServiceCallbackDelegator> _callback;
    if (callback) {
      _callback = ::android::sp<::android::os::IServiceCallbackDelegator>::cast(delegate(callback));
    }
    return _aidl_delegate->registerForNotifications(name, _callback);
  }
  ::android::binder::Status unregisterForNotifications(const ::std::string& name, const ::android::sp<::android::os::IServiceCallback>& callback) override {
    ::android::sp<::android::os::IServiceCallbackDelegator> _callback;
    if (callback) {
      _callback = ::android::sp<::android::os::IServiceCallbackDelegator>::cast(delegate(callback));
    }
    return _aidl_delegate->unregisterForNotifications(name, _callback);
  }
  ::android::binder::Status isDeclared(const ::std::string& name, bool* _aidl_return) override {
    return _aidl_delegate->isDeclared(name, _aidl_return);
  }
  ::android::binder::Status getDeclaredInstances(const ::std::string& iface, ::std::vector<::std::string>* _aidl_return) override {
    return _aidl_delegate->getDeclaredInstances(iface, _aidl_return);
  }
  ::android::binder::Status updatableViaApex(const ::std::string& name, ::std::optional<::std::string>* _aidl_return) override {
    return _aidl_delegate->updatableViaApex(name, _aidl_return);
  }
  ::android::binder::Status getUpdatableNames(const ::std::string& apexName, ::std::vector<::std::string>* _aidl_return) override {
    return _aidl_delegate->getUpdatableNames(apexName, _aidl_return);
  }
  ::android::binder::Status getConnectionInfo(const ::std::string& name, ::std::optional<::android::os::ConnectionInfo>* _aidl_return) override {
    return _aidl_delegate->getConnectionInfo(name, _aidl_return);
  }
  ::android::binder::Status registerClientCallback(const ::std::string& name, const ::android::sp<::android::IBinder>& service, const ::android::sp<::android::os::IClientCallback>& callback) override {
    ::android::sp<::android::os::IClientCallbackDelegator> _callback;
    if (callback) {
      _callback = ::android::sp<::android::os::IClientCallbackDelegator>::cast(delegate(callback));
    }
    return _aidl_delegate->registerClientCallback(name, service, _callback);
  }
  ::android::binder::Status tryUnregisterService(const ::std::string& name, const ::android::sp<::android::IBinder>& service) override {
    return _aidl_delegate->tryUnregisterService(name, service);
  }
  ::android::binder::Status getServiceDebugInfo(::std::vector<::android::os::ServiceDebugInfo>* _aidl_return) override {
    return _aidl_delegate->getServiceDebugInfo(_aidl_return);
  }
private:
  ::android::sp<IServiceManager> _aidl_delegate;
};  // class IServiceManagerDelegator
}  // namespace os
}  // namespace android
