#include <iostream>
using namespace std;

template<typename T>
class TreeNode {
public:
    T data;
    TreeNode<T>* left;
    TreeNode<T>* right;

    TreeNode(T value) : data(value), left(nullptr), right(nullptr) {}
};

template<typename T>
class BST {
private:
    TreeNode<T>* root;

    TreeNode<T>* insert(TreeNode<T>* node, T value) {
        if (node == nullptr)
            return new TreeNode<T>(value);

        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);

        return node;
    }

    TreeNode<T>* findMin(TreeNode<T>* node) {
        while (node->left != nullptr)
            node = node->left;
        return node;
    }

    TreeNode<T>* remove(TreeNode<T>* node, T value) {
        if (node == nullptr)
            return nullptr;

        if (value < node->data)
            node->left = remove(node->left, value);
        else if (value > node->data)
            node->right = remove(node->right, value);
        else {
            if (node->left == nullptr) {
                TreeNode<T>* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                TreeNode<T>* temp = node->left;
                delete node;
                return temp;
            }
            TreeNode<T>* temp = findMin(node->right);
            node->data = temp->data;
            node->right = remove(node->right, temp->data);
        }
        return node;
    }

    void inorder(TreeNode<T>* node) {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

public:
    BST() : root(nullptr) {}

    void insert(T value) {
        root = insert(root, value);
    }

    void remove(T value) {
        root = remove(root, value);
    }

    void displayInOrder() {
        cout << "In-order traversal: ";
        inorder(root);
        cout << endl;
    }
};

int main() {
    BST<int> bst;

    // Insertion
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    // Removal
    bst.remove(20);
    bst.remove(30);

    // Display in-order traversal
    bst.displayInOrder();

    return 0;
}

