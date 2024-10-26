#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node {
    char character;
    int frequency;
    struct Node *left, *right;
};
struct Node* createNode(char character, int frequency, struct Node* left, struct Node* right) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->character = character;
    node->frequency = frequency;
    node->left = left;
    node->right = right;
    return node;
}
struct PriorityQueue {
    struct Node* data;
    struct PriorityQueue* next;
};
void insert(struct PriorityQueue** head, struct Node* node) {
    struct PriorityQueue* temp = (struct PriorityQueue*)malloc(sizeof(struct PriorityQueue));
    temp->data = node;
    temp->next = NULL;
    if (!(*head) || (*head)->data->frequency > node->frequency) {
        temp->next = *head;
        *head = temp;
    } else {
        struct PriorityQueue* start = *head;
        while (start->next && start->next->data->frequency <= node->frequency) {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}
struct Node* pop(struct PriorityQueue** head) {
    struct PriorityQueue* temp = *head;
    struct Node* node = temp->data;
    *head = (*head)->next;
    free(temp);
    return node;
}
int isLeaf(struct Node* root) {
    return !(root->left) && !(root->right);
}
struct Node* buildHuffmanTree(char characters[], int frequency[], int size) {
    struct PriorityQueue* pq = NULL;
    for (int i = 0; i < size; i++) {
        insert(&pq, createNode(characters[i], frequency[i], NULL, NULL));
    }
    while (pq && pq->next) {
        struct Node* left = pop(&pq);
        struct Node* right = pop(&pq);
        int sum = left->frequency + right->frequency;
        insert(&pq, createNode('$', sum, left, right));
    }
    return pop(&pq);
}
void printCodes(struct Node* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (isLeaf(root)) {
        printf("%c: ", root->character);
        for (int i = 0; i < top; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
}
void HuffmanCodes(char characters[], int frequency[], int size) {
    struct Node* root = buildHuffmanTree(characters, frequency, size);
    int arr[100], top = 0;
    printCodes(root, arr, top);
}
int main() {
    char characters[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int frequency[] = { 5, 9, 12, 13, 16, 45 };

    int size = sizeof(characters) / sizeof(characters[0]);

    HuffmanCodes(characters, frequency, size);
    return 0;
}
