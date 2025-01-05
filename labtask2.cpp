#include<iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    cout<<"enter your ist number"<<endl;
    cin>>number1;
    cout<<"enter your 2nd number"<<endl;
    cin>>number2;
   if(number1>number2){
    cout<<"number1 is larger"<<endl;
   } else if(number1<number2){
    cout<<"number2 is larger"<<endl;
   } else{
    cout<<"both numbers are equal"<<endl;
   }
   return 0;
}