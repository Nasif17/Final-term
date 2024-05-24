#include <iostream>
using namespace std;

class Student
{
    public:

    int id;

};


class Node
{
    public:

    Student value;
    Node *next;
     Node(Student n)
        {
            this->value=n;
            this->next=nullptr;
        }

};

class Linkedlist
{
    private:
        Node *head;

    public:
        Linkedlist()
        {
            this->head=nullptr;
        }

        void insertAtBeginning(Student value)
        {
            Node *newNode=new Node(value);
            newNode->next=head;
            head=newNode;
        }

        void insertAtMiddle(int key, Student value)
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                if(temp->value.id==key)
                {
                    Node *newNode=new Node(value);
                    newNode->next=temp->next;
                    temp->next=newNode;
                    break;
                }
                temp=temp->next;
            }
        }

        void insertAtEnd(Student value)
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            Node *newNode=new Node(value);
            temp->next=newNode;

        }

       
       

        void search(int key)
        {
            Node *temp=head;
            int count=0;
            while(temp->next!=nullptr)
            {
                if(key==temp->value.id)
                {
                    cout<<endl<<key<<" is found."<<endl;
                    return;
                }

                else
                {
                    count++;
                }
                temp=temp->next;
            }

            if(temp->value.id==key)
            {
                cout<<endl<<key<<" is found."<<endl;
                return;
            }

            if(count>0)
            {
                cout<<endl<<key<<" is not found."<<endl;
            }
        }

        void printlist()
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                cout<<temp->value.id<<">>>>>";
                temp=temp->next;
            }
            cout<<temp->value.id;

        }

};

int main()
{
    Student s1,s2,s3,s4,s5;
    s1.id=01;
    s2.id=02;
    s3.id=03;
    s4.id=04;
    s5.id =05;

    Linkedlist l1;
    l1.insertAtBeginning(s1);
    l1.printlist();
    cout<<endl;

    l1.insertAtEnd(s2);
    l1.printlist();
    cout<<endl;

    

    l1.insertAtEnd(s3);
    l1.printlist();
    cout<<endl;

    l1.insertAtEnd(s4);
    l1.printlist();
    cout<<endl;

    l1.insertAtMiddle(2,s4);
    l1.printlist();
    cout<<endl;
    

    l1.search(2);

    


    
}