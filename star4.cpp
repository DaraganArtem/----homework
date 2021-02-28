#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	for (int i = N; i > 0; i = i - 2) {
		for (int l = N - i; l > 0; l = l - 2) {
			std::cout << ' ';
		}
		for (int j = 0; j < i; j++) {
			std::cout << '*';
		}
		std::cout << '\n';
	}
	return 0;
}