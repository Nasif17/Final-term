#include <iostream>
using namespace std;


void linearsearch(int arr[],int a,int b)
{bool found = false;

for (int i=0; i<(a); i++)
{
    if (arr[i]==b)
    {
        found = true;
    }
}
    if (found == true)
    {
        cout <<b<<" is found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    
    
}


int main ()
{
    int a,b;
    cout<<"Enter the size of array"<<endl;
    cin>>a;

    int arr[a];

    cout<<"Enter the data"<<endl;

    for(int i=0; i<a;i++)
    {
        cin>>arr[i];
    }

    cout<<"the element you want to search"<<endl;
    cin>>b;

    linearsearch(arr,a,b);
    return 0;

}