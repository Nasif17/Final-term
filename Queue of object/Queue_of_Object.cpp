#include<iostream>
using namespace std;
#define maxSize 5
struct Player
{
    string player_name;
    string team_name;
};


class Queue
{
    private:
        int front=-1;
        int rear=-1;
        Player players[maxSize];

    public:
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

        bool isEmpty()
        {
            if(((rear==-1)&&(front==-1))|| (front>rear))
            {
                return true;
            }

            else
            {
                return false;
            }
        }

        void enqueue(Player p)
        {
            if(!isFull())
            {
                if((rear==-1)&&(front==-1))
                {
                    front++;
                    rear++;
                    players[rear]=p;
                    cout<<p.player_name<<" is inserted in the Queue"<<endl;

                }

                else
                {
                    rear++;
                    players[rear]=p;
                    cout<<p.player_name<<" is inserted in the Queue"<<endl;

                }
            }

            else
            {
                cout<<"Opps! Queue is Full"<<endl;
            }
        }

        void dequeue()
        {
            if(!isEmpty())
            {
                cout<<players[front].player_name<<" is removed from the Queue"<<endl;
                front++;
            }

            else
            {
                cout<<"Opps! The Queue is empty!"<<endl;
            }
        }

        void printQueue()
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<"Name is: "<<players[i].player_name<<endl;
                cout<<"Name is: "<<players[i].team_name<<endl<<endl<<endl;
            }
        }

};


int main()
{
    Queue q1;
    Player p1, p2, p3, p4, p5, p6;

    p1.player_name="Messi";
    p1.team_name="Inter Miami";

    p2.player_name="Cristiano Ronaldo";
    p2.team_name="Al Nasser";

    p3.player_name="Neymar";
    p3.team_name="Al Hillal";

    p4.player_name="Mbappe";
    p4.team_name="PSG";

    p5.player_name="Vini jr.";
    p5.team_name="Real madrid";

    p6.player_name="Jude Belligham";
    p6.team_name="Real Madrid";

    q1.enqueue(p1);
    q1.enqueue(p2);
    q1.enqueue(p3);
    q1.enqueue(p4);
    q1.enqueue(p5);
    q1.enqueue(p6);

    q1.printQueue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();

    q1.printQueue();

}

