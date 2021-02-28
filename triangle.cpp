#include <iostream>
#include <math.h>

int main()
{
	double x;
	double y;
	std::cin >> x;
	std::cin >> y;
	double z = sqrt(x * x + y * y);
	std::cout << z;
	return 0;
}