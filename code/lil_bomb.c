#include <stdio.h>
#include <stdlib.h>


struct Node{
	int data;
	struct Node* next;
}Node;

// Global Nodes for the queue. Just to make life easier. 
struct Node* head;
struct Node* tail;

struct Node* createNode(int data, struct Node* next);
void enqueue(int newData);
int dequeue();
void printQueue();

int main(int argc, char** argv){
	enqueue(3);
	enqueue(1);
	enqueue(4);
	enqueue(1);
	enqueue(5);
	enqueue(9);
	enqueue(2);
	enqueue(6);
	printQueue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	printQueue();
		

}
// Idk if I'll even use this
struct Node* createNode(int data, struct Node* next){
	struct Node* aNode = (struct Node*) malloc (sizeof (Node));
	aNode->data = data;
	aNode->next = next;
	return aNode;
}

// Adds new data to the back of the queue
void enqueue(int newData){
	struct Node* aNode = (struct Node*) malloc (sizeof (Node));
	aNode->data = newData;
	aNode->next = NULL;
	printf("Added %d to the queue\n\n", newData);
	// If queue is empty do this
	if (head == NULL && tail == NULL){
		head = tail = aNode;
		return;
	}
	tail->next = aNode;
	tail = aNode;
	return;
}

//  Returns the data from the head, and removes it from the queue
int dequeue(){
	struct Node* temp = head;
	int result = -1;
	if (head == NULL) return result;
	result = temp->data;
	if (head == tail){
		head = tail = NULL;
		printf("Dequeue Val: %d\nQueue is now Empty\n\n", result);
		
	} else {
		head = head->next;
		printf("Dequeue Val: %d\n\n", result);
	}
	free(temp);
	return result;
}

// Self-Explanatory 
void printQueue(){
	struct Node* index = head; 
	int count = 0;
	while (index != NULL){
		printf("Queue[%d] = %d\n", count, index->data);
		count++;
		index = index->next;
	}
	printf("End of the Queueue, with %d elements\n\n", count);
	return;
}

void explode(){
	printf("YOU FOOL, YOU'VE RUINED THE QUEUE AND WILL NOW RUIN YOUR GRADE!!\n");
	printf("HOW WOULD A ZERO MAKE YOU FEEL??\n");
	printf("I HOPE REALLY BAD\n");
	exit(0);
}
