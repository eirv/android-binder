/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/os/IAccessor.h>
#include <android/os/BnAccessor.h>
#include <binder/Delegate.h>


namespace android {
namespace os {
class LIBBINDER_EXPORTED BnAccessor : public ::android::BnInterface<IAccessor> {
public:
  static constexpr uint32_t TRANSACTION_addConnection = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getInstanceName = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  explicit BnAccessor();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnAccessor

class LIBBINDER_EXPORTED IAccessorDelegator : public BnAccessor {
public:
  explicit IAccessorDelegator(const ::android::sp<IAccessor> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IAccessor> getImpl() { return _aidl_delegate; }
  ::android::binder::Status addConnection(::android::os::ParcelFileDescriptor* _aidl_return) override {
    return _aidl_delegate->addConnection(_aidl_return);
  }
  ::android::binder::Status getInstanceName(::android::String16* _aidl_return) override {
    return _aidl_delegate->getInstanceName(_aidl_return);
  }
private:
  ::android::sp<IAccessor> _aidl_delegate;
};  // class IAccessorDelegator
}  // namespace os
}  // namespace android
