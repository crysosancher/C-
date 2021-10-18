#include<bits/stdc++.h>
using namespace std;
int sum_of_differences(int arr[], int N)
{

     

    // Stores the sum

    int sum = 0;
 

    int i, j, flag;
 

    // Traverse the array

    for(i = 0; i < N - 1; i++)

    {

        if (arr[i] < arr[i + 1]) 

        {

            flag = 0;
 

            for(j = i + 1; j < N - 1; j++) 

            {
 

                // If last element of the

                // increasing sub-array is found

                if (arr[j] >= arr[j + 1]) 

                {
 

                    // Update sum

                    sum += (arr[j] - arr[i]);

                    i = j;

                    flag = 1;

                     

                    break;

                }

            }
 

            // If the last element of the array

            // is reached

            if (flag == 0 && arr[i] < arr[N - 1])

            {
 

                // Update sum

                sum += (arr[N - 1] - arr[i]);
 

                break;

            }

        }

    }
 

    // Return the sum

    return sum;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	cout<<sum_of_differences(arr, n);
	return 0;
}
