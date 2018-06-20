set(LLVM_LINK_COMPONENTS support)

find_package(Boost 1.67.0 REQUIRED system filesystem)
if(Boost_FOUND)
   include_directories (SYSTEM ${Boost_INCLUDE_DIR})
endif()
include_directories(include)
add_clang_executable(cppeos cppeos.cpp)
target_compile_options(cppeos PRIVATE -fexceptions)
target_include_directories(cppeos PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(cppeos PRIVATE
  clangTooling
  clangBasic
  clangASTMatchers
  ${Boost_LIBRARIES}
  )
