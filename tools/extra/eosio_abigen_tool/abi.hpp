#pragma once

#include <vector>
#include <string>

struct abi_typedef {
   std::string name;
   std::string base_type;
};

struct abi_field {
   std::string name;
   std::string type;
};

struct abi_struct {
   std::string name;
   std::string base;
   std::vector<abi_field> fields;
};

/// From eosio libraries/chain/include/eosio/chain/abi_def.hpp
struct abi {
   std::string version = "eosio::abi/1.0";
   std::vector<abi_struct> structs;
};
