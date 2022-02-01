// Recursive approach

#include <iostream>
using namespace std;

int BinarySearch(int A[],int low, int high, int x)
{
    if(low>high) return -1;
    int mid = low + (high-low)/2;

    if(x == A[mid]) return mid;

    else if(x<A[mid]) return BinarySearch(A,low,mid-1,x);

    else return BinarySearch(A,mid+1, high, x);
}


int main()
{
int A[] ={2,5,7,13,14,15,23,30};
cout<<"Enter the number: "<<endl;
int x; 
cin>>x;
int index = BinarySearch( A,0, 8,x);
if(index != -1) cout<<"Number " << x <<" is at index" << index;

else cout<<"Number " << x << " not found";

cout<< "Game over!!";
}
