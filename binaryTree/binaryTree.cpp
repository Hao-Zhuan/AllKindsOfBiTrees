#include"source.h"
BinaryTree::BinaryTree(void) :root(nullptr) {}
BinaryTree::BinaryTree(TreeNode* r) : root(r) {}
void BinaryTree::printTree() {
	std::queue<TreeNode*>q;
	std::vector<int>res;
	TreeNode* root = this->root;
	while (root || !q.empty()) {
		while (root) {
			q.emplace(root->left);
			q.emplace(root->right);
			res.emplace_back(root->val);
		}
		root = q.front(); 
		q.pop();
		if (!root)res.emplace_back(-1);
	}
	for (auto i : res) {
		std::cout << i << ",";
	}
}
std::vector<int> BinaryTree::preorderTraversal(TreeNode*){
	std::vector<int>res;
	std::stack<TreeNode*>st;
	while (root || !q.empty()) {
		while (root) {
			q.emplace(root);
			res.emplace_back(root->val);
			root = root->left;
		}
		root = st.top();
		st.pop();
		root = root->right;
	}
	return res;
}
std::vector<int> BinaryTree::inorderTraversal(TreeNode*){
	std::vector<int>res;
	std::stack<TreeNode*>st;
	while (root || !q.empty()) {
		while (root) {
			q.emplace(root);
			root = root->left;
		}
		root = st.top();
		res.emplace_back(root->val);
		st.pop();
		root = root->right;
	}
	return res;
}
std::vector<int> BinaryTree::postorderTraversal(TreeNode*){
	//tbd
}
std::vector<int> BinaryTree::levelorderTraversal(TreeNode*){
	std::queue<TreeNode*>q;
	std::vector<int>res;
	TreeNode* root = this->root;
	while (root || !q.empty()) {
		while (root) {
			q.emplace(root->left);
			q.emplace(root->right);
			res.emplace_back(root->val);
		}
		root = q.front();
		q.pop();
	}
	for (auto i : res) {
		std::cout << i << ",";
	}
}

