/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace content {
namespace pm {
class LIBBINDER_EXPORTED StagedApexInfo : public ::android::Parcelable {
public:
  ::std::string moduleName;
  ::std::string diskImagePath;
  int64_t versionCode = 0L;
  ::std::string versionName;
  bool hasClassPathJars = false;
  inline bool operator==(const StagedApexInfo& _rhs) const {
    return std::tie(moduleName, diskImagePath, versionCode, versionName, hasClassPathJars) == std::tie(_rhs.moduleName, _rhs.diskImagePath, _rhs.versionCode, _rhs.versionName, _rhs.hasClassPathJars);
  }
  inline bool operator<(const StagedApexInfo& _rhs) const {
    return std::tie(moduleName, diskImagePath, versionCode, versionName, hasClassPathJars) < std::tie(_rhs.moduleName, _rhs.diskImagePath, _rhs.versionCode, _rhs.versionName, _rhs.hasClassPathJars);
  }
  inline bool operator!=(const StagedApexInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const StagedApexInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const StagedApexInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const StagedApexInfo& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.content.pm.StagedApexInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "StagedApexInfo{";
    _aidl_os << "moduleName: " << ::android::internal::ToString(moduleName);
    _aidl_os << ", diskImagePath: " << ::android::internal::ToString(diskImagePath);
    _aidl_os << ", versionCode: " << ::android::internal::ToString(versionCode);
    _aidl_os << ", versionName: " << ::android::internal::ToString(versionName);
    _aidl_os << ", hasClassPathJars: " << ::android::internal::ToString(hasClassPathJars);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class StagedApexInfo
}  // namespace pm
}  // namespace content
}  // namespace android
