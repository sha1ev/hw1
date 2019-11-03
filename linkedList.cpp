#include <iostream>
#include "linkedList.h"

void push(stack** s, unsigned int element)
{
	stack* theAddOn = new stack;
	theAddOn->element = element;
	theAddOn->next = (*s);
	(*s) = theAddOn;
}

void pop(stack** s)
{
	stack* curr = (*s);
	if (*s)
	{
		*s = (*s)->next;
		delete curr;
	}

}