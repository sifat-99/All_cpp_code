#include <stdio.h>
#include <stdlib.h>
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
// Function to swap two nodes (for min-heap)
void swap(struct Node** a, struct Node** b) {
    struct Node* temp = *a;
    *a = *b;
    *b = temp;
}
// Function to heapify the tree (min-heap property)
void minHeapify(struct Node** heap, int size, int idx) {
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < size && heap[left]->frequency < heap[smallest]->frequency) {
        smallest = left;
    }
    if (right < size && heap[right]->frequency < heap[smallest]->frequency) {
        smallest = right;
    }
    if (smallest != idx) {
        swap(&heap[smallest], &heap[idx]);
        minHeapify(heap, size, smallest);
    }
}
// Function to extract the minimum node from the heap
struct Node* extractMin(struct Node** heap, int* size) {
    struct Node* temp = heap[0];
    heap[0] = heap[*size - 1]; // Replace root with last node
    (*size)--; // Decrease size of heap
    minHeapify(heap, *size, 0); // Heapify down from the root
    return temp;
}
// Function to insert a new node into the heap
void insertNode(struct Node** heap, int* size, struct Node* node) {
    heap[*size] = node; // Insert at the end
    (*size)++; // Increase size of heap
    // Bubble up to maintain min-heap property
    int i = *size - 1;
    while (i && heap[i]->frequency < heap[(i - 1) / 2]->frequency) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;  }
}

// Function to build the Huffman Tree using a min-heap
struct Node* buildHuffmanTree(char characters[], int frequencies[], int size) {
    struct Node** heap = (struct Node**)malloc(size * sizeof(struct Node*));
    int heapSize = 0;

    // Initialize the heap with the nodes
    for (int i = 0; i < size; i++) {
        insertNode(heap, &heapSize, createNode(characters[i], frequencies[i]));
    }

    // Construct the Huffman tree
    while (heapSize > 1) {
        struct Node* left = extractMin(heap, &heapSize);
        struct Node* right = extractMin(heap, &heapSize);
        struct Node* merged = createNode('$', left->frequency + right->frequency); // '$' is a non-leaf node
        merged->left = left;
        merged->right = right;
        insertNode(heap, &heapSize, merged);
    }

    // The remaining node is the root of the Huffman tree
    return extractMin(heap, &heapSize);
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
void HuffmanCodes(char characters[], int frequencies[], int size) {
    struct Node* root = buildHuffmanTree(characters, frequencies, size);
    int arr[100], top = 0;
    printCodes(root, arr, top);
}

// Driver program
int main() {
    char characters[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int frequencies[] = { 5, 9, 12, 13, 16, 45 };
    int size = sizeof(characters) / sizeof(characters[0]);

    HuffmanCodes(characters, frequencies, size);
    return 0;
}
