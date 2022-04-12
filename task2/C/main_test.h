#pragma once

#include <gtest/gtest.h>

class MainTest: public ::testing::Test{
 protected:
     void SetUp() final {}
     void TearDown() final {}
};
