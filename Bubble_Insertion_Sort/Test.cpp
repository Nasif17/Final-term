#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr, int& comparisons, int& exchanges) {
    int n = arr.size();
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            comparisons++; // Increment comparison count for every comparison made
            if (arr[j] > arr[j+1]) {
                exchanges++; // Increment exchange count if elements are swapped
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    vector<int> arr = {92, 82, 21, 16, 18, 95};
    int comparisons = 0, exchanges = 0;

    cout << "Input: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(arr, comparisons, exchanges);

    cout << "Output: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Number of comparisons = " << comparisons << endl;
    cout << "Number of exchanges = " << exchanges << endl;

    return 0;
}
