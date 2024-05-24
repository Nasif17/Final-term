#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;

        Node(int data)
        {
            this->data=data;
            this->next=nullptr;
        }

};

class LinkedList
{
    private:
        Node *head;

    public:
        LinkedList()
        {
            this->head=nullptr;
        }

        void insertAtBeginning(int data)
        {
            Node *newNode=new Node(data);
            newNode->next=head;
            head=newNode;
        }

        void insertAtMiddle(int key, int data)
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                if(temp->data==key)
                {
                    Node *newNode=new Node(data);
                    newNode->next=temp->next;
                    temp->next=newNode;
                    break;
                }
                temp=temp->next;
            }
        }

        void insertAtEnd(int data)
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            Node *newNode=new Node(data);
            temp->next=newNode;

        }

        void deleteAtEnd()
        {
            Node *temp=head;
            while(temp->next->next!=nullptr)
            {
                temp=temp->next;
            }

            delete temp->next;
            temp->next=nullptr;


        }

        void deleteAtBeginning()
        {
            if(head!=nullptr)
            {
                Node *temp=head;
                head=head->next;
                delete temp;

            }

            else
            {
                cout<<endl<<"LinkedList is already Empty"<<endl;
            }
        }

        void search(int key)
        {
            Node *temp=head;
            int count=0;
            while(temp->next!=nullptr)
            {
                if(key==temp->data)
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

            if(temp->data==key)
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
                cout<<temp->data<<"-->";
                temp=temp->next;
            }
            cout<<temp->data;

        }

};

int main()
{

    LinkedList l1;
    l1.insertAtBeginning(20);
    l1.printlist();
    cout<<endl;
    l1.insertAtBeginning(40);
    l1.printlist();
    cout<<endl;
    l1.insertAtBeginning(60);
    l1.printlist();
    cout<<endl;
    l1.insertAtMiddle(60,30);
    l1.printlist();
    cout<<endl;
    l1.insertAtEnd(70);
    l1.printlist();
    l1.search(100);
    cout<<endl;
    l1.deleteAtEnd();
    l1.printlist();
    cout<<endl;
    l1.deleteAtBeginning();
    l1.printlist();


}
