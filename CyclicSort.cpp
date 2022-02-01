// Interview ques given a cyclic sorted array
// Find a given element

#include <iostream>
using namespace std;

int CircularArraySearch(int A[], int n , int x)
{
    int low = 0, high = n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(x==A[mid]) return mid;   // case1 x found 
        if(A[mid] <= A[high])  // case2 right half is sorted
        {
            if(x>A[mid] && x <= A[high])
                low = mid + 1; // right is sorted
            else
                high = mid -1;   
        }
        else
        {
            if(A[low] <= x && x < A[mid])  // left side sorted
                high = mid -1;
            else
                low = mid + 1;   
        }
    }
    return -1;
}

// Driver code

int main()
{
    int A[] = {12,14,18,21,3,6,8,9};
    int x;
    cout<< "Enter a number \n";
    cin>> x;
    int index = CircularArraySearch(A, 8, x);
    if(index == -1)
        cout<< x << " not found in the array";
    else
        cout<< x << " found in the array at index " << index;

}