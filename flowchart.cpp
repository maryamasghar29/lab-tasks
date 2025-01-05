#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"student name"<<endl;
    cin>>name;
    string email;
    cout<<"email"<<endl;
    cin>>email;
    float percentage;
    cout<<"student percentage"<<endl;
    cin>>percentage;
    cout<<"check criteria for addmission"<<endl;
    cout<<"ist preference"<<endl;
    cout<<"DPT>=60"<<endl;
    cout<<"IR>=50"<<endl;
    cout<<"ist preference"<<endl;
    if(percentage>=60){
    cout<<"you are egligible in DPT"<<endl;
    }
    else{
    cout<<"you are not egligible"<<endl;
    }
    cout<<"2nd preference"<<endl;
    if(percentage>=50){
    cout<<"you are egligible in IR"<<endl;
    }
    else{
    cout<<"student not got addmision due to low merit"<<endl;
    }
    return 0;
    }

    
    

 

   

