#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to count: ";
    cin >> key;

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    cout << "Occurrences: " << count;

    return 0;
}