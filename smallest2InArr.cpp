// C++ program to find smallest and
// second smallest elements
#include <iostream>
using namespace std; /* For INT_MAX */

void print2Smallest(int arr[], int size)
{
	int i, first, second;

	/* There should be atleast two elements */
	if (size < 2)
	{
		cout<<" Invalid Input ";
		return;
	}

	first = second = INT_MAX;
	for (i = 0; i < size ; i ++)
	{
		/* If current element is smaller than first
		then update both first and second */
		if (arr[i] < first)
		{
			second = first;
			first = arr[i];
		}

		/* If arr[i] is in between first and second
		then update second */
		else if (arr[i] < second && arr[i] != first)
			second = arr[i];
	}
	if (second == INT_MAX)
		cout << "There is no second smallest element\n";
	else
		cout << "The smallest element is " << first << " and second "
			"Smallest element is " << second << endl;
}

/* Driver code */
int main()
{
	int arr[] = {12, 13, 1, 10, 34, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	print2Smallest(arr, n);
	return 0;
}

