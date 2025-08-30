/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <string>
#include <utils/StrongPointer.h>

namespace android {
namespace os {
class LIBBINDER_EXPORTED IServiceCallbackDelegator;

class LIBBINDER_EXPORTED IServiceCallback : public ::android::IInterface {
public:
  typedef IServiceCallbackDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(ServiceCallback)
  virtual ::android::binder::Status onRegistration(const ::std::string& name, const ::android::sp<::android::IBinder>& binder) = 0;
};  // class IServiceCallback

class LIBBINDER_EXPORTED IServiceCallbackDefault : public IServiceCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status onRegistration(const ::std::string& /*name*/, const ::android::sp<::android::IBinder>& /*binder*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IServiceCallbackDefault
}  // namespace os
}  // namespace android
