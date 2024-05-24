#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size,int first, int last, int search)
{
    int mid=(first+last)/2;
    for(int i=0;i<size; i++)
    {
        if(arr[mid]==search)
        {
            return true;
        }

        else if(arr[mid]<search)
        {
            first=mid+1;
            mid=(first+last)/2;
        }

        else
        {
            last=mid-1;
            mid=(first+last)/2;
        }
    }

    return false;
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80};
    int search=10;
    int size=(sizeof(arr)/sizeof(arr[0]));
    if(binarySearch(arr,size,0,size-1,search)==true)
    {
        cout<<"We have found your number";
    }

    else
    {
        cout<<" Your Number is not Found";
    }


}
