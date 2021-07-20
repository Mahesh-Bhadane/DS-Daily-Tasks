
#include <bits/stdc++.h>

using namespace std;

void productArray(int arr[], int n)
{


	if (n == 1) {
		cout << 0;
		return;
}

	int* left = new int[sizeof(int) * n];
	int* right = new int[sizeof(int) * n];

	
	int* product = new int[sizeof(int) * n];

	int i, j;

	
	left[0] = 1;

	
	right[n - 1] = 1;

	
	for (i = 1; i < n; i++)
		left[i] = arr[i - 1] * left[i - 1];

	
	for (j = n - 2; j >= 0; j--)
		right[j] = arr[j + 1] * right[j + 1];

	
	for (i = 0; i < n; i++)
		product[i] = left[i] * right[i];

	
	for (i = 0; i < n; i++)
		cout << product[i] << " ";

	return;
}


int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The product array is: \n";
	productArray(arr, n);
}


