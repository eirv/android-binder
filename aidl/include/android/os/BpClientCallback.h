/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/os/IClientCallback.h>

namespace android {
namespace os {
class LIBBINDER_EXPORTED BpClientCallback : public ::android::BpInterface<IClientCallback> {
public:
  explicit BpClientCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpClientCallback() = default;
  ::android::binder::Status onClients(const ::android::sp<::android::IBinder>& registered, bool hasClients) override;
};  // class BpClientCallback
}  // namespace os
}  // namespace android
