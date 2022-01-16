#include "Node.h"

Node::Node(int data) {
	this->data = data;
	this->left = nullptr;
	this->right = nullptr;
}

Node::~Node() {
	delete this->left;
	delete this->right;
	delete this;
}
