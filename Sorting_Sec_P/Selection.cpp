#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp=*y;
    *y=*x;
    *x=temp;
}

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[], int size)
{
   // int kindex=0;
    for(int i=0; i<size-1;i++)
    {
        int k=arr[i];

        for(int j=i+1;j<size;j++)
        {
            if(k>arr[j])
            {
                k=arr[j];
                swap(&arr[i],&arr[j]);
            }

        }
    }
    cout<<endl<<"Array after sorting"<<endl;
    printArray(arr,size);
}

int main()
{
    int arr[]={90,60,6,5,100,70,80};
    int size=(sizeof(arr)/sizeof(arr[0]));
    cout<<"Array before Sorting"<<endl;
    printArray(arr,size);
    selectionSort(arr,size);
}


