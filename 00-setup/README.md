# Setting Up Your Environment

This directory explains how I set my environment and toolchain for C++ development on Arch Linux. Adjust accordingly for your OS.

## Prerequisites

Make sure your system is up to date and has the necessary build tools installed.

```bash
sudo pacman -Syu
sudo pacman -S base-devel gcc clang make gdb
```

gcc: GNU Compiler Collection for compiling C++ code
clang: Alternative C++ compiler
make: Build automation tool
gdb: GNU Debugger for debugging C++ programs

## Verify Installation

Check that the tools are installed correctly by verifying their versions:

```bash
g++ --version
make --version
gdb --version
```

Expected output should show version numbers for each tool.

## Makefile Commands

Each chapter contains a Makefile with the following commands:

- `make`: Compile the code
- `make run`: Execute the compiled program
- `make clean`: Remove compiled files
- `make rebuild`: Clean and then compile again

## Testing the Environment

To ensure everything is set up correctly, navigate to this directory and run the following commands:

```bash
make
make run
```

You should see this output:

`The environment has been set up successfully!`

## Next Steps

if you see the success message above, your C++ development environment is ready to go!  
Proceed to the next chapter: [01-flow-control](../01-flow-control/README.md) for learning about control flow in C++.
