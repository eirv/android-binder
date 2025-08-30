/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/content/pm/IPackageManagerNative.h>

namespace android {
namespace content {
namespace pm {
class LIBBINDER_EXPORTED BpPackageManagerNative : public ::android::BpInterface<IPackageManagerNative> {
public:
  explicit BpPackageManagerNative(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpPackageManagerNative() = default;
  ::android::binder::Status getNamesForUids(const ::std::vector<int32_t>& uids, ::std::vector<::std::string>* _aidl_return) override;
  ::android::binder::Status getPackageUid(const ::std::string& packageName, int64_t flags, int32_t userId, int32_t* _aidl_return) override;
  ::android::binder::Status getInstallerForPackage(const ::android::String16& packageName, ::std::string* _aidl_return) override;
  ::android::binder::Status getVersionCodeForPackage(const ::android::String16& packageName, int64_t* _aidl_return) override;
  ::android::binder::Status isAudioPlaybackCaptureAllowed(const ::std::vector<::std::string>& packageNames, ::std::vector<bool>* _aidl_return) override;
  ::android::binder::Status getLocationFlags(const ::std::string& packageName, int32_t* _aidl_return) override;
  ::android::binder::Status getTargetSdkVersionForPackage(const ::android::String16& packageName, int32_t* _aidl_return) override;
  ::android::binder::Status getModuleMetadataPackageName(::std::string* _aidl_return) override;
  ::android::binder::Status hasSha256SigningCertificate(const ::std::string& packageName, const ::std::vector<uint8_t>& certificate, bool* _aidl_return) override;
  ::android::binder::Status isPackageDebuggable(const ::android::String16& packageName, bool* _aidl_return) override;
  ::android::binder::Status hasSystemFeature(const ::android::String16& featureName, int32_t version, bool* _aidl_return) override;
  ::android::binder::Status registerStagedApexObserver(const ::android::sp<::android::content::pm::IStagedApexObserver>& observer) override;
  ::android::binder::Status unregisterStagedApexObserver(const ::android::sp<::android::content::pm::IStagedApexObserver>& observer) override;
  ::android::binder::Status getStagedApexInfos(::std::vector<::android::content::pm::StagedApexInfo>* _aidl_return) override;
};  // class BpPackageManagerNative
}  // namespace pm
}  // namespace content
}  // namespace android
