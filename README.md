# js-to-cpp-fast-track

This repository documents my transition from **JavaScript** to **modern C++** through a chapter-based path. Each chapter is self-contained with exercises, a mini-project, and a chapter README.

## Repository Structure

```
js-to-cpp-fast-track/
├── 00-setup/                    # Toolchain, hello world, build sanity
├── 01-flow-control/             # if/else, switch, loops, input validation
├── 02-functions-memory/         # functions, references, stack vs heap
├── 03-arrays-stl/               # arrays, vector, string, STL basics
├── 04-oop-basics/               # classes, constructors, destructors, RAII
├── 05-inheritance-polymorphism/ # virtual functions, interfaces, overrides
├── 06-smart-pointers/           # unique_ptr/shared_ptr, ownership
├── 07-stl-algorithms/           # algorithms, iterators, lambdas
├── 08-error-handling/           # exceptions, error codes, debugging
├── 09-modern-cpp/               # move semantics, constexpr, optional/variant
├── 10-capstone/                 # larger project combining everything
└── README.md
```

Each chapter `README.md` contains:

- Learning objectives
- Key concepts
- Exercises
- Mini-project requirements
- Notes comparing C++ concepts to JS

## Quick Start

### Prereqs (Arch Linux)

```
sudo pacman -Syu
sudo pacman -S base-devel gcc clang make gdb
```

### Verify

```
g++ --version
make --version
gdb --version
```

### Build & Run (per chapter)

```
cd 01-flow-control
make
make run
```

## Build Policy (repo conventions)

- Target standard: **C++20**
- Warnings: `-Wall -Wextra -Wpedantic`
- Prefer STL + RAII (`std::vector`, `std::string`, smart pointers) over raw `new/delete`
- Each chapter Makefile should provide:
  - `make` (build)
  - `make run` (run)
  - `make clean`
  - `make rebuild`

## Study Path (each chapter has a project)

- **00-setup:** "Build Check" — compile, run, debug a tiny program; print args and environment info.
- **01-flow-control:** "CLI Menu App" — menu loop + validation (e.g., unit converter).
- **02-functions-memory:** "Utility Toolkit" — functions, overloads, references; small benchmarks/notes.
- **03-arrays-stl:** "Todo List (in-memory)" — add/list/remove/search with `vector<string>`.
- **04-oop-basics:** "Todo List (OOP)" — `TodoItem` + `TodoList` classes, clean interfaces.
- **05-inheritance-polymorphism:** "Shape Area Calculator" — base `Shape` + derived types + virtual methods.
- **06-smart-pointers:** "Object Graph" — nodes owned by `unique_ptr`, optional shared references.
- **07-stl-algorithms:** "Text Stats Tool" — frequency counts + sorting + algorithms + lambdas.
- **08-error-handling:** "File-backed Loader" — robust parsing + error reporting + exceptions where appropriate.
- **09-modern-cpp:** "Refactor Pass" — apply move, `optional`, `variant`, `constexpr` where it fits.
- **10-capstone:** "File-backed CLI App" — pick one (todo/contacts/notes) with persistence + clean structure.

## Git Workflow

```
git checkout -b chapter-01-flow-control
git add 01-flow-control
git commit -m "Chapter 1: flow control mini-project"
```

## Recommended Tools

- Editor: VS Code
- Debugger: `gdb` (or `lldb`)
- Static analysis: `clang-tidy`, `cppcheck`
- Online compiler: https://godbolt.org/

## License

MIT (see [LICENSE](./LICENSE)).
