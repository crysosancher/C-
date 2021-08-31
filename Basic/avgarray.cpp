#include <iostream> //wap to calculate the avg of an array.
using namespace std;
int main()
{
    int r, sum = 0;
    cout << "Enter the number of elements" << endl;
    cin >> r;
    int arr[r];
    for (int i = 0; i < r; i++)
    {
        cout << "Enter the " << i+1 << "number";
        cin >> arr[i];
    }
    for (int j = 0; j < r; j++)
    {
        sum = sum + arr[j];
    }
    float average = sum / r;
    cout << "average=" << average;
    return 0;
}