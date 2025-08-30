/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/os/IServiceCallback.h>
#include <android/os/BnServiceCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace os {
class LIBBINDER_EXPORTED BnServiceCallback : public ::android::BnInterface<IServiceCallback> {
public:
  static constexpr uint32_t TRANSACTION_onRegistration = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  explicit BnServiceCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnServiceCallback

class LIBBINDER_EXPORTED IServiceCallbackDelegator : public BnServiceCallback {
public:
  explicit IServiceCallbackDelegator(const ::android::sp<IServiceCallback> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IServiceCallback> getImpl() { return _aidl_delegate; }
  ::android::binder::Status onRegistration(const ::std::string& name, const ::android::sp<::android::IBinder>& binder) override {
    return _aidl_delegate->onRegistration(name, binder);
  }
private:
  ::android::sp<IServiceCallback> _aidl_delegate;
};  // class IServiceCallbackDelegator
}  // namespace os
}  // namespace android
