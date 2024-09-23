#include <iostream>
using namespace std;

int binary_search(int a[], int n, int k, bool asc)
{
    int l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        
        if(k==a[mid])
        return mid;
        
        else if(k<a[mid])
        {
            if(asc)
            h=mid-1;
            
            else l=mid+1;
        }
        
        else if(k>a[mid])
        {
            if(asc)
            l=mid+1;
            
            else h=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n,k,i,f;
    
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int* a = new int[n];
    if(!a)
    {
        cout<<"Memory allocation failed\n";
        return 1;
    }
    
    cout<<"Enter the elements in ascending or descending order\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    
    cout<<"Enter the element to be found: ";
    cin>>k;
    
    bool asc= a[0]<a[n-1];
    
    f=binary_search(a,n,k,asc);
    
    if(f!=-1)
    cout<<"Element "<<k<<" found at index "<<f<<endl;
    
    else cout<<"Element not found\n";
    
    delete[] a;
    return 0;
}