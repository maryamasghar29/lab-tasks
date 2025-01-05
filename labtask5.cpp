#include <iostream>
using namespace std;
int main(){
    int num1;
    cout<<"num1 ="<<endl;
    cin>>num1;
    string operation;
    cout<<"operation ="<<endl;
    cin>>operation;
    int num2;
    cout<<"num 2="<<endl;
    cin>>num2;
    if(operation=="+"){
        num1+num2;
    } else if(operation=="-"){
        num1 - num2;
    } else if(operation=="*"){
        num1 * num2;
    } else if(operation=="/"){
        num1/num2;
    } else if(operation=="%"){
        num1%num2;
    } else{
        cout<<"invalid operation"<<endl;
    }
    return 0;   
}