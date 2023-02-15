#ifndef TREENODE_H
#define TREENODE_H

class TreeNode {
public:
	TreeNode(int _data, TreeNode* _left = nullptr, TreeNode* _right = nullptr);
	int nodeValue;
	TreeNode* left;
	TreeNode* right;
	~TreeNode();
};

#endif // !TREENODE_H