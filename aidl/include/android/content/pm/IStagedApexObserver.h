/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <android/content/pm/ApexStagedEvent.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/StrongPointer.h>

namespace android::content::pm {
class ApexStagedEvent;
}  // namespace android::content::pm
namespace android {
namespace content {
namespace pm {
class LIBBINDER_EXPORTED IStagedApexObserverDelegator;

class LIBBINDER_EXPORTED IStagedApexObserver : public ::android::IInterface {
public:
  typedef IStagedApexObserverDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(StagedApexObserver)
  virtual ::android::binder::Status onApexStaged(const ::android::content::pm::ApexStagedEvent& event) = 0;
};  // class IStagedApexObserver

class LIBBINDER_EXPORTED IStagedApexObserverDefault : public IStagedApexObserver {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status onApexStaged(const ::android::content::pm::ApexStagedEvent& /*event*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IStagedApexObserverDefault
}  // namespace pm
}  // namespace content
}  // namespace android
