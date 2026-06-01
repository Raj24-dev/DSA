#include <bits/stdc++.h>
using namespace std;

void heapify_down(vector<int>& arr, int n, int i) {
    int largest = i;
    int left  = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify_down(arr, n, largest);
    }
}

void min_to_max_heap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify_down(arr, n, i);
}

int main() {
    vector<int> arr = {1, 3, 2, 7, 6, 5, 4};

    cout << "Min heap: ";
    for (int x : arr) cout << x << " ";

    min_to_max_heap(arr);

    cout << "\nMax heap: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}