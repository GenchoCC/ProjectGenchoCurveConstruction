
#include <iostream>
#include <memory>
#include "Cash.h"
int main()
{
	std::cout << "Hello World!" << std::endl;
	
	Cash obj(Currency("EUR"), 2, 3, 1, 0.01, 0.1);

	auto cash = std::make_shared<Cash>(Currency("USD"), 2, 3, 1, 0.01, 0.1);
	// hhgjghjg;hgh;
	return 0;
	//S s; // calls S::S()
	//S s2(10); // calls S::S(int)
}
