/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/content/pm/IPackageManagerNative.h>
#include <android/content/pm/BnPackageManagerNative.h>
#include <android/content/pm/BnStagedApexObserver.h>
#include <binder/Delegate.h>


namespace android {
namespace content {
namespace pm {
class LIBBINDER_EXPORTED BnPackageManagerNative : public ::android::BnInterface<IPackageManagerNative> {
public:
  static constexpr uint32_t TRANSACTION_getNamesForUids = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getPackageUid = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_getInstallerForPackage = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_getVersionCodeForPackage = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_isAudioPlaybackCaptureAllowed = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_getLocationFlags = ::android::IBinder::FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_getTargetSdkVersionForPackage = ::android::IBinder::FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_getModuleMetadataPackageName = ::android::IBinder::FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_hasSha256SigningCertificate = ::android::IBinder::FIRST_CALL_TRANSACTION + 8;
  static constexpr uint32_t TRANSACTION_isPackageDebuggable = ::android::IBinder::FIRST_CALL_TRANSACTION + 9;
  static constexpr uint32_t TRANSACTION_hasSystemFeature = ::android::IBinder::FIRST_CALL_TRANSACTION + 10;
  static constexpr uint32_t TRANSACTION_registerStagedApexObserver = ::android::IBinder::FIRST_CALL_TRANSACTION + 11;
  static constexpr uint32_t TRANSACTION_unregisterStagedApexObserver = ::android::IBinder::FIRST_CALL_TRANSACTION + 12;
  static constexpr uint32_t TRANSACTION_getStagedApexInfos = ::android::IBinder::FIRST_CALL_TRANSACTION + 13;
  explicit BnPackageManagerNative();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnPackageManagerNative

class LIBBINDER_EXPORTED IPackageManagerNativeDelegator : public BnPackageManagerNative {
public:
  explicit IPackageManagerNativeDelegator(const ::android::sp<IPackageManagerNative> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IPackageManagerNative> getImpl() { return _aidl_delegate; }
  ::android::binder::Status getNamesForUids(const ::std::vector<int32_t>& uids, ::std::vector<::std::string>* _aidl_return) override {
    return _aidl_delegate->getNamesForUids(uids, _aidl_return);
  }
  ::android::binder::Status getPackageUid(const ::std::string& packageName, int64_t flags, int32_t userId, int32_t* _aidl_return) override {
    return _aidl_delegate->getPackageUid(packageName, flags, userId, _aidl_return);
  }
  ::android::binder::Status getInstallerForPackage(const ::android::String16& packageName, ::std::string* _aidl_return) override {
    return _aidl_delegate->getInstallerForPackage(packageName, _aidl_return);
  }
  ::android::binder::Status getVersionCodeForPackage(const ::android::String16& packageName, int64_t* _aidl_return) override {
    return _aidl_delegate->getVersionCodeForPackage(packageName, _aidl_return);
  }
  ::android::binder::Status isAudioPlaybackCaptureAllowed(const ::std::vector<::std::string>& packageNames, ::std::vector<bool>* _aidl_return) override {
    return _aidl_delegate->isAudioPlaybackCaptureAllowed(packageNames, _aidl_return);
  }
  ::android::binder::Status getLocationFlags(const ::std::string& packageName, int32_t* _aidl_return) override {
    return _aidl_delegate->getLocationFlags(packageName, _aidl_return);
  }
  ::android::binder::Status getTargetSdkVersionForPackage(const ::android::String16& packageName, int32_t* _aidl_return) override {
    return _aidl_delegate->getTargetSdkVersionForPackage(packageName, _aidl_return);
  }
  ::android::binder::Status getModuleMetadataPackageName(::std::string* _aidl_return) override {
    return _aidl_delegate->getModuleMetadataPackageName(_aidl_return);
  }
  ::android::binder::Status hasSha256SigningCertificate(const ::std::string& packageName, const ::std::vector<uint8_t>& certificate, bool* _aidl_return) override {
    return _aidl_delegate->hasSha256SigningCertificate(packageName, certificate, _aidl_return);
  }
  ::android::binder::Status isPackageDebuggable(const ::android::String16& packageName, bool* _aidl_return) override {
    return _aidl_delegate->isPackageDebuggable(packageName, _aidl_return);
  }
  ::android::binder::Status hasSystemFeature(const ::android::String16& featureName, int32_t version, bool* _aidl_return) override {
    return _aidl_delegate->hasSystemFeature(featureName, version, _aidl_return);
  }
  ::android::binder::Status registerStagedApexObserver(const ::android::sp<::android::content::pm::IStagedApexObserver>& observer) override {
    ::android::sp<::android::content::pm::IStagedApexObserverDelegator> _observer;
    if (observer) {
      _observer = ::android::sp<::android::content::pm::IStagedApexObserverDelegator>::cast(delegate(observer));
    }
    return _aidl_delegate->registerStagedApexObserver(_observer);
  }
  ::android::binder::Status unregisterStagedApexObserver(const ::android::sp<::android::content::pm::IStagedApexObserver>& observer) override {
    ::android::sp<::android::content::pm::IStagedApexObserverDelegator> _observer;
    if (observer) {
      _observer = ::android::sp<::android::content::pm::IStagedApexObserverDelegator>::cast(delegate(observer));
    }
    return _aidl_delegate->unregisterStagedApexObserver(_observer);
  }
  ::android::binder::Status getStagedApexInfos(::std::vector<::android::content::pm::StagedApexInfo>* _aidl_return) override {
    return _aidl_delegate->getStagedApexInfos(_aidl_return);
  }
private:
  ::android::sp<IPackageManagerNative> _aidl_delegate;
};  // class IPackageManagerNativeDelegator
}  // namespace pm
}  // namespace content
}  // namespace android
