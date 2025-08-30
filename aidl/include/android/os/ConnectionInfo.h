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
namespace os {
class LIBBINDER_EXPORTED ConnectionInfo : public ::android::Parcelable {
public:
  ::std::string ipAddress;
  int32_t port = 0;
  inline bool operator==(const ConnectionInfo& _rhs) const {
    return std::tie(ipAddress, port) == std::tie(_rhs.ipAddress, _rhs.port);
  }
  inline bool operator<(const ConnectionInfo& _rhs) const {
    return std::tie(ipAddress, port) < std::tie(_rhs.ipAddress, _rhs.port);
  }
  inline bool operator!=(const ConnectionInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ConnectionInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ConnectionInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ConnectionInfo& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.os.ConnectionInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ConnectionInfo{";
    _aidl_os << "ipAddress: " << ::android::internal::ToString(ipAddress);
    _aidl_os << ", port: " << ::android::internal::ToString(port);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class ConnectionInfo
}  // namespace os
}  // namespace android
