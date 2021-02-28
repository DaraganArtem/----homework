#include <iostream>

int main() 
{
	int N;
	std::cin >> N;
	int a = 1;
	for (int i = 2; i < N; i++){
		if (N % i == 0) {
			a = 0;
			break;
		}
	}
	std::cout << a;
	return 0;
}
