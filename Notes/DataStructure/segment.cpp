#include<iostream>
using namespace std;

void build(int *tree, int *arr, int current_index, int start, int end) {
	if(start > end)
		return;

	if(start == end)
	{
		tree[current_index] = arr[start];
		return;
	}

	int mid = (start + end)/2;
	build(tree, arr, 2 * current_index, start, mid);
	build(tree, arr, 2 * current_index + 1, mid + 1, end);

	int left = tree[2 * current_index];
	int right = tree[2 * current_index + 1];

	tree[current_index] = min(left, right);
}

int query(int *tree, int current_index, int start, int end, int left, int right) {
	if(left < start || right > end)
		return 1000000;

	if(left == start && right == end)
		return tree[current_index];

	int mid = (start + end) / 2;
	int result1 = query(tree, 2 * current_index, start, mid, left, right);
	int result2 = query(tree, 2 * current_index + 1, mid + 1, end, left, right);
	return min(result1, result2);
}

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int size = sizeof(arr) / sizeof(int);

	int *tree = new int[4 * size + 1];
	build(tree, arr, 1, 0, size - 1);
	cout << query(tree, 1, 0, size - 1, 3, 5);
	return 0;
}