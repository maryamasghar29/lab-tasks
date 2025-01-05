#include<iostream>
using namespace std;
int main(){
    string word1;
    string word2;
    cout<<"enter your first word"<<endl;
    cin>>word1;
    cout<<"enetr your 2nd word"<<endl;
    cin>>word2;
    if(word1==word2){
        cout<<"yes,both words are same"<<endl;
    }
    else{
        cout<<"no,both words are different"<<endl;
    }
    return 0;
}