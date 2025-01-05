#include<iostream>
using namespace std;
int main(){
    string studentName;
    int subject1;
    cout<<"subject1 marks"<<endl;
    cin>>subject1;
    int subject2;
    cout<<"subject2 marks"<<endl;
    cin>>subject2;
    int subject3;
    cout<<"subject3 marks"<<endl;
    cin>>subject3;
    int subject4;
    cout<<"subject4 marks"<<endl;
    cin>>subject4;
    int subject5;
    cout<<"subject5"<<endl;
    cin>>subject5;
    int sum;
    sum=subject1+subject2+subject3+subject4+subject5;
    cout<<"total marks is"<<sum<<endl;
    int percentage;
    percentage=sum/500*100;
    cout<<"student name and percentage = "<<percentage<<endl;
    return 0;
}