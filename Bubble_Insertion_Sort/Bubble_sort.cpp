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
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int arr[], int size)
{  int a=0,c=0,d=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                a++;
            }
            
        }
        c++;
    }

    cout<<endl<<"Printing the sorted Array."<<endl;
    printArray(arr,size);

    d=c+a;

    cout<<"\nNumber of comparisions = "<<d<<endl;
    cout<<"\nNumber of exchanges = "<<a<<endl;
}
int main()
{
    

    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter  your elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >>arr[i];
    }
    
    cout<<"Printing the original Array."<<endl;
    printArray(arr,size);
    bubbleSort(arr,size);


}
