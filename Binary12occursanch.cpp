// First occurance and Last occurance binary srch
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
        if(x == A[mid]) {
            result = mid;
            high= mid-1;
        }
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
        {
            result = mid;
            low= mid+1;
        }
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
int index2 = BinarySearchLast( A, 9,x);

if(index1 == -1 && index2 == -1) cout << "Number not found\n";
else {
    cout << "First occurance: " << index1 << '\n';
    cout << "Last occurance: " << index2 << '\n';
    cout<< "\n The number of occurance is " << index2-index1 + 1;
}

}