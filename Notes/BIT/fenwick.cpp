#include<iostream>
using namespace std;

void updateBIT(int BITree[], int n, int index, int val) {
    while(index <= n) {
        BITree[index] += val;
        index += index & (-index);
    }
}

int* constructBIT(int* freq, int n) {
    int* BITree = new int[n+1];
    for(int i = 1; i <= n; i++) BITree[i] = 0;

    for(int i = 0; i < n; i++)
        updateBIT(BITree, n, i + 1, freq[i]);

    return BITree;
}

int getSum(int* BIT, int r) {
    int sum = 0;
    r++;
    while(r > 0) {
        sum += BIT[r];
        r -= r&(-r);
    }
    return sum;
}

int main()
{
    int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(freq)/sizeof(freq[0]);
    int* BIT = constructBIT(freq, n);
    cout << getSum(BIT, 5);
    return 0;
}