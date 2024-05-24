#include<iostream>
 
using namespace std;
 
class Node{
public:
    int value;
    Node *next;
 
    Node(int d){
    this->value=d;
    this->next=nullptr;
 
    }
};
class LinkedList{
private:
    Node *head;
public:
    LinkedList(){
    this->head=nullptr;
    }
 
    void insertAtBeginning(int value){
    Node *newNode=new Node(value);
    newNode->next=head;
    head=newNode;
    }
    void insertAtMiddle(int element,int value){
    Node *temp=head;
    while(temp->next!=nullptr){
        if(temp->value=element){
            Node *newNode =new Node(value);
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    }
    void insertAtEnd(int value){
        if (head==nullptr){
            head=new Node(value);
        }
        else{
                   Node *temp=head;
        while(temp->next!=nullptr){
                temp=temp->next;
            }
            Node *newNode =new Node(value);
            temp->next=newNode;
 
        }
 
 
    }
     void deleteAtEnd(){
                 if (head==nullptr){
             cout<<"empty"<<endl;
             return;
        }
        else if(head->next==nullptr){
            delete head;
            head= nullptr;
 
        }
        else{
               Node *temp=head;
        while(temp->next->next!=nullptr){
                temp=temp->next;
            }
            delete temp->next;
            temp->next=nullptr;
        }
 
     }
 
     void deleteAtBeginning(){
         if(head!=nullptr){
            Node *temp=head;
            head=head->next;
            delete temp;
         }
         else{
            cout<<endl<<"LinkedList is already empty"<<endl;
         }
     }
     void search(int key){
     Node *temp=head;
     int count=0;
     while(temp->next!=nullptr){
        if(key==temp->value){
            cout<<endl<<key<<" is found."<<endl;
            return;
 
        }
        else{
            count++;
        }
        temp=temp->next;
     }
 
     if(temp->value==key){
        cout<<endl<<key<<" is found."<<endl;
        return;
     }
     if(count>0){
        cout<<endl<<key<< " is not found."<<endl;
 
     }
 
     }
 
     void printList(){
         if(head==nullptr){
            cout<<"Linked list is empty"<<endl;
            return;
         }
     Node *temp =head;
     while(temp->next!=nullptr){
            cout<<temp->value<<">>>>>";
            temp=temp->next;
     }
     cout<<temp->value<<endl;
     }
};
class Queue{
public :
    LinkedList l;
    void enqueue(int value){
        l.insertAtEnd(value);
    }
    void dequeue(){
        l.deleteAtBeginning();
        }
 
    void printQueue(){
        cout<<"After queue Linked List is :"<<endl;
          l.printList();
    }
};
 
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
 
    q.printQueue();
    q.dequeue();
    q.dequeue();
    
 
    q.printQueue();
 
    return 0;
 
 
}