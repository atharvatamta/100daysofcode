#include <iostream>
using namespace std;
int selectSort(int arr[], int n)
{
  for(int i=0; i<n-1; i++) //number of rounds
  {
    int min=i;
    for (int j = i+1; j<n; j++) //comparisions starting from i+1 since we considered i to be minimum
    {
        if(arr[j]< arr[min])
        min=j; //storing the index as minimum
    }
    swap(arr[min],arr[i]); //swaping the 'i'th element with the minimum element
  }
}
void printArray(int arr[], int n) //printing the sorted array
{
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    
}
int main()
{
   int arr[5]={6, 2, 8, 4, 10 }; //put any sample array here 
   selectSort(arr,5); 
   printArray(arr,5);
}
