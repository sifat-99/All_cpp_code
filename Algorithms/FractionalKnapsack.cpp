#include<bits/stdc++.h>
using namespace std;
struct Item
{
    int value, weight;

    Item(int value, int weight)
        : value(value), weight(weight)
    {
    }
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(vector<Item> &arr, int N, int size)
{
    sort(arr.begin(), arr.end(), cmp);

    int curWeight = 0;
    double finalValue = 0.0;

    for (int i = 0; i < size; i++)
    {
        if (curWeight + arr[i].weight <= N)
        {
            curWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else
        {
            int remain = N - curWeight;
            finalValue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }

    return finalValue;
}

int main()
{
    int N;
    cout << "Enter the weight of the knapsack: ";
    cin >> N;

    int numItems;
    cout << "Enter the number of items: ";
    cin >> numItems;

    vector<Item> arr;
    for (int i = 0; i < numItems; i++)
    {
        int value, weight;
        cout << "Enter value and weight for item " << i + 1 << ": ";
        cin >> value >> weight;
        arr.emplace_back(value, weight);
    }

    int size = arr.size();
    cout << "Maximum profit earned = " << fractionalKnapsack(arr, N, size) << endl;

    return 0;
}
