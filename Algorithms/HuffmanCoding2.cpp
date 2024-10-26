#include <bits/stdc++.h>
using namespace std;
struct Node {
    char character;
    unsigned int frequency;
    Node* left;
    Node* right;
    Node(char c, unsigned int f) : character(c), frequency(f), left(NULL), right(NULL) {}
};
struct CompareFrequency {
    bool operator()(Node* l, Node* r) {
        return l->frequency > r->frequency;
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
    priority_queue<Node*, vector<Node*>, CompareFrequency> minHeap;
    for (int i = 0; i < size; ++i) {
        minHeap.push(new Node(characters[i], frequency[i]));
    }

    while (minHeap.size() != 1) {
        Node* left = minHeap.top(); minHeap.pop();
        Node* right = minHeap.top(); minHeap.pop();

        Node* top = new Node('$', left->frequency + right->frequency);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }

    printCodes(minHeap.top(), "");
}

int main() {
    // int n;
    // cout << "Enter the number of characters: ";
    // cin >> n;

    // char* characters = new char[n];
    // int* frequency = new int[n];
        char characters[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int frequency[] = {5, 9, 12, 13, 16, 45};
    int n = sizeof(characters) / sizeof(characters[0]);

    // cout << "Enter the characters and their frequencies\n";
    // for (int i = 0; i < n; ++i) {
    //     cout << "Character and frequencies of " << i + 1 << ": ";
    //     cin >> characters[i];
    //     cin >> frequency[i];
    // }
    cout << "\nHuffman Codes for each character:\n";
    HuffmanCodes(characters, frequency, n);
    double averageCodeLength = weightedSum / totalCharacters;
    cout << "\nAverage Code Length: " << averageCodeLength << " bits" << endl;
    cout << "Total Length of Huffman Encoded Message: " << totalBits << " bits" << endl;
    // delete[] characters;
    // delete[] frequency;
    return 0;
}
