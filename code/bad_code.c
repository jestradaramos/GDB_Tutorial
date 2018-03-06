#include <stdio.h>
#include <stdlib.h>


struct Node{
	int data;
	struct Node* next;
}Node;


int main(int argc, char** argv){
	struct Node* head;
	struct Node* tail;
		

}

struct Node* createNode(int data, struct Node* next){
	struct Node* aNode = (struct Node*) malloc (sizeof (Node));
	aNode->data = data;
	aNode->next = next;
	return aNode;
}

void enqueue(struct Node* tail, int newData){
	return;
}

int dequeue(struct Node* head){
	return 5;
}
void printQueue(struct Node* head){
	return;
}
