#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int arr[], int size)
{
    int key;
    for(int i=0;i<size;i++)
    {
        key=arr[i];
        for(int j=i-1;j>-1;j--)
        {
            if(arr[j]>key)
            {
                arr[j+1]=arr[j];
                arr[j]=key;
            }

        }



    }
    cout<<endl<<"after Sorting:"<<endl;
    printArray(arr,size);
}
int main()
{
    int arr[]={10,11,5,1,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting:"<<endl;
    printArray(arr,size);
    insertionSort(arr, size);
}
