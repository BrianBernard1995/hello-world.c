#include <stdio.h>
#include <stdlib.h>

typedef node;
struct node {
	int size;
	int capacity;
	int data;
	int *next;
};
typedef node Node;

void* init_node(Node *next);

int main(int argc, char* argv[]) {
	
	node Node intitial = NULL;
	node *new = NULL;

	Node = malloc(sizeof(node));
	*Node->next = node *new;
	*Node->size = 5;
	
	return 0;
}




/*
typedef struct Node {
	char data;
	struct Node* next;
} Node;

void print_list(Node* root) {
	while (root) {
		printf("%c ", root->data);
		root = root->next;
	}
	printf("\n");
}

Node* reverse(Node* root) {
	Node* new_root = 0;
	while (root) {
		Node* next = root->next;
		root->next = new_root
		new_root = root;
		root = next;
	}
	return new_root;
}

int main() {
	Node d = { 'd', 0 };
	Node c = { 'c', &d };
	Node b = { 'b', &c };
	Node a = { 'a', &b };

	Node* root = &a;
	print_list(root);
	root = reverse(root);
	print_list(root);
	getchar();
	8return 0;
}*/