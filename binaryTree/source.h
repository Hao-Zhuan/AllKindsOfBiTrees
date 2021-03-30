//binaryTree.h
#pragma once
#include <iostream>
#include <stack>
#include <vector>
#define floor size_t 

struct TreeNode
{
	int val;
	TreeNode* left, * right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* l, TreeNode* r) : val(x), left(l), right(r) {}
};

class BinaryTree
{
public:
	TreeNode* root;
	BinaryTree();
	BinaryTree(TreeNode*);
	virtual ~BinaryTree() {};
	virtual void buildTree(std::vector<int>) = 0;
	virtual void addNode(TreeNode) = 0;
	std::vector<int> preorderTraversal(TreeNode*);
	std::vector<int> inorderTraversal(TreeNode*);
	std::vector<int> postorderTraversal(TreeNode*);
	std::vector<int> levelorderTraversal(TreeNode*);
	void printTree() ;
};
class RandomBinaryTree :private BinaryTree {
	virtual void buildTree(std::vector<int>) {}
	virtual void addNode(TreeNode){}
public:
	void buildTree(floor n) {}
};
class BalancedBinaryTree :public BinaryTree {
public:
	virtual void buildTree(std::vector<int>) {};
	virtual void addNode(TreeNode) {};
	virtual ~BalancedBinaryTree()
	{

	}
};
class AVLTree :public BalancedBinaryTree {
public:
	virtual void buildTree(std::vector<int>) {};
	virtual void addNode(TreeNode) {};
	virtual ~AVLTree()
	{

	}
};
class BlackRedTree :public AVLTree {};

