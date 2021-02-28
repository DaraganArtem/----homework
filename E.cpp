#include <iostream>

int do_some_awesome_work(int* a, int* b)
{
	if (*a < *b) {
		return *a;
	}
	else {
		return *b;
	}
}

int main() 
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	std::cout << do_some_awesome_work(&a, &b);
	return 0;
}