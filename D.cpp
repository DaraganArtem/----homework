#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	for (int a = 2; a < 10000; a = a * 2) {
		if (N == a){
			std::cout << "YES" << '\n';
			return 0;
		}
	}
	if (N <= 0 or N > 10000){
		std::cout << "Вводите натуральное число не превышающее 10000.";
		return 0;
	}
	if (N == 1){
		std::cout << "YES" << '\n';
		return 0; 
	}
	else {
		std::cout << "NO" << '\n';
		return 0;
	}
}