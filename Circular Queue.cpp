#include <iostream>
using namespace std;

int front = -1;
int rear = -1;

int n = 6;

int arr[6];

void enqueue(int val) {
	if (front == (rear + 1) % n) {
		cout << "Overflow";
	} else if (front == -1 && rear == -1) {
		front++;rear++;
		arr[rear] = val;
	} else {
		rear = (rear + 1) % n;
		arr[rear] = val;	
	}
}

// 35 40 15 20 25 30

void dequeue() {
	
	if (front == -1 && rear == -1)  {
		cout << "Underflow";
	} 
	else if(front==rear){
	  front=-1;rear=-1;
    }
	else {
		front = (front + 1) % n;
	}
}

void display(){
	if(front==-1 && rear==-1){
        cout<<"Queue is empty\n";
        return;
    }
	int i = front;
	do{
       cout<<arr[i]<< " ";
        i=(i + 1)%n;
    }while(i!=(rear+1)%n);
}

int main() {
	enqueue(5);
	enqueue(10);
	enqueue(15);
	enqueue(20);
	enqueue(25);
	enqueue(30); 
	
	display();
	cout << endl;
	
	dequeue();
	display();
	
	return 0;
}
