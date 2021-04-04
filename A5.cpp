#include <iostream>

typedef struct Stack {
	int value;
	struct Stack* next;
}Stack;

void push(Stack** head, int value)
{
	if (*head == NULL) {
		*head = new Stack;
		(*head)->value = value;
		(*head)->next = NULL;
		return;
	}

	Stack* new_stack = new Stack;
	new_stack->next = *head;
	new_stack->value = value;
	*head = new_stack;
}

int pop(Stack** head) 
{
	int save_value;
	if (*head != NULL) {
		save_value = (*head)->value;
		if ((*head)->next == NULL) {
			*head = NULL;
		}	
		else {
			Stack* move_head = (*head)->next;
			delete *head;
			*head = move_head;
		}
	}
	return save_value;
}

void print(Stack* head)
{
	Stack* new_stack = head;
	while (new_stack->next != NULL) {
		std::cout << new_stack->value << ' ';
		new_stack = new_stack->next;
	}
	std::cout << '\n';
}

int main()
{
	Stack* my_stack = NULL;
	int k;
	int length = 0; 

	std::cin >> k;
	while (k != 0) {
		if (k > 0) {
			push(&my_stack, k);
			length = length + 1;
		}
		if (k < 0 and my_stack != NULL) {
			if (-k/2 < my_stack->value) {
				my_stack->value = my_stack->value + k;
			}
			if (-k/2 >= my_stack->value) {
				pop(&my_stack);
				length = length - 1;
			}
		}
		std::cin >> k;
	}

	if (my_stack == NULL) {
		std::cout << "Стек пустой." << '\n';
		return 0;
	}
	else {
		std::cout << length << ' ' << my_stack->value << '\n';
		return 0;
	}	
}