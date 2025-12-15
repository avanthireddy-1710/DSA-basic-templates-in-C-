#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={5,-15,-24,56,67,84};
    int size =6;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0;i<size;i++){
      smallest = min(a[i],smallest);
      largest = max(a[i],largest);
    }

    cout<<"Smallest = "<<smallest<<" and Largest = "<<largest<<endl;
    return 0;
}