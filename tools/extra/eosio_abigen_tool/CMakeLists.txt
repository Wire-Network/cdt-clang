set(LLVM_LINK_COMPONENTS support)

include_directories(include)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/eosio-abigen.cpp.in ${CMAKE_BINARY_DIR}/eosio-abigen.cpp)
if(APPLE)
   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wdollar-in-identifier-extension")
endif()
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")

add_clang_executable(eosio-abigen ${CMAKE_BINARY_DIR}/eosio-abigen.cpp)
target_compile_options(eosio-abigen PRIVATE -fexceptions)
target_include_directories(eosio-abigen PUBLIC ${CMAKE_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/../include ${CMAKE_CURRENT_SOURCE_DIR}/../jsoncons/include)
target_link_libraries(eosio-abigen PRIVATE
  clangTooling
  clangBasic
  clangASTMatchers)

install(FILES ${CMAKE_BINARY_DIR}/bin/eosio-abigen DESTINATION ${CMAKE_INSTALL_BINDIR} PERMISSIONS OWNER_READ OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)
