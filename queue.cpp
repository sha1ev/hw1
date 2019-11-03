#include "queue.h"

void enqueue(queue* q, unsigned int newValue) {
	int i = 0;
	if (!isFull(q)) {
		for (i = q->_count; i > 0; i--) {
			q->_elements[i] = q->_elements[i - 1];
		}
		q->_elements[0] = newValue;
		q->_count++;
	}
}
int dequeue(queue* q) {
	int ans = -1;

	if (!isEmpty(q)) {
		ans = q->_elements[q->_count];
		q->_count--;

	}
	return(ans);
}
void initQueue(queue* q, unsigned int size) {
	q->_count = 0;
	q->_maxSize = size;
	q->_elements = new int[size];
}

void cleanQueue(queue* q) {
	delete[] q->_elements;
}

bool isFull(queue* q) {
	return(q->_count == q->_maxSize);
}

bool isEmpty(queue* q) {
	return(q->_count == 0);
}
