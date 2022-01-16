#pragma once

class Node {
public:
	int data;
	Node* left;
	Node* right;

public:
	Node(int data);
	~Node();
};
