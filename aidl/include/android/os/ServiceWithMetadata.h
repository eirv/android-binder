/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/IBinder.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace os {
class LIBBINDER_EXPORTED ServiceWithMetadata : public ::android::Parcelable {
public:
  ::android::sp<::android::IBinder> service;
  bool isLazyService = false;
  inline bool operator==(const ServiceWithMetadata& _rhs) const {
    return std::tie(service, isLazyService) == std::tie(_rhs.service, _rhs.isLazyService);
  }
  inline bool operator<(const ServiceWithMetadata& _rhs) const {
    return std::tie(service, isLazyService) < std::tie(_rhs.service, _rhs.isLazyService);
  }
  inline bool operator!=(const ServiceWithMetadata& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ServiceWithMetadata& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ServiceWithMetadata& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ServiceWithMetadata& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.os.ServiceWithMetadata");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ServiceWithMetadata{";
    _aidl_os << "service: " << ::android::internal::ToString(service);
    _aidl_os << ", isLazyService: " << ::android::internal::ToString(isLazyService);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class ServiceWithMetadata
}  // namespace os
}  // namespace android
