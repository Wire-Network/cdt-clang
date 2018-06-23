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
    cl::desc("Print include directives in -E mode in addition to normal output"),
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
static cl::opt<std::string> sysroot_opt(
    "sysroot",
    cl::desc("Set the system root directory"),
    cl::Prefix,
    cl::cat(EosioCompilerToolCategory));
static cl::opt<std::string> isysroot_opt(
    "isysroot",
    cl::desc("Set the system root directory (usually /)"),
    cl::Hidden,
    cl::Prefix,
    cl::cat(EosioCompilerToolCategory));
static cl::opt<std::string> eosio_imports_opt(
    "eosio-imports",
    cl::desc("Set the file for eosio.imports"),
    cl::Hidden,
    cl::cat(EosioCompilerToolCategory));
static cl::opt<std::string> isystem_opt(
    "isystem",
    cl::desc("Add directory to SYSTEM include search path"),
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

static std::string GetDefaults() {
   return " --target=wasm32 -nostdlib -ffreestanding -fno-builtin "
          " -Xclang -load -Xclang ../lib/LLVMEosioApply${CMAKE_SHARED_LIBRARY_SUFFIX} "
#ifdef CPP_COMP
          " -fno-rtti -fno-exceptions "
#endif
          " -DBOOST_DISABLE_ASSERTS -DBOOST_EXCEPTION_DISABLE "
          " -I${Boost_INCLUDE_DIR} "
          " -I${Boost_INCLUDE_DIR} ";
   //       " --sysroot=${EOSIO_INSTALL} ";
   //comp_ss << " -I${EOSIO_INSTALL}/include/ -I${EOSIO_INSTALL}/include/libcxx -I${EOSIO_INSTALL}/include/libc ";
}

static Options CreateOptions(bool add_defaults=true) {
   std::stringstream comp_ss;
   std::stringstream link_ss;
   std::string output_fn;
   bool link = true;

   if (add_defaults)
      comp_ss << GetDefaults();
//   comp_ss << " --target=wasm32 -nostdlib -ffreestanding -fno-builtin ";
//   comp_ss << " -Xclang -load -Xclang ../lib ";${EOSIO_APPLY_LIB} ";
//   comp_ss << " -DBOOST_DISABLE_ASSERTS -DBOOST_EXCEPTION_DISABLE ";
//   comp_ss << " -I${Boost_INCLUDE_DIR} ";
//   comp_ss << " -I${Boost_INCLUDE_DIR} ";
//   comp_ss << " --sysroot=${EOSIO_INSTALL} ";
//   comp_ss << " -I${EOSIO_INSTALL}/include/ -I${EOSIO_INSTALL}/include/libcxx -I${EOSIO_INSTALL}/include/libc ";
   if (!fno_cfl_aa_opt) {
      comp_ss << " -mllvm -use-cfl-aa-in-codegen=both ";
      link_ss << " -fno-cfl-aa ";
   }
   for ( auto input_filename : input_filename_opt )
      comp_ss << input_filename << " ";
   if (!sysroot_opt.empty()) {
      comp_ss << " --sysroot " << isysroot_opt << " ";
      comp_ss << " -I" << sysroot_opt << "/include/libcxx" << " -I" << sysroot_opt << "/include/libc ";
      link_ss << " -L" << sysroot_opt << "/lib"; 
   }
   else {
      comp_ss << " -I../include/libcxx" << " -I../include/libc ";
      comp_ss << " --sysroot=../ ";
   }
   if (!isystem_opt.empty()) {
      comp_ss << " -isystem " << isystem_opt << " "; 
   }
   if (CC_opt)
      comp_ss << " -CC ";
   if (C_opt)
      comp_ss << " -C ";
   if (c_opt) {
      comp_ss << " -c ";
      link = false;
   }
   if (dD_opt)
      comp_ss << " -dD ";
   if (dI_opt)
      comp_ss << " -dI ";
   if (dM_opt)
      comp_ss << " -dM ";
   for ( auto define : D_opt )
      comp_ss << "-D" << define << " ";
   if (emit_ast_opt)
      comp_ss << " -emit-ast ";
   if (emit_llvm_opt)
      comp_ss << " -emit-llvm ";
   if (E_opt)
      comp_ss << " -E ";
   if (finline_functions_opt)
      comp_ss << " -finline-functions ";
   if (finline_hint_functions_opt)
      comp_ss << " -finline-hint-functions ";
   if (fmerge_all_constants_opt)
      comp_ss << " -fmerge-all-constants ";
   if (fno_lto_opt) {
      link_ss << " --lto-O0 ";
      if (!lto_opt_opt.empty())
         std::cerr << "Warning : lto disabled but lto optimization level given\n";
   }
   else if (!lto_opt_opt.empty())
      link_ss << " --lto-" << lto_opt_opt << " ";
   else
      link_ss << " --lto-O3 ";
   if (fstack_protector_all_opt)
      comp_ss << " -fstack-protector-all ";
   if (fstack_protector_strong_opt)
      comp_ss << " -fstack-protector-strong ";
   if (fstack_protector_opt)
      comp_ss << " -fstack-protector ";
   if (fstrict_enums_opt)
      comp_ss << " -fstrict-enums ";
   if (fstrict_return_opt)
      comp_ss << " -fstrict-return ";
   for ( auto include : include_opt )
      comp_ss << " -include=" << include << " ";
   for ( auto inc_dir : I_opt )
      comp_ss << " -I" << inc_dir << " ";
   for ( auto lib_dir : L_opt )
      link_ss << " -L" << lib_dir << " ";
   for ( auto library : l_opt )
      link_ss << " -l" << library << " ";
   if (o_opt.empty()) {
      comp_ss << " -o a.out ";
      link_ss << " a.out ";
      link_ss << " -o a.out";
      output_fn = "a.out";
   }
   else {
      comp_ss << " -o " << o_opt << " ";
      link_ss << o_opt << " ";
      link_ss << " -o " << o_opt << " ";
      output_fn = o_opt;
   }
   if (O_opt.empty())
      comp_ss << " -O3 ";
   else
      comp_ss << " -O" << O_opt << " ";
   if (S_opt) {
      comp_ss << " -S ";
      link = false;
   }
   if (v_opt)
      comp_ss << " -v ";
   if (w_opt)
      comp_ss << " -w ";
   for ( auto warn : W_opt )
      comp_ss << " -W" << warn << " ";
   
   if (link)
      comp_ss << " -c ";
   
   if (!eosio_imports_opt.empty())
      link_ss << " -eosio-imports=" << eosio_imports_opt << " ";
#ifdef CPP_COMP
   if (faligned_allocation_opt)  
      comp_ss << " -faligned-allocation ";
   if (fcoroutine_ts_opt)  
      comp_ss << " -fcoroutine-ts ";
   if (fno_elide_constructors_opt)
      comp_ss << " -fno-elide-constructors ";
   if (fstrict_vtable_pointers_opt)
      comp_ss << " -fstrict-vtable-pointers ";
#endif

   return {comp_ss.str(), link_ss.str(), output_fn, link};
}
