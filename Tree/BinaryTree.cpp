#include <iostream>
#include <queue>
#include "BinaryTree.h"


BinaryTree::BinaryTree() {
	this->root = nullptr;
}

BinaryTree::~BinaryTree(){
	delete this->root;
}

void BinaryTree::bfs() {
	std::queue<Node*> queue;
	queue.push(this->root);

	while (!queue.empty()) {
		Node* current = queue.front();
		queue.pop();
		std::cout << current->data << " ";
		if (current->left != nullptr) queue.push(current->left);
		if (current->right != nullptr) queue.push(current->right);
	}
}

void BinaryTree::insert(int data) {
	Node* newNode = new Node(data);
	if (this->root == nullptr) {
		this->root = newNode;
		return;
	}
	std::queue<Node*> queque;
	queque.push(this->root);
	while (!queque.empty()) {
		Node* current = queque.front();
		queque.pop();
		if (current->left == nullptr) {
			current->left = newNode;
			return;
		}
		if (current->right == nullptr) {
			current->right = newNode;
			return;
		}
		queque.push(current->left);
		queque.push(current->right);
	}
}
