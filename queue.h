#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue
{

		int* _elements;
		int _maxSize;
		int _count;
	
} queue;
bool isFull(queue* q);
void initQueue(queue* q, unsigned int size);
void cleanQueue(queue* q);
bool isEmpty(queue* q);
void enqueue(queue* q, unsigned int newValue);
int dequeue(queue* q); // return element in top of queue, or -1 if empty

#endif /* QUEUE_H */