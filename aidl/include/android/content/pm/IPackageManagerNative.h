/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <android/content/pm/IStagedApexObserver.h>
#include <android/content/pm/StagedApexInfo.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <utils/String16.h>
#include <utils/StrongPointer.h>
#include <vector>

namespace android::content::pm {
class IStagedApexObserver;
class StagedApexInfo;
}  // namespace android::content::pm
namespace android {
namespace content {
namespace pm {
class LIBBINDER_EXPORTED IPackageManagerNativeDelegator;

class LIBBINDER_EXPORTED IPackageManagerNative : public ::android::IInterface {
public:
  typedef IPackageManagerNativeDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(PackageManagerNative)
  enum : int32_t { LOCATION_SYSTEM = 1 };
  enum : int32_t { LOCATION_VENDOR = 2 };
  enum : int32_t { LOCATION_PRODUCT = 4 };
  virtual ::android::binder::Status getNamesForUids(const ::std::vector<int32_t>& uids, ::std::vector<::std::string>* _aidl_return) = 0;
  virtual ::android::binder::Status getPackageUid(const ::std::string& packageName, int64_t flags, int32_t userId, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status getInstallerForPackage(const ::android::String16& packageName, ::std::string* _aidl_return) = 0;
  virtual ::android::binder::Status getVersionCodeForPackage(const ::android::String16& packageName, int64_t* _aidl_return) = 0;
  virtual ::android::binder::Status isAudioPlaybackCaptureAllowed(const ::std::vector<::std::string>& packageNames, ::std::vector<bool>* _aidl_return) = 0;
  virtual ::android::binder::Status getLocationFlags(const ::std::string& packageName, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status getTargetSdkVersionForPackage(const ::android::String16& packageName, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status getModuleMetadataPackageName(::std::string* _aidl_return) = 0;
  virtual ::android::binder::Status hasSha256SigningCertificate(const ::std::string& packageName, const ::std::vector<uint8_t>& certificate, bool* _aidl_return) = 0;
  virtual ::android::binder::Status isPackageDebuggable(const ::android::String16& packageName, bool* _aidl_return) = 0;
  virtual ::android::binder::Status hasSystemFeature(const ::android::String16& featureName, int32_t version, bool* _aidl_return) = 0;
  virtual ::android::binder::Status registerStagedApexObserver(const ::android::sp<::android::content::pm::IStagedApexObserver>& observer) = 0;
  virtual ::android::binder::Status unregisterStagedApexObserver(const ::android::sp<::android::content::pm::IStagedApexObserver>& observer) = 0;
  virtual ::android::binder::Status getStagedApexInfos(::std::vector<::android::content::pm::StagedApexInfo>* _aidl_return) = 0;
};  // class IPackageManagerNative

class LIBBINDER_EXPORTED IPackageManagerNativeDefault : public IPackageManagerNative {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status getNamesForUids(const ::std::vector<int32_t>& /*uids*/, ::std::vector<::std::string>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getPackageUid(const ::std::string& /*packageName*/, int64_t /*flags*/, int32_t /*userId*/, int32_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getInstallerForPackage(const ::android::String16& /*packageName*/, ::std::string* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getVersionCodeForPackage(const ::android::String16& /*packageName*/, int64_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status isAudioPlaybackCaptureAllowed(const ::std::vector<::std::string>& /*packageNames*/, ::std::vector<bool>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getLocationFlags(const ::std::string& /*packageName*/, int32_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getTargetSdkVersionForPackage(const ::android::String16& /*packageName*/, int32_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getModuleMetadataPackageName(::std::string* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status hasSha256SigningCertificate(const ::std::string& /*packageName*/, const ::std::vector<uint8_t>& /*certificate*/, bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status isPackageDebuggable(const ::android::String16& /*packageName*/, bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status hasSystemFeature(const ::android::String16& /*featureName*/, int32_t /*version*/, bool* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status registerStagedApexObserver(const ::android::sp<::android::content::pm::IStagedApexObserver>& /*observer*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status unregisterStagedApexObserver(const ::android::sp<::android::content::pm::IStagedApexObserver>& /*observer*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getStagedApexInfos(::std::vector<::android::content::pm::StagedApexInfo>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IPackageManagerNativeDefault
}  // namespace pm
}  // namespace content
}  // namespace android
