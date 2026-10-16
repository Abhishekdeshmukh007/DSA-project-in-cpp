# BST Deletion of a Node with Two Children

## Aim
To write a C++ program to delete a node having two children from a Binary Search Tree (BST) using its inorder successor and display the updated tree.

## Objective
- To understand the deletion operation in a Binary Search Tree.
- To find the inorder successor of a node.
- To maintain the BST property after deletion.
- To display the updated tree using inorder traversal.

## Theory
A Binary Search Tree (BST) is a binary tree in which:
- The left subtree contains values smaller than the root.
- The right subtree contains values greater than the root.
- Both subtrees follow the same BST property.

When a node has two children, it can be deleted by replacing its value with its inorder successor. The inorder successor is the smallest node in the right subtree. After replacement, the original successor node is deleted.

## Algorithm
1. Create an empty Binary Search Tree.
2. Insert the given values into the BST.
3. Search for the node to be deleted.
4. Find the inorder successor by moving to the right subtree and then repeatedly to the left.
5. Replace the target node's value with the successor's value.
6. Delete the original successor node.
7. Display the updated BST using inorder traversal.

## Program
```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

Node* findSuccessor(Node* root) {
    while (root != nullptr && root->left != nullptr)
        root = root->left;

    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    }
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* successor = findSuccessor(root->right);
        root->data = successor->data;
        root->right = deleteNode(root->right, successor->data);
    }

    return root;
}

void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, value, key;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "Enter node to delete: ";
    cin >> key;

    root = deleteNode(root, key);

    cout << "Updated BST (Inorder): ";
    inorder(root);

    cout << endl;
    return 0;
}
```

## Sample Input
```text
Enter number of nodes: 7
Enter node values: 50 30 70 20 40 60 80
Enter node to delete: 50
```

## Sample Output
```text
Updated BST (Inorder): 20 30 40 60 70 80
```

## Example
Before deletion:

```text
        50
       /  \
      30   70
     / \   / \
    20 40 60 80
```

The node `50` has two children. Its inorder successor is `60`, the smallest value in its right subtree.

After deletion:

```text
        60
       /  \
      30   70
     / \     \
    20 40     80
```

## Time Complexity
- **Insertion:** O(h) per node
- **Deletion:** O(h)
- **Inorder Traversal:** O(n)

Here, `h` is the height of the BST and `n` is the number of nodes. In the worst case, the height can be `n`.

## Applications
- Maintaining sorted data.
- Searching and updating records.
- Implementing dictionaries and sets.
- Understanding tree deletion operations.

## Conclusion
The program successfully deletes a node having two children using its inorder successor and maintains the Binary Search Tree property. The updated tree is displayed using inorder traversal in sorted order.
```
