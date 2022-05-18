#include "main_test.h"
#include "A/index.h"
#include "B/lib.h"

TEST_F(MainTest, StandardOperations) {
    ASSERT_EQ(add(3, 5), 8);
    ASSERT_EQ(add(3, -7), -4);
    ASSERT_EQ(add(-5, 5), 0);
    ASSERT_EQ(sub(3, 5), -2);
    ASSERT_EQ(sub(3, -7), 10);
    ASSERT_EQ(sub(-5, 5), -10);
    ASSERT_EQ(mul(3, 5), 15);
    ASSERT_EQ(mul(3, -7), -21);
    ASSERT_EQ(mul(-5, 5), -25);
    ASSERT_EQ(divis(10, 5), 2);
    ASSERT_EQ(divis(10, 3), 3);
    ASSERT_EQ(divis(10, 7), 1);
}

TEST_F(MainTest, GetOne) {
    ASSERT_TRUE(GetOne() == 1);
    ASSERT_FALSE(GetOne() == 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
