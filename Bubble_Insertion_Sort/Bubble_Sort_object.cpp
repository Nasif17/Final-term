#include<iostream>
using namespace std;
struct Student
{
    int id;
    string name;
    float cgpa;


};
void swap(Student *x, Student *y)
{
    Student temp=*y;
    *y=*x;
    *x=temp;
}

void printArray(Student arr[], int size)
{
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i].id<<" "<<endl;
        cout<<arr[i].name<<" "<<endl;
        cout<<arr[i].cgpa<<" "<<endl<<endl;

    }
}
void bubbleSort(Student arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j].id>arr[j+1].id)
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

    cout<<endl<<"Printing the sorted Array."<<endl;
    printArray(arr,size);
}
int main()
{
    Student s1,s2,s3,s4,s5;
    s1.id=101;
    s1.name="Mr.c";
    s1.cgpa=3.03;
    s2.id=106;
    s2.name="Mr.7l";
    s2.cgpa=3.14;
    s3.id=103;
    s3.name="Mr.k";
    s3.cgpa=3.23;
    s4.id=102;
    s4.name="Mr.h";
    s4.cgpa=3.50;
    s5.id=104;
    s5.name="Mr.i";
    s5.cgpa=3.89;
    Student arr[]={s1,s2,s3,s4,s5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Printing the original Array."<<endl;
    printArray(arr,size);
    bubbleSort(arr,size);
}

