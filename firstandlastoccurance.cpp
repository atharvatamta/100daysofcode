#include<iostream>//only works for sorted arrays
#include <bits/stdc++.h>
using namespace std;


int firstOccurance(int arr[], int size, int key)
{
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;

        }else if(key>arr[mid])
        {
            s=mid+1;
            
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;

    }
    return ans;
}

int lastOccurance(int arr[], int size, int key)
{
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;

        }else if(key>arr[mid])
        {
            s=mid+1;
            
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;

    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int even[10]={1,2,3,3,3,3,3,5};
    cout<< "first index of "<<n<<" is at "<< firstOccurance(even,10,n)<<endl;
    cout<< "last index of "<<n<<" is at "<< lastOccurance(even,10,n)<<endl;
    
}
