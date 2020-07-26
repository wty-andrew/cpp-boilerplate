#ifndef MOCK_FOO_H
#define MOCK_FOO_H

#include "foo.h"

class MockFoo: public Foo {
public:
  int value;
  void do_something() override {}
  int get_something() const override {
    return value;
  }
};

#endif // MOCK_FOO_H
