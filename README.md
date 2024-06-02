# Leetcode Solution Wrapper

This repo is still in a very experimental stage.
But the principle is simple, so it's possible to try it out in a hands-on way.

⚠️ Should be noticed that this is a third-party tool, and it's not affiliated with Leetcode.
It won't take any responsibility for any damage caused by using this tool.

## How it works

The fundamental idea is:
every leetcode input/output is a JSON object | Markdown table (for database test).
So the key point is to get a serializer/deserializer for each language.

## Examples

In `examples` directory, there are some experimental showcases to demonstrate how it works.
I finished my first try in C++ `two-sum` problem, and it works well.

### Try with C++

C++ programs require `nlohmann/json` library to work.
We use `vcpkg` to manage the dependencies.
You should install `vcpkg` and configure it in your PATH before running the example.

```bash
git submodule update --init
# For Linux | MacOS
(cd examples/cpp/ && vcpkg install)
```

Then you can try the example with `CMake` extension in VSCode.
Press `Ctrl+F5` to debug the program with CMake.

## [WIP] Generator

In the future, templates for each language should be dynamically generated.
I'v setup a Rust project to generate the template, but didn't write any code yet.

## Progress

- [x] C++: Array input/output
- [ ] C++: ListNode input/output
- [ ] C++: TreeNode input/output
- [ ] Python: ...
