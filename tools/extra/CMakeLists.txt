set(EOSIO_VER_MAJOR "1")
set(EOSIO_VER_MINOR "0")
set(EOSIO_VER_REVISION "0")

add_subdirectory(eosio_c_tool)
add_subdirectory(eosio_ld_tool)
add_subdirectory(eosio_abigen_tool)

set(EOSIO_STACK_SIZE "8192")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/include/compiler_options.hpp.in ${CMAKE_BINARY_DIR}/compiler_options.hpp)


