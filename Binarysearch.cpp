#include<iostream>//only works for sorted arrays
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int binSearch(int arr[], int n, int key)
{
    int s= 0;
    int e= n-1;

    int mid=(s+e)/2;
    while (s<=e)
    {
       if(arr[mid]==key)
       {
        return mid;
       }
       else if(key<arr[mid])
       e=mid-1;

       else
       s=mid+1;

    mid=(s+e)/2;// optimisation: mid=s+(e-s)/2
     }
    return -1 ;
}

int main()
{
    
    int arr1[10]= {1,12,13,14,45,55,67,78,89,98};
    int arr2[7] = {2,3,4,12,23,34,56};

cout<<"enter the key ";
int key;
cin>>key;

    int store = binSearch(arr1,10,key);
    cout<<"the answer is found at "<<store << endl;
    cout<<"if the answer is -1 it is not found ";


}
