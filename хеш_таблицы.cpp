#include <unordered_map>
#include <iostream>

// Через STL
std::unordered_map<std::string, int> hash_table;
hash_table["key1"] = 100;
hash_table["key2"] = 200;
std::cout << hash_table["key1"]; // 100

// Собственная реализация с цепочками
