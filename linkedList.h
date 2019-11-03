typedef struct stack
{
	unsigned int element;
	struct stack* next;
}stack;

void push(stack** s, unsigned int element);
void pop(stack ** s); 
