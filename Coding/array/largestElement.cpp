#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, largest = INT_MIN;
    cout << "Enter the size of the array:";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array:";
    for (int &i : arr)
    {
        cin >> i;
    }
    for (int i : arr)
    {
        if (i > largest)
        {
            largest = i;
        }
    }
    cout << largest;
}
