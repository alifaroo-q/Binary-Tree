#pragma once
#include <iostream>
#include "Node.h"

class BinaryTree {
private:
	Node* root;

public:
	BinaryTree();
	~BinaryTree();

	void bfs();
	void preOrder();
	void inOrder();
	void postOrder();
	void insert(int);
	bool contains(int);

private:
	void preOrderHelper(Node*);
	void inOrderHelper(Node*);
	void postOrderHelper(Node*);
};

