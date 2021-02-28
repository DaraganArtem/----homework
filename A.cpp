#include <iostream>

int main()
{
	int a; 
	int b;
	std::cin >> a >> b;
	while ( a != b){
		while (a > b){
			a = a - b;
		}
		while (b > a){
			b = b - a;
		}
	}
	std::cout << b << '\n';
	return 0;
}