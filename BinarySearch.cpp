// Iterative approach

#include <iostream>
using namespace std;

int BinarySearch(int A[],int n, int x)
{
int low = 0, high = n-1;
while(low<=high)
{
    int mid= low + (high-low)/2;
    if(x == A[mid]) return mid; //Found X, return (exit)
    else if(x < A[mid]) high = mid-1;// X lies befire mid
    else low = mid+1; // x lies after mid
}
return -1;
}

int main()
{
int A[] ={2,5,7,13,14,15,23,30};
cout<<"Enter the number: "<<endl;
int x; 
cin>>x;
int index = BinarySearch( A, 8,x);
if(index != -1) cout<<"Number " << x <<" is at index" << index;

else cout<<"Number " << x << " not found";

cout<< "Game over!!";
}