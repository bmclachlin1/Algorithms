#include <bits/stdc++.h>

using namespace std;

void selection_sort(vector<int>& arr) {
    int len = arr.size();

    for (int i = 0; i < len - 1; i++) {
        int iMin = i;
        for (int j = i+1; j < len; j++) {
            if (arr[j] < arr[iMin]) {
                iMin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[iMin];
        arr[iMin] = temp;
    }
}

int main() {
    vector<int> elems {1, 4, 2, 7, 5, 9, 4, 10, 8, 13, 2, 3};
    cout << "Unsorted Array" << endl;
    for (const auto& e: elems) {
        cout << e << " ";
    }
    cout << endl;
    selection_sort(elems);
    cout << "Sorted Array" << endl;
    for (const auto& e: elems) {
        cout << e << " ";
    }
}