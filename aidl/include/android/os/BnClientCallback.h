/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/os/IClientCallback.h>
#include <android/os/BnClientCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace os {
class LIBBINDER_EXPORTED BnClientCallback : public ::android::BnInterface<IClientCallback> {
public:
  static constexpr uint32_t TRANSACTION_onClients = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  explicit BnClientCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnClientCallback

class LIBBINDER_EXPORTED IClientCallbackDelegator : public BnClientCallback {
public:
  explicit IClientCallbackDelegator(const ::android::sp<IClientCallback> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IClientCallback> getImpl() { return _aidl_delegate; }
  ::android::binder::Status onClients(const ::android::sp<::android::IBinder>& registered, bool hasClients) override {
    return _aidl_delegate->onClients(registered, hasClients);
  }
private:
  ::android::sp<IClientCallback> _aidl_delegate;
};  // class IClientCallbackDelegator
}  // namespace os
}  // namespace android
