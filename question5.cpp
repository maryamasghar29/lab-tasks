#include<iostream>
using namespace std;
int main(){
    int vi;
    int acceleration;
    int time;
    int vf;
    cout<<"vi of the car"<<endl;
    cin>>vi;
    cout<<"time taken by car"<<endl;
    cin>>time;
    cout<<"acceleration of the car"<<endl;
    cin>>acceleration;
    vf=vi+acceleration*time;
    cout<<"vf of the car"<<vf<<endl;
    return 0;

}