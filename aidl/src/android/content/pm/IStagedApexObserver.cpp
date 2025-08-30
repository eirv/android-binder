/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: aidl -h aidl/include -o aidl/src -I platform/framework/native/libs/binder/aidl --lang=cpp platform/framework/native/libs/binder/aidl/android/content/pm/ApexStagedEvent.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IPackageManagerNative.aidl platform/framework/native/libs/binder/aidl/android/content/pm/IStagedApexObserver.aidl platform/framework/native/libs/binder/aidl/android/content/pm/StagedApexInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ConnectionInfo.aidl platform/framework/native/libs/binder/aidl/android/os/IAccessor.aidl platform/framework/native/libs/binder/aidl/android/os/IClientCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceCallback.aidl platform/framework/native/libs/binder/aidl/android/os/IServiceManager.aidl platform/framework/native/libs/binder/aidl/android/os/Service.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl platform/framework/native/libs/binder/aidl/android/os/ServiceWithMetadata.aidl
 */
#include <android/content/pm/IStagedApexObserver.h>
#include <android/content/pm/BpStagedApexObserver.h>
namespace android {
namespace content {
namespace pm {
DO_NOT_DIRECTLY_USE_ME_IMPLEMENT_META_INTERFACE(StagedApexObserver, "android.content.pm.IStagedApexObserver")
}  // namespace pm
}  // namespace content
}  // namespace android
#include <android/content/pm/BpStagedApexObserver.h>
#include <android/content/pm/BnStagedApexObserver.h>
#include <binder/Parcel.h>

namespace android {
namespace content {
namespace pm {

BpStagedApexObserver::BpStagedApexObserver(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IStagedApexObserver>(_aidl_impl){
}

::android::binder::Status BpStagedApexObserver::onApexStaged(const ::android::content::pm::ApexStagedEvent& event) {
  ::android::Parcel _aidl_data;
  _aidl_data.markForBinder(remoteStrong());
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeParcelable(event);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(BnStagedApexObserver::TRANSACTION_onApexStaged, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IStagedApexObserver::getDefaultImpl()) [[unlikely]] {
     return IStagedApexObserver::getDefaultImpl()->onApexStaged(event);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

}  // namespace pm
}  // namespace content
}  // namespace android
#include <android/content/pm/BnStagedApexObserver.h>
#include <binder/Parcel.h>
#include <binder/Stability.h>

namespace android {
namespace content {
namespace pm {

BnStagedApexObserver::BnStagedApexObserver()
{
  ::android::internal::Stability::markCompilationUnit(this);
}

::android::status_t BnStagedApexObserver::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case BnStagedApexObserver::TRANSACTION_onApexStaged:
  {
    ::android::content::pm::ApexStagedEvent in_event;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readParcelable(&in_event);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(onApexStaged(in_event));
  }
  break;
  default:
  {
    _aidl_ret_status = ::android::BBinder::onTransact(_aidl_code, _aidl_data, _aidl_reply, _aidl_flags);
  }
  break;
  }
  if (_aidl_ret_status == ::android::UNEXPECTED_NULL) {
    _aidl_ret_status = ::android::binder::Status::fromExceptionCode(::android::binder::Status::EX_NULL_POINTER).writeOverParcel(_aidl_reply);
  }
  return _aidl_ret_status;
}

}  // namespace pm
}  // namespace content
}  // namespace android
