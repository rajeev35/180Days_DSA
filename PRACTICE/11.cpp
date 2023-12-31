// C++ program to print first half in 
// ascending order and the second half
// in descending order
#include <iostream>
using namespace std;

// function to print half of the array in 
// ascending order and the other half in 
// descending order
void printOrder(int arr[], int n)
{
	// sorting the array
	sort(arr, arr + n);

	// printing first half in ascending 
	// order
	for (int i = 0; i < n / 2; i++) 
		cout << arr[i] << " "; 

	// printing second half in descending 
	// order
	for (int j = n - 1; j >= n / 2; j--) 
		cout << arr[j] << " ";	 
}

// driver code
int main()
{
	int arr[] = {6,5,3,1,4,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	printOrder(arr, n);

	return 0;
}
