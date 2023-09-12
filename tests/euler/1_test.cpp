#include <gtest/gtest.h>
#include "src/euler/1.h"

TEST(Problem1, Example) {
    EXPECT_EQ(Solve(10), 23);
}

TEST(Problem1, Actual) {
    EXPECT_EQ(Solve(1000), 233168);
}
