#include <iostream>

int main()
{
	int a;
	int A = 0;
	do{
		std::cin >> a;
		if (a % 2 == 0 and a > A){
			A = a;
		}
	}while (a != 0);
	if (A == 0){
		std::cout << "В последовательности нет чётных чисел." << '\n';
		return 0;
	}
	else {
		std::cout << "Наибольшее чётное число в последовательности: " << A << '\n';
		return 0;
	}
}