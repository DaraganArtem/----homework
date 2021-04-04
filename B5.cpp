#include <iostream>

typedef struct Stack {
	int value;
	struct Stack* next;
}Stack;

Stack* push(Stack** head, int value)
{
	if (*head == NULL) {
		*head = new Stack;
		(*head)->value = value;
		(*head)->next = NULL;
		return *head;
	}

	Stack* new_stack = new Stack;
	new_stack->next = *head;
	new_stack->value = value;
	*head = new_stack;
	return *head;
}

Stack* pop(Stack** head) 
{
	int save_value;
	if (*head != NULL) {
		save_value = (*head)->value;
		if ((*head)->next == NULL) {
			*head = NULL;
		}	
		else {
			Stack *move_head = (*head)->next;
			delete *head;
			*head = move_head;
		}
	}
	return *head;
}

int main()
{
	Stack* arr = NULL;
	Stack* a;
	Stack* b;
	std::string str;
	
	while (std::cin >> str){
		if (str == "+") {
			a = arr;
			arr = a->next;
			b = arr;
			arr = b->next;
			arr = push(&arr, a->value + b->value);
			delete a;
			delete b;
		}

		else if (str == "*") {
			a = arr;
			arr = a->next;
		    b = arr;
			arr = b->next;
		    arr = push(&arr, a->value * b->value);
			delete a;
			delete b;
		}

		else if (str == "-") {
			a = arr;
			arr = a->next;
		    b = arr;
			arr = b->next;
		    arr = push(&arr, b->value - a->value);
			delete a;
			delete b;
		}

		else if (str == "/") {
			a = arr;
			arr = a->next;
		    b = arr;
			arr = b->next;
		    arr = push(&arr, b->value / a->value);
			delete a;
			delete b;
		}

		else {
		 	arr = push(&arr, std::stoi(str));
		}
	}

	std::cout << arr->value;

	while(arr != NULL) {
		arr = pop(&arr);
	}
	return 0;
}