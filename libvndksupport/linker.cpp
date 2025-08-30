#include "platform/system/core/libvndksupport/linker.cpp"

[[gnu::visibility("hidden"), gnu::always_inline]]
android_namespace_t* android_get_exported_namespace(const char*) {
  return nullptr;
}
