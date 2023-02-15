#include <iostream>
#include "binaryTree.h"
using std::cout; using std::endl; using std::ostream;

BinaryTree::BinaryTree() : root(nullptr) {

}

void BinaryTree::insertNode(int _value) {
	if (root == nullptr) {
		root = new TreeNode(_value);
	}
	else {
		TreeNode* current = root;
		while (true) {
			if (_value < current->nodeValue) {
				if (current->left == nullptr) {
					current->left = new TreeNode(_value);
					break;
				}
				else {
					current = current->left;
				}
			}
			else if (_value > current->nodeValue) {
				if (current->right == nullptr) {
					current->right = new TreeNode(_value);
					break;
				}
				else {
					current = current->right;
				}
			}
			else {
				break;
			}
		}
	}
}