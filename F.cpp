#include <iostream>

int main()
{
	int a;
	int A;
	std::cin >> A;
	int num = 1;
	for (int i = 0; i <= 9999; i++){
		std::cin >> a;
		if (a == A){
			num = num + 1;
		}
		if (a > A and a != 0){
			A = a;
			num = 1;
		}
		if (a == 0){
			break;
		}
	}
	std::cout << "Наибольшее число в последовательности " << A  
	<< " и всего их встретилось " << num << '\n';
	return 0;
}