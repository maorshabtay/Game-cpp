#include "builder.h"
#include <iostream>
int main() {
	Soldier* s = builder(100, 20).build();
	std::cout << s->_life << std::endl;
	while (1) {}
	return 0;
}
