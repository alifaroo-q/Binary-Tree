#include <iostream>
#include <queue>
#include <stack>
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

void BinaryTree::preOrder() {
	preOrderHelper(this->root);
}

void BinaryTree::preOrderHelper(Node* node) {
	if (node == nullptr) return;
	std::cout << node->data << " ";
	if (node->left != nullptr) preOrderHelper(node->left);
	if (node->right != nullptr) preOrderHelper(node->right);
}

void BinaryTree::inOrder() {
	inOrderHelper(this->root);
}

void BinaryTree::inOrderHelper(Node* node) {
	if (node == nullptr) return;
	if (node->left != nullptr) inOrderHelper(node->left);
	std::cout << node->data << " ";
	if (node->right != nullptr) inOrderHelper(node->right);
}

void BinaryTree::postOrder() {
	postOrderHelper(this->root);
}

void BinaryTree::postOrderHelper(Node* node) {
	if (node == nullptr) return;
	if (node->left != nullptr) postOrderHelper(node->left);
	if (node->right != nullptr) postOrderHelper(node->right);
	std::cout << node->data << " ";
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
