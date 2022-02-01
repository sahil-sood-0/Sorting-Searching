// First occurance and Last occurance
// Also for no of occurance
// O(log n)

#include <iostream>
using namespace std;

int BinarySearchFirst(int A[],int n, int x)
{
int low = 0, high = n-1, result= -1;
while(low<=high)
{
    int mid= low + (high-low)/2;
    if(x == A[mid]) 
    result = mid, high= mid-1;
    else if(x < A[mid]) high = mid-1;// X lies befire mid
    else low = mid+1; // x lies after mid
}
return result;
}

int BinarySearchLast(int A[],int n, int x)
{
int low = 0, high = n-1, result= -1;
while(low<=high)
{
    int mid= low + (high-low)/2;
    if(x == A[mid]) 
    result = mid, low= mid+1;
    else if(x < A[mid]) high = mid-1;// X lies befire mid
    else low = mid+1; // x lies after mid
}
return result;
}

// Driver code

int main()
{
int A[] ={2,5,7,7,7,15,23,30, 32};
cout<<"Enter the number: "<<endl;
int x;
cin>>x;
int index1 = BinarySearchFirst( A, 9,x);
if(index1 != -1) cout<<" Number " << x <<" occurs first at index " << index1;
else cout<<" Number " << x << " not found";

int index2 = BinarySearchLast( A, 9,x);
if(index2 != -1) cout<<"\n Number " << x <<" occurs last at index " << index2;
else cout<<"\n Number " << x << " not found";

cout<< "\n The number of occurance is" << index2-index1 + 1;
}

// Bool add karna hai for case of no occurance
// default false kar dunga