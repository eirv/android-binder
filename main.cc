#include <binder/IServiceManager.h>

#include <cstdio>

using namespace android;

int main() {
  static_assert(__ANDROID_API__ >= 36, "Only supports Android 16 and above");

  auto sm = defaultServiceManager();
  auto binder = sm->waitForService(StaticString16{u"activity"});

  printf("binder=%p\n", binder.get());
  if (binder) {
    printf("binder.isBinderAlive=%d\n", binder->isBinderAlive());
  }
}
