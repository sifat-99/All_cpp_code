#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for Huffman Tree nodes
struct Node {
    char character;
    int frequency;
    struct Node *left, *right;
};

// Function to create a new Huffman Tree node
struct Node* createNode(char character, int frequency) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->character = character;
    node->frequency = frequency;
    node->left = node->right = NULL;
    return node;
}

// Function to compare nodes for qsort
int compare(const void* a, const void* b) {
    return ((struct Node*)a)->frequency - ((struct Node*)b)->frequency;
}

// Recursive function to build the Huffman Tree
struct Node* buildHuffmanTree(struct Node nodes[], int size) {
    if (size == 1) return &nodes[0]; // Only one node remains, which is the root

    // Sort nodes by frequency
    qsort(nodes, size, sizeof(struct Node), compare);

    // Take two nodes with the lowest frequency
    struct Node* left = createNode(nodes[0].character, nodes[0].frequency);
    left->left = nodes[0].left;
    left->right = nodes[0].right;

    struct Node* right = createNode(nodes[1].character, nodes[1].frequency);
    right->left = nodes[1].left;
    right->right = nodes[1].right;

    // Merge nodes and update the node list
    nodes[0].character = '$';  // Non-leaf indicator
    nodes[0].frequency = left->frequency + right->frequency;
    nodes[0].left = left;
    nodes[0].right = right;

    // Shift the nodes array and reduce size
    for (int i = 1; i < size - 1; i++) {
        nodes[i] = nodes[i + 1];
    }

    // Recursively build the tree with the updated array
    return buildHuffmanTree(nodes, size - 1);
}

// Function to check if a node is a leaf
int isLeaf(struct Node* node) {
    return !(node->left) && !(node->right);
}

// Function to print Huffman Codes by traversing the Huffman Tree
void printCodes(struct Node* root, int arr[], int top) {
    // Assign 0 to left branch and traverse left
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }

    // Assign 1 to right branch and traverse right
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }

    // If this is a leaf node, print character and its code
    if (isLeaf(root)) {
        printf("%c: ", root->character);
        for (int i = 0; i < top; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
}

// Main function to drive Huffman coding
void HuffmanCodes(char characters[], int frequency[], int size) {
    // Create an array of nodes
    struct Node nodes[size];
    for (int i = 0; i < size; i++) {
        nodes[i] = *createNode(characters[i], frequency[i]);
    }

    // Build Huffman Tree and print codes
    struct Node* root = buildHuffmanTree(nodes, size);
    int arr[100], top = 0;
    printCodes(root, arr, top);
}

// Driver program
int main() {
    char characters[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int frequency[] = { 5, 9, 12, 13, 16, 45 };
    int size = sizeof(characters) / sizeof(characters[0]);

    HuffmanCodes(characters, frequency, size);
    return 0;
}
