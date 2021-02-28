#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	if (N <= 0 or N >= 100000){
		std::cout << "Неправильный номер года." << '\n';
		return 0;
	}
	if (N % 4 == 0 and N % 100 != 0){
		std::cout << "YES" << '\n';
		return 0;
	}
	if (N % 400 == 0){
		std::cout << "YES" << '\n';
		return 0;
	}
	else {
		std::cout << "NO" << '\n';
		return 0;
	}
}