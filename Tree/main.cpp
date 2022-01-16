#include "BinaryTree.h"

int main() {
	
	BinaryTree tree = BinaryTree();

	tree.insert(1);
	tree.insert(2);
	tree.insert(3);
	tree.insert(4);
	tree.insert(5);
	tree.insert(6);
	tree.insert(7);

	tree.postOrder();
	
	if (tree.contains(4)) std::cout << "\nelement found in tree";

	system("pause>0");
}
