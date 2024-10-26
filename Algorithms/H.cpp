#include <bits/stdc++.h>
using namespace std;
struct Node {
    char character;
    unsigned int frequency;
    Node* left;
    Node* right;
    Node(char c, unsigned int f) : character(c), frequency(f), left(NULL), right(NULL) {}
};
class MinHeap {
    vector<Node*> heap;
    void heapifyDown(int idx) {
        int smallest = idx;
        int left = 2 * idx + 1;
        int right = 2 * idx + 2;

        if (left < heap.size() && heap[left]->frequency < heap[smallest]->frequency)
            smallest = left;

        if (right < heap.size() && heap[right]->frequency < heap[smallest]->frequency)
            smallest = right;

        if (smallest != idx) {
            swap(heap[idx], heap[smallest]);
            heapifyDown(smallest);
        }
    }

    void heapifyUp(int idx) {
        int parent = (idx - 1) / 2;
        if (idx && heap[idx]->frequency < heap[parent]->frequency) {
            swap(heap[idx], heap[parent]);
            heapifyUp(parent);
        }
    }

public:
    void insert(Node* node) {
        heap.push_back(node);
        heapifyUp(heap.size() - 1);
    }

    Node* extractMin() {
        if (heap.empty()) return nullptr;

        Node* minNode = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);

        return minNode;
    }

    int size() {
        return heap.size();
    }
};

unordered_map<char, string> huffmanCodes;
int totalBits = 0;
double weightedSum = 0;
int totalCharacters = 0;
void printCodes(Node* root, const string& str) {
    if (!root) return;
    if (root->character != '$') {
        cout << root->character << ": " << str << endl;
        huffmanCodes[root->character] = str;
        totalBits += str.size() * root->frequency;
        weightedSum += str.size() * root->frequency;
        totalCharacters += root->frequency;
    }
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}
void HuffmanCodes(char characters[], int frequency[], int size) {
    MinHeap minHeap;
    for (int i = 0; i < size; ++i) {
        minHeap.insert(new Node(characters[i], frequency[i]));
    }
    while (minHeap.size() != 1) {
        Node* left = minHeap.extractMin();
        Node* right = minHeap.extractMin();
        Node* top = new Node('$', left->frequency + right->frequency);
        top->left = left;
        top->right = right;
        minHeap.insert(top);
    }
    printCodes(minHeap.extractMin(), "");
}
int main() {
    char characters[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int frequency[] = {5, 9, 12, 13, 16, 45};
    int size = sizeof(characters) / sizeof(characters[0]);
    cout << "Huffman Codes for each character:\n";
    HuffmanCodes(characters, frequency, size);
    double averageCodeLength = weightedSum / totalCharacters;
    cout << "\nAverage Code Length: " << averageCodeLength << " bits" << endl;
    cout << "Total Length of Huffman Encoded Message: " << totalBits << " bits" << endl;
    return 0;
}
