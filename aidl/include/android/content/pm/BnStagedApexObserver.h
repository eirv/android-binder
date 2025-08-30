/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/content/pm/IStagedApexObserver.h>
#include <android/content/pm/BnStagedApexObserver.h>
#include <binder/Delegate.h>


namespace android {
namespace content {
namespace pm {
class LIBBINDER_EXPORTED BnStagedApexObserver : public ::android::BnInterface<IStagedApexObserver> {
public:
  static constexpr uint32_t TRANSACTION_onApexStaged = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  explicit BnStagedApexObserver();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnStagedApexObserver

class LIBBINDER_EXPORTED IStagedApexObserverDelegator : public BnStagedApexObserver {
public:
  explicit IStagedApexObserverDelegator(const ::android::sp<IStagedApexObserver> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IStagedApexObserver> getImpl() { return _aidl_delegate; }
  ::android::binder::Status onApexStaged(const ::android::content::pm::ApexStagedEvent& event) override {
    return _aidl_delegate->onApexStaged(event);
  }
private:
  ::android::sp<IStagedApexObserver> _aidl_delegate;
};  // class IStagedApexObserverDelegator
}  // namespace pm
}  // namespace content
}  // namespace android
