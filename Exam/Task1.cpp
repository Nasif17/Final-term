#include <iostream>
using namespace std;
void Printassinding (int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void Printdessinding (int arr[],int size)
{

    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
void Shorting(int arr[],int size)
{
    int k;
    for (int i = 0; i < size; i++)
    {
        k =arr[i];

        for (int j = i-1; j > -1; j--)
        {
              if(arr[j]>k)
            {
                arr[j+1]=arr[j];
                arr[j]=k;
            }
        }
        
    }
    cout<<endl<<"after Sorting:"<<endl;
    Printassinding(arr,size);
    cout<<endl<<"after dessinding :"<<endl;
   // Printdessinding(arr,size);
    

}
int main()
{
    int arr[]={10,16,8,2,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting:"<<endl;
    Printassinding(arr,size);
    Shorting(arr, size);
    Printdessinding(arr,size);
}