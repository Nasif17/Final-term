#include <iostream>
using namespace std;


class Node
{
    public:

    int value;
    Node *next;
     Node(int value)
        {
            this->value=value;
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

        void insertAtBeginning(int value)
        {
            Node *newNode=new Node(value);
            newNode->next=head;
            head=newNode;
        }

        void insertAtMiddle(int key, int value)
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                if(temp->value==key)
                {
                    Node *newNode=new Node(value);
                    newNode->next=temp->next;
                    temp->next=newNode;
                    break;
                }
                temp=temp->next;
            }
        }

        void insertAtEnd(int value)
        {
            Node *temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            Node *newNode=new Node(value);
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
                if(key==temp->value)
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

            if(temp->value==key)
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
                cout<<temp->value<<">>>>>";
                temp=temp->next;
            }
            cout<<temp->value;

        }

};

int main()
{
    Linkedlist l1;
    l1.insertAtBeginning(40);
    l1.printlist();
    cout<<endl;

    l1.insertAtBeginning(30);
    l1.printlist();
    cout<<endl;

    l1.insertAtMiddle(30,60);
    l1.printlist();
    cout<<endl;

    l1.insertAtBeginning(90);
    l1.printlist();
    cout<<endl;

    l1.insertAtEnd(101);
    l1.printlist();
    cout<<endl;

    l1.deleteAtBeginning();
    l1.printlist();

    l1.deleteAtEnd();
    l1.printlist();

    l1.search(100);
    l1.printlist();

    l1.search(60);
    l1.printlist();



    
}