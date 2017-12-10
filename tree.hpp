#include <iostream>

using namespace std;

class Node{
	public:
		int value;
		Node* right;
		Node* left;
};
class Tree{
	private:
		Node* root;
		void dump(Node* tree) {
			if(tree != NULL) {
				dump(tree -> left);
				cout << tree -> value << " ";
				dump(tree -> right);
			}
		}
		void insert(int value, Node* tree) {
			if(tree == NULL) {
				Node* newNode = new Node;
				newNode -> value = value;
				newNode -> right = NULL;
				newNode -> left = NULL;
			}
			else{
				if(value < tree -> value) {
					if(tree -> left != NULL)
						insert(value, tree -> left);
					else {
						tree -> left = new Node;
						tree -> left -> value = value;
						tree -> left -> right = NULL;
						tree -> left -> left = NULL;
					}
				}
				else {
					if(tree -> right != NULL)
						insert(value, tree -> right);
					else {
						tree -> right = new Node;
						tree -> right -> value = value;
						tree -> right -> right = NULL;
						tree -> right -> left = NULL;
					}
				}
			}
		}
	public:
		Tree(int value) {
			root = new Node();
			root -> value = value;
			root -> right = NULL;
			root -> left = NULL;
		}
		void show() {
			return dump(root);
		}
		void add(int value) {
			return insert(value, root);
		}
		~Tree() {
		}
};