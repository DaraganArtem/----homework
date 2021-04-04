#include <iostream>

struct goblin{
	goblin* prev;
	goblin* next;
	int number;
};


goblin* push_to_end(goblin* last, int number){
	goblin* current = last;
	last = new goblin;
	current->next = last;
	last->prev = current;
	last->next = NULL;
	last->number = number;
	return last;
	}

goblin* push_to_middle(goblin* center, int number){
	goblin* current = center->next;
	goblin* insert = new goblin;
	current->prev = insert;
	center->next = insert;
	insert->number = number;
	insert->next = current;
	insert->prev = center;
	return center;
}

goblin* go_to_doctor(goblin* first){
	goblin* current = first->next;
	std::cout << first->number << std::endl;
	if (current != NULL) {
		current->prev = NULL;
	}
	delete first;
	return current;
}

int main(){
	int queue = 0;
	int N;
	std::cin >> N;
	std::string str;
	int i = 0;

	goblin* last = NULL;
	goblin* first = NULL;
	goblin* center = NULL;
	
	while (i < N){
		i++;
		if (queue == 0){
			std::cin >> str;
			std::cin >> str;
			last = new goblin;
			first = last;
			last->number = std::stoi(str);
			last->prev = NULL;
			last->next = NULL;

			center = first;
			queue++;
		}
		
		else {
			std::cin >> str;
				if (str == "+") {
					std::cin >> str;
					last = push_to_end(last, std::stoi(str));
					if (queue % 2 == 0) {
						center = center->next;
					}
					queue++;
				}	
			
			else if (str == "*") {
				std::cin >> str;
				if (queue > 1) {
					center = push_to_middle(center, stoi(str));
				}
				if (queue == 1) {
					last = push_to_end(center, std::stoi(str));
				}
				if (queue % 2 == 0) {
					center = center->next;
				}
				queue++;
			}
			
			else if (str == "-") {
				first = go_to_doctor(first);
				if (queue % 2 == 0) {
					center = center->next;
				}
				queue--;
			}

			else std::cout << "Что-то пошло не так.";

		}
	}

	while(last != NULL){
		goblin* current = last;
		last = last->prev;
		delete current;
	}

	return 0;
}