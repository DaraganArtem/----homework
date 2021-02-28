#include <iostream>

int main()
{
	int a;
	int N = 0;
	do{
		std::cin >> a;
		if (a % 2 == 0){
			N = N + 1;
		}
	}while (a != 0);
	std::cout << "Количество чётных чисел в последовательности: " << N - 1 << '\n';
	return 0;
}