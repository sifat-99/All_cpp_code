#include<bits/stdc++.h>
using namespace std;
struct Item
{
    int value, weight;
};
bool compare(Item a, Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}
void bubbleSort(vector<Item> &arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (!compare(arr[j], arr[j+1]))
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
double fractionalKnapsack(int W, vector<Item> &arr, int n)
{  bubbleSort(arr, n);
    double maxValue = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (W >= arr[i].weight)
        {
            W -= arr[i].weight;
            maxValue += arr[i].value;
        }else{
            maxValue += arr[i].value * ((double)W / (double)arr[i].weight);
            break;}}
    return maxValue;
}
int main()
{
    int W, n;
    cout << "Enter the maximum weight of the knapsack: ";
    cin >> W;
    cout << "Enter the number of items: ";
    cin >> n;
    vector<Item> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].value >> arr[i].weight;
    }
    cout << "Maximum possible value = " << fractionalKnapsack(W, arr, n) << endl;
    return 0;
}
