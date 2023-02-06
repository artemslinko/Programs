#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* left;
	struct Node* right;
	struct Node* parent;	
} Node;

Node* get_new_node(int data, Node* parent) {
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = data;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->parent = parent;
	return tmp;
}

void add_node(Node** root, int data) {
	Node* tmp = NULL;
	if ((*root) == NULL) {
		(*root) = get_new_node(data, NULL);
		return;
	}
	tmp = (*root);
	while (tmp != NULL) {
		if (data < tmp->data) {
			if (tmp->left != NULL) {
				tmp = tmp->left;
				continue;
			}
			else {
				tmp->left = get_new_node(data, tmp);
				return;
			}
		}
		else if (data > tmp->data) {
			if (tmp->right != NULL) {
				tmp = tmp->right;
				continue;
			}
			else {
				tmp->right = get_new_node(data, tmp);
				return;
			}
		}
		else {
			exit(2);
		}
	}
}

Node* find_min(Node* root) {
	while (root->left != NULL) {
		root = root->left;
	}
	return root;
}

Node* find_max(Node* root) {
	while (root->right != NULL) {
		root = root->right;
	}
	return root;
}

Node* find_node(Node* root, int data) {
	Node* tmp = root;
	while (tmp != NULL) {
		if (data < tmp->data) {
			tmp = tmp->left;
			continue;
		}
		else if (data > tmp->data) {
		tmp = tmp->right;
		continue;
		}
		else {
			return tmp;
		}
	}
	return NULL;
}

void delete_target(Node* target) {
	if (target->left != NULL && target->right != NULL) {
		Node* tmp_max = find_max(target->left);
		target->data = tmp_max->data;
		delete_target(tmp_max);
		return;
	}
	else if (target->left != NULL) {
		if (target == target->parent->left) {
			target->parent->left = target->left;
		}
		else {
			target->parent->right = target->left;
		}
	}
	else if (target->right != NULL) {
		if (target == target->parent->right) {
			target->parent->right = target->right;
		}
		else {
			target->parent->left = target->right;
		}
	}
	else {
		if (target == target->parent->left) {
			target->parent->left = NULL;
		}
		else {
			target->parent->right = NULL;
		}
	}
	free(target);
}

void delete_node(Node* root, int value) {
	Node* target = find_node(root, value);
	delete_target(target);
}

void print_tree(Node* root) {
	if (root->left != NULL) {
		print_tree(root->left);
	}
	printf("Value = %d\n", root->data);
	if (root->right != NULL) {
		print_tree(root->right);
	}
}

int main() {
	// some manipulations with binary tree
	Node* root = NULL;
	int arr[10] = { 5, 12, 3, 8, 9, 6, 15, 16, 1, 20 };
	for (int i = 0; i < 10; i++) {
		add_node(&root, arr[i]);
	}
	print_tree(root);
	delete_node(root, arr[6]);
	printf("\n");
	print_tree(root);
	return 0;
}