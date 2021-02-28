#include <iostream>

int main() 
{
	int sum = 0;
	int input_num;
	float average = 0;
	int length;
	std::cin >> length;
	int *my_list = new int[length];

	for (int j = 0; j < length; ++j){
		std::cin >> input_num;
		average = average + input_num;
		my_list[j] = input_num;
	}
	average = average / length;
	for (int i = 0; i < length; ++i) {
		if (my_list[i] > average) {
			sum = sum + my_list[i];
		}
	}
	std::cout << "Сумма чисел больше среднего последовательности: "
	<< sum << '\n';
	delete [] my_list;
	return 0;
}