#include<iostream>
using namespace std;
int q[20];
int n=20;
int front =-1;
int rear=-1;
void enqueue(int value)
{
	if(rear==n-1){
		cout<<"queue is overflow";
	}else if(front == -1 && rear == -1){
		front = 0;
		rear = 0;
		q[rear]=value;
	}else{
		rear++;
		q[rear]=value;
	}
}
void dequeue(){
	if(front>rear){
		cout<<"queue is under flow";
	}
	else{
		front++;
	}
}
void display(){
	for(int i=front; i<=rear ; i++){
		cout<<q[i]<<"\n";
	}
}
int main(){
	enqueue(10);
	enqueue(11);
	enqueue(12);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	display();
}
