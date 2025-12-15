#include<iostream>
using namespace std;

void reversearray(int arr[],int size){
    int start=0,end=size-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,4,6,7,0,9};
    int size=6;
    reversearray(arr,size);
    return 0;
}