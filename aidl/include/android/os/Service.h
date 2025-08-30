/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/os/ServiceWithMetadata.h>
#include <array>
#include <binder/Enums.h>
#include <binder/IBinder.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cassert>
#include <cstdint>
#include <string>
#include <type_traits>
#include <utility>
#include <utils/String16.h>
#include <variant>

#ifndef __BIONIC__
#define __assert2(a,b,c,d) ((void)0)
#endif

namespace android::os {
class ServiceWithMetadata;
}  // namespace android::os
namespace android {
namespace os {
class LIBBINDER_EXPORTED Service : public ::android::Parcelable {
public:
  enum class Tag : int32_t {
    serviceWithMetadata = 0,
    accessor = 1,
  };
  // Expose tag symbols for legacy code
  static const inline Tag serviceWithMetadata = Tag::serviceWithMetadata;
  static const inline Tag accessor = Tag::accessor;

  template<typename _Tp>
  static constexpr bool _not_self = !std::is_same_v<std::remove_cv_t<std::remove_reference_t<_Tp>>, Service>;

  Service() : _value(std::in_place_index<static_cast<size_t>(serviceWithMetadata)>, ::android::os::ServiceWithMetadata()) { }

  template <typename _Tp, typename = std::enable_if_t<_not_self<_Tp>>>
  // NOLINTNEXTLINE(google-explicit-constructor)
  constexpr Service(_Tp&& _arg)
      : _value(std::forward<_Tp>(_arg)) {}

  template <size_t _Np, typename... _Tp>
  constexpr explicit Service(std::in_place_index_t<_Np>, _Tp&&... _args)
      : _value(std::in_place_index<_Np>, std::forward<_Tp>(_args)...) {}

  template <Tag _tag, typename... _Tp>
  static Service make(_Tp&&... _args) {
    return Service(std::in_place_index<static_cast<size_t>(_tag)>, std::forward<_Tp>(_args)...);
  }

  template <Tag _tag, typename _Tp, typename... _Up>
  static Service make(std::initializer_list<_Tp> _il, _Up&&... _args) {
    return Service(std::in_place_index<static_cast<size_t>(_tag)>, std::move(_il), std::forward<_Up>(_args)...);
  }

  Tag getTag() const {
    return static_cast<Tag>(_value.index());
  }

  template <Tag _tag>
  const auto& get() const {
    if (getTag() != _tag) { __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "bad access: a wrong tag"); }
    return std::get<static_cast<size_t>(_tag)>(_value);
  }

  template <Tag _tag>
  auto& get() {
    if (getTag() != _tag) { __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "bad access: a wrong tag"); }
    return std::get<static_cast<size_t>(_tag)>(_value);
  }

  template <Tag _tag, typename... _Tp>
  void set(_Tp&&... _args) {
    _value.emplace<static_cast<size_t>(_tag)>(std::forward<_Tp>(_args)...);
  }

  inline bool operator==(const Service& _rhs) const {
    return _value == _rhs._value;
  }
  inline bool operator<(const Service& _rhs) const {
    return _value < _rhs._value;
  }
  inline bool operator!=(const Service& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Service& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Service& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Service& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.os.Service");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "Service{";
    switch (getTag()) {
    case serviceWithMetadata: os << "serviceWithMetadata: " << ::android::internal::ToString(get<serviceWithMetadata>()); break;
    case accessor: os << "accessor: " << ::android::internal::ToString(get<accessor>()); break;
    }
    os << "}";
    return os.str();
  }
private:
  std::variant<::android::os::ServiceWithMetadata, ::android::sp<::android::IBinder>> _value;
};  // class Service
}  // namespace os
}  // namespace android
namespace android {
namespace os {
[[nodiscard]] static inline std::string toString(Service::Tag val) {
  switch(val) {
  case Service::Tag::serviceWithMetadata:
    return "serviceWithMetadata";
  case Service::Tag::accessor:
    return "accessor";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace os
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::os::Service::Tag, 2> enum_values<::android::os::Service::Tag> = {
  ::android::os::Service::Tag::serviceWithMetadata,
  ::android::os::Service::Tag::accessor,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
