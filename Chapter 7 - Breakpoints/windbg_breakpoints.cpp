#include "pch.h"
#include <iostream>

void customized_sum(int& a, int b)
{
	if (a % 2 == 0)
		a++;
	
	a = a + b;
}

int main()
{
	int a = 10;
	customized_sum(a, 3);
    std::cout << "Result: " << a << std::endl; 
    
	std::cout << "Press any key to exit...\n"; 
	getchar();
}
