#include<iostream>
using namespace std;

int binarytodec(int binnum){
    int ans=0,pow=1;

    while(binnum>0){
        int rem=binnum%10;
        ans+=rem*pow;
        binnum/=10;
        pow*=2;
    }
    return ans;
}
int main(){
    int binnum;
    cout<<"Enter a binary number\n";
    cin>>binnum;
    cout<<"Decimal form is "<<binarytodec(binnum)<<endl;
    return 0;
}