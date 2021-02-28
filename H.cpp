#include <iostream>

int main() 
{
    int N;
    std::cin >> N;
	int a = 2;
    while(N != 1) {
	if (N % a == 0) {
		std::cout << a << '\n';
		N = N / a;
		a = 1;
	}
	a = a + 1;
	}
    return 0;
}

