#include<iostream>
using namespace std;
#define maxSize 5
class Queue
{
    private:
        int rear=-1;
        int front=-1;
        int arr[maxSize];
    public:
        bool isEmpty()
        {
            if(((rear==-1)&&(front==-1)) || (front>rear))
            {
                return true;
            }

            else
            {
                return false;
            }
        }

        bool isFull()
        {

            if(rear>=(maxSize-1))
            {
                return true;
            }

            else
            {
                return false;
            }
        }

        void enQueue(int data)
        {
            if(!isFull())
            {
                if((rear==-1)&&(front==-1))
                {
                    front++;
                    rear++;
                    arr[rear]=data;
                    cout<<data<<" is inserted in the queue"<<endl;
                }

                else
                {
                    rear++;
                    arr[rear]=data;
                    cout<<data<<" is inserted in the queue"<<endl;
                }

            }

            else
            {
                cout<<"Unable to insert. Queue is Full"<<endl;
            }
        }

        void deQueue()
        {
            if(!isEmpty())
            {
                cout<<arr[front]<<" is removed from the Queue"<<endl;
                front++;
            }

            else
            {
                cout<<"Unable to remove. Queue is Empty!"<<endl;
            }
        }

        void printQueue()
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
        }

};

int main()
{
    Queue q;
    q.enQueue(20);
    q.enQueue(40);
    q.enQueue(50);
    q.enQueue(60);
    q.enQueue(70);
    q.enQueue(80);
    q.printQueue();
}
