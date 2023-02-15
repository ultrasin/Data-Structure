#include <iostream>
#include "treeNode.h"

using std::cout; using std::cin; using std::endl; using std::ostream;

TreeNode::TreeNode
(int _data, TreeNode* _left, TreeNode* _right) : nodeValue(_data), left(_left), right(_right) {

}

TreeNode::~TreeNode() {
}