cc_binary(
    name = "main",
    srcs = ["src/main.cpp"],
)

cc_test(
  name = "hello_test",
  size = "small",
  srcs = ["tests/hello_test.cpp"],
  deps = ["@com_google_googletest//:gtest_main"],
)
