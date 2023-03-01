#include "main.h"
#include <iostream>

void f() {
	std::cout << "I am in function f().\n";
}	

int main() {
	std::cout << "I am in main().\n";
	f();
	return 0;
}
