//  week - 5        @mdirshad-25CAMSA158
/* 5# Write a C++ Program to reverse the position of the array element (Hint: First element to
the last element.) */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many number U want to enter " << endl;
    cin>>n;
    int arr[n];
	cout << "Enter " << n << " numbers" <<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    cout << "Array after reverse: " <<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
/*		OUTPUT
How many number U want to enter
5
Enter 5 numbers
10 20 30 40 50
Array after reverse:
50 40 30 20 10			*/
