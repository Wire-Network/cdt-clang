static llvm::cl::OptionCategory EosioCompilerToolCategory(std::string(COMPILER_NAME)+" options");
static cl::opt<bool> CC_opt(
    "CC",
    cl::desc("Include comments from within macros in preprocessed output"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> C_opt(
    "C",
    cl::desc("Include comments in preprocessed output"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> c_opt(
    "c",
    cl::desc("Only run preprocess, compile, and assemble steps"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> dD_opt(
    "dD",
    cl::desc("Print macro definitions in -E mode in addition to normal output"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> dI_opt(
    "dI",
    cl::desc("Print include directives in -E mode in addition to normal outpu"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> dM_opt(
    "dM",
    cl::desc("Print macro definitions in -E mode instead to normal output"),
    cl::cat(EosioCompilerToolCategory));
static cl::list<std::string> D_opt(
    "D",
    cl::desc("Define <macro> to <value> (or 1 if <value> omitted)"),
    cl::ZeroOrMore,
    cl::Prefix,
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> emit_ast_opt(
    "emit-ast",
    cl::desc("Emit Clang AST files for source inputs"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> emit_llvm_opt(
    "emit-llvm",
    cl::desc("Use the LLVM representation for assembler and object files"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> E_opt(
    "E",
    cl::desc("Only run the preprocessor"),
    cl::cat(EosioCompilerToolCategory));
#ifdef CPP_COMP
static cl::opt<bool> faligned_allocation_opt(
    "faligned-allocation",
    cl::desc("Enable C++17 aligned allocation functions"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fcoroutine_ts_opt(
    "fcoroutine-ts",
    cl::desc("Enable support for the C++ Coroutines TS"),
    cl::cat(EosioCompilerToolCategory));
#endif
static cl::opt<bool> finline_functions_opt(
    "finline-functions",
    cl::desc("Inline suitable functions"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> finline_hint_functions_opt(
    "finline-hint-functions",
    cl::desc("Inline functions which are (explicitly or implicitly) marked inline"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fmerge_all_constants_opt(
    "fmerge-all-constants",
    cl::desc("Allow merging of constants"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fno_elide_constructors_opt(
    "fno-elide-constructors",
    cl::desc("Disable C++ copy constructor elision"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fno_lto_opt(
    "fno-lto",
    cl::desc("Disable LTO"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fno_cfl_aa_opt(
      "fno-cfl-aa",
      cl::desc("Disable CFL Alias Analysis"),
      cl::cat(EosioCompilerToolCategory));
static cl::opt<std::string> lto_opt_opt(
      "lto-opt",
      cl::desc("LTO Optimization level (O0-O3)"),
      cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fstack_protector_all_opt(
    "fstack-protector-all",
    cl::desc("Force the usage of stack protectors for all functions"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fstack_protector_strong_opt(
    "fstack-protector-strong",
    cl::desc("Use a strong heuristic to apply stack protectors to functions"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fstack_protector_opt(
    "fstack-protector",
    cl::desc("Enable stack protectors for functions potentially vulnerable to stack smashing"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fstrict_enums_opt(
    "fstrict-enums",
    cl::desc("Enable optimizations based on the strict definition of an enum's value range"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fstrict_return_opt(
    "fstrict-return",
    cl::desc("Always treat control flow paths that fall off the end of a non-void function as unreachable"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> fstrict_vtable_pointers_opt(
    "fstrict-vtable-pointers",
    cl::desc("Enable optimizations based on the strict rules for overwriting polymorphic C++ objects"),
    cl::cat(EosioCompilerToolCategory));
static cl::list<std::string> include_opt(
    "include",
    cl::desc("Include file before parsing"),
    cl::cat(EosioCompilerToolCategory),
    cl::ZeroOrMore);
static cl::list<std::string> I_opt(
    "I",
    cl::desc("Add directory to include search path"),
    cl::cat(EosioCompilerToolCategory),
    cl::Prefix,
    cl::ZeroOrMore);
static cl::list<std::string> L_opt(
    "L",
    cl::desc("Add directory to library search path"),
    cl::cat(EosioCompilerToolCategory),
    cl::Prefix,
    cl::ZeroOrMore);
static cl::list<std::string> l_opt(
    "l",
    cl::desc("Root name of library to link"),
    cl::cat(EosioCompilerToolCategory),
    cl::Prefix,
    cl::ZeroOrMore);
static cl::opt<std::string> o_opt(
    "o",
    cl::desc("Write output to <file>"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<std::string> O_opt(
    "O",
    cl::desc("Optimization level s, 0-3"),
    cl::Prefix,
    cl::cat(EosioCompilerToolCategory));
static cl::opt<std::string> isysroot_opt(
    "isysroot",
    cl::desc("Set the system root directory (usually /)"),
    cl::Prefix,
    cl::cat(EosioCompilerToolCategory));
#ifdef CPP_COMP
static cl::opt<std::string> std_opt(
    "std",
    cl::desc("Language standard to compile for"),
    cl::cat(EosioCompilerToolCategory));
#endif
static cl::opt<bool> S_opt(
    "S",
    cl::desc("Only run preprocess and compilation steps"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<std::string> U_opt(
    "U",
    cl::desc("Undefine macro <macro>"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> v_opt(
    "v",
    cl::desc("Show commands to run and use verbose output"),
    cl::cat(EosioCompilerToolCategory));
static cl::opt<bool> w_opt(
    "w",
    cl::desc("Suppress all warnings"),
    cl::cat(EosioCompilerToolCategory));
static cl::list<std::string> W_opt(
    "W",
    cl::desc("Enable the specified warning"),
    cl::cat(EosioCompilerToolCategory),
    cl::Prefix,
    cl::ZeroOrMore);
static cl::list<std::string> input_filename_opt(
      cl::Positional, 
      cl::desc("<input file> ..."), 
      cl::cat(EosioCompilerToolCategory),
      cl::OneOrMore);

struct Options {
   std::string compiler;
   std::string linker;
   std::string output_fn;
   bool link;
};

