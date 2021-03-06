///<summery>
///This is the binary tree implementations foung on <ref>https://geekesforgeeks.com</ref>
///</summery>
///<remarks>
///	I used this as refrence for my assumptions
/// needless to say my assumptions where mostly wrong
///</remarks>

// CPP program to construct binary  
// tree from given array in level 
// order fashion Tree Node 
#include <iostream>

using namespace std;

/* A binary tree node has data,
pointer to left child and a
pointer to right child */
struct Node
{
	int data;
	Node *left, *right;
};

/* Helper function that allocates a
new node */
Node* newNode(int data)
{
	Node* node = static_cast<Node*>(malloc(sizeof(Node)));
	node->data = data;
	node->left = node->right = nullptr;
	return (node);
}

// Function to insert nodes in level order 
Node* insertLevelOrder(int arr[], Node* root,
                       int i, int n)
{
	// Base case for recursion 
	if (i < n)
	{
		Node* temp = newNode(arr[i]);
		root = temp;

		// insert left child 
		root->left = insertLevelOrder(arr,
		                              root->left, 2 * i + 1, n);

		// insert right child 
		root->right = insertLevelOrder(arr,
		                               root->right, 2 * i + 2, n);
	}
	return root;
}

void inOrder(Node* root)
{
	if (root != nullptr)
	{
		inOrder(root->left);
		cout << root->data << " ";
		inOrder(root->right);
	}
}

// Driver program to test above function 
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 6, 6, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	Node* root = insertLevelOrder(arr, root, 0, n);
	inOrder(root);
}
