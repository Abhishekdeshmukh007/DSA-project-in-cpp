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

// Insert a node into BST
Node* insert(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Find inorder successor (minimum in right subtree)
Node* findSuccessor(Node* root) {
    while (root != nullptr && root->left != nullptr)
        root = root->left;

    return root;
}

// Find inorder predecessor (maximum in left subtree)
Node* findPredecessor(Node* root) {
    while (root != nullptr && root->right != nullptr)
        root = root->right;

    return root;
}

// Search for a key
bool search(Node* root, int key) {
    if (root == nullptr)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

// Delete a node using successor or predecessor
Node* deleteNode(Node* root, int key, int method) {
    if (root == nullptr)
        return nullptr;

    if (key < root->data) {
        root->left = deleteNode(root->left, key, method);
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key, method);
    }
    else {
        // Node has no left child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // Node has no right child
        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node has two children
        if (method == 1) {
            Node* successor = findSuccessor(root->right);
            cout << "Inorder successor: "
                 << successor->data << endl;

            root->data = successor->data;
            root->right = deleteNode(
                root->right, successor->data, method
            );
        }
        else {
            Node* predecessor = findPredecessor(root->left);
            cout << "Inorder predecessor: "
                 << predecessor->data << endl;

            root->data = predecessor->data;
            root->left = deleteNode(
                root->left, predecessor->data, method
            );
        }
    }

    return root;
}

// Display the BST sideways
void displayTree(Node* root, int space = 0) {
    if (root == nullptr)
        return;

    space += 5;

    displayTree(root->right, space);

    cout << endl;
    for (int i = 5; i < space; i++)
        cout << " ";

    cout << root->data << endl;

    displayTree(root->left, space);
}

// Display inorder traversal
void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Free allocated memory
void destroyTree(Node* root) {
    if (root == nullptr)
        return;

    destroyTree(root->left);
    destroyTree(root->right);
    delete root;
}

int main() {
    Node* root = nullptr;
    int n, value, key, method;

    cout << "Enter number of nodes: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid number of nodes." << endl;
        return 0;
    }

    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "\nBST before deletion:\n";
    displayTree(root);

    cout << "\nInorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "\nEnter node to delete: ";
    cin >> key;

    if (!search(root, key)) {
        cout << "Node " << key
             << " not found in the BST." << endl;
    }
    else {
        cout << "\nChoose deletion method:\n";
        cout << "1. Inorder Successor\n";
        cout << "2. Inorder Predecessor\n";
        cout << "Enter choice: ";
        cin >> method;

        if (method != 1 && method != 2) {
            cout << "Invalid choice. Tree unchanged."
                 << endl;
        }
        else {
            root = deleteNode(root, key, method);
            cout << "\nNode deleted successfully.\n";
        }
    }

    cout << "\nBST after deletion:\n";
    displayTree(root);

    cout << "\nInorder traversal: ";
    inorder(root);
    cout << endl;

    destroyTree(root);
    return 0;
}
