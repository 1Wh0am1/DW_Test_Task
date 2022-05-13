#include <iostream>
#include "MyDictionary.h"
#include "MyDictionary.cpp"

int main()
{
	MyDictionary<int32_t, std::string> dictionary;
	dictionary.set(1, "something");
	dictionary.set(2, "test");
	std::cout << dictionary.is_set(1) << " " << dictionary.get(1) << "\n";
	std::cout << dictionary.is_set(2) << " " << dictionary.get(2) << "\n";
}
