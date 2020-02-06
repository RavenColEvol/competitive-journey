#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *left = nullptr;
    struct node *right = nullptr;

    node(int data)
    {
    	this->data = data;
    }
};


void insert(struct node* root, string path, int val);
void insertHelper(struct node* root, string path, int val, int current_index);
void display(struct node* root);
int maxDepth(struct node* root);

int main() {
    int t, x;
    cin >> t >> x;
    struct node* root = new node(x);

    for(int i = 0; i < t - 1; i++) {
    	string path;
    	int val;
    	cin >> path >> val;
    	insert(root, path, val);
    }

    cout << 1 + maxDepth(root->left) + maxDepth(root->right) << endl;
    // display(root);
    return 0;
}

void insert(struct node* root, string path, int val) {
	insertHelper(root, path, val, 0);
}

void insertHelper(struct node* root, string path, int val, int current_index) {
	if(path[current_index] == '\0')
		return ;

	if(path[current_index] == 'L'){
		if(root->left == nullptr) {
			root->left = new node(val);
		}
		else{
			root = root->left;
		}
	}
	else{
		if(root->right == nullptr) {
			root->right = new node(val);
		}
		else{
			root = root->right;
		}
	}

	insertHelper(root, path, val, current_index + 1);
}

void display(struct node* root) {
	if(root == nullptr)
		return;

	cout << root->data;
	display(root->left);
	display(root->right);
}

int maxDepth(struct node* root) {
	if(root == nullptr)
		return 0;

	return 1 + max(maxDepth(root->left), maxDepth(root->right));
}