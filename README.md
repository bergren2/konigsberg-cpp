# [Königsberg](https://github.com/bergren2/konigsberg) - C++

C++14

## Setup

- [Bazelisk](https://github.com/bazelbuild/bazelisk)

### macOS

```shell
brew bundle
```

### Windows

```shell
choco install bazelisk
```

## Development

```shell
bazel sync
bazel build //:all
bazel test //:all
```

## Resources
- https://www.learncpp.com
- [C++ and Bazel](https://bazel.build/docs/bazel-and-cpp)
    - There's some good info here about `include` paths and `BUILD` files that should inform how you build out this
      project

### Style Guides

Haven't settled on one so throwing a few options here for perusal:
- https://google.github.io/styleguide/cppguide.html
- https://docs.unrealengine.com/5.1/en-US/epic-cplusplus-coding-standard-for-unreal-engine/