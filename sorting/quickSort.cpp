#include <bits/stdc++.h>

using namespace std;

int partition(int lo, int hi, vector<int>& A) {
    int pivot = A[lo];
    int i = lo, j = hi;
    while (i < j) {
        do {
            i++;
        } while (A[i] <= pivot);
        do {
            j--;
        } while (A[j] > pivot);
        if (i < j) {
            swap(A[i], A[j]);
        }
    }
    swap(A[lo], A[j]);
    return j;
}

void quickSort(int lo, int hi, vector<int>& A) {
    if (lo < hi) {
        int j = partition(lo, hi, A);
        quickSort(lo, j, A);
        quickSort(j+1, hi, A);
    }
}

int main() {
    vector<int> nums {1, 6, 2, 8, 19, 5, 0, 14, 32, 8, 9, 4};
    for (int i : nums) {
        cout << i << " ";
    }
    cout << endl;
    quickSort(0, nums.size(), nums);
    for (int i : nums) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}