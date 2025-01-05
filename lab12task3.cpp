#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter your number 1"<<endl;
    cin>>num1;
    cout<<"enter your number 2"<<endl;
    cin>>num2;
    cout<<"enter your number 3"<<endl;
    cin>>num3;
    if(num1>num2){
        if(num1>num3){
            cout<<"num 1 largest"<<endl;
        } else{
            cout<<"number 3 largest"<<endl;
             }
    }
        else{ 
                if(num2>num3){
                    cout<<"number 2 largest"<<endl;
                } else{
                    cout<<"number 3 largest"<<endl;
                }
    }
    return 0;
}