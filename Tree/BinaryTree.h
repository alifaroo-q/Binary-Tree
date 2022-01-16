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
	void insert(int);
	
};

