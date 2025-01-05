#include<iostream>
using namespace std;
int main(){
    int mathMarks;
    int englishMarks;
    float overallPercentage;
    cout<<"enter your math marks"<<endl;
    cin>>mathMarks;
    cout<<"enter your english marks"<<endl;
    cin>>englishMarks;
    cout<<"enter your percentage"<<endl;
    cin>>overallPercentage;
    if((mathMarks>=85)&&(englishMarks>=80)&&(overallPercentage=90)){
        cout<<"egligible for scholarship"<<endl;
    } else{
        cout<<"not egligible for scholarship"<<endl;
    }
    return 0;
}