#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter your number"<<endl;
    cin>>number;
    int sumOfNumber=0;
    while(number>0){
       sumOfNumber+=number%10;
       number/=10;
       }
       cout<<"the sum is:"<<sumOfNumber<<endl;
       if(sumOfNumber%3==0){
        cout<<"your number divisible by 3"<<endl;
       } else{
        cout<<"your number is not divisible by 3"<<endl;
       }

    return 0;
}