#include <gtest/gtest.h>
#include "hello/hello.h"

TEST(helloTest,returnOne){
  ASSERT_EQ(returnOne(),1);
}
