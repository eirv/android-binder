#include <binder/IServiceManager.h>

#include <cstdio>

using namespace android;

int main() {
  auto sm = defaultServiceManager();
  auto binder = sm->waitForService(StaticString16{u"activity"});

  printf("binder=%p\n", binder.get());
  if (binder) {
    printf("binder.isBinderAlive=%d\n", binder->isBinderAlive());
  }
}
