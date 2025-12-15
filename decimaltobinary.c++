#include<iostream>
using namespace std;

int dectobinary(int decnum){
    int ans=0,pow=1;

    while(decnum>0){
        int rem=decnum%2;
        decnum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    int decnum;
    cout<<"Enter a decimal number\n";
    cin>>decnum;
    cout<<"Binary form of the number is "<<dectobinary(decnum)<<endl;
    return 0;
}