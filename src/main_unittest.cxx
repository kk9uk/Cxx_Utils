#include <gtest/gtest.h>
#include "main.hxx"

TEST(main, case1) {
    EXPECT_FALSE(compile_time(0));
    EXPECT_EQ(compile_time(0), 0);
}

TEST(main, case2) {
    ASSERT_TRUE(compile_time(1));
    ASSERT_EQ(compile_time(1), 1);
}
