#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the size of the array:";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements:";
    for (auto &i : arr)
    {
        cin >> i;
    }
    for (int i : arr)
    {
        sum += i;
    }
    cout << sum;
}