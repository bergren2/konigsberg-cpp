cc_library(
    name = "euler",
    srcs = glob(
        include = [
            "src/euler/*.cc",
            "src/euler/*.h"
        ]
    ),
)

cc_test(
  name = "euler_tests",
  size = "small",
  srcs = glob(
      include = ["tests/euler/*_test.cc"]
  ),
  deps = [
      "@com_google_googletest//:gtest_main",
      "euler"
  ],
)
