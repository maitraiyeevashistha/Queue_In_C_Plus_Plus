// EXPERIMENT-18
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include<iostream>
using namespace std;

#define SIZE 5

class Queue{
    int arr[SIZE];
    int front, back;

    public:
    Queue(){
        front=-1;
        back=-1;
    }

    void enqueue(int value){
        if(back==SIZE-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        
        if(front==-1){
            front=0;
        }
        arr[++back]=value;
        cout<<value<<" inserted into queue"<<endl;
    }

    void dequeue(){
        if(front==-1 || front>back){
            cout<<"Queue Underflow/ Empty Queue!"<<endl;
            return;
        }

        cout<<arr[front]<<" removed from queue"<<endl;
        front++;
    }

    void display(){
        if(front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return;
        }

        cout<<"Queue elements: ";
        for(int i=front; i<=back; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

    int main(){
    Queue q;
    q.enqueue(10);  
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.display();

    return 0;
    }


/*Output :
10 inserted into queue
20 inserted into queue
30 inserted into queue
40 inserted into queue
50 inserted into queue
Queue Overflow
Queue elements: 10 20 30 40 50 
10 removed from queue
20 removed from queue
30 removed from queue
40 removed from queue
50 removed from queue
Queue Underflow/ Empty Queue!
Queue Underflow/ Empty Queue!
Queue is empty
*/
