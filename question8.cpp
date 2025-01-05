#include<iostream>
using namespace std;
int main(){
    int bagsize;
    cout<<"size of bag"<<endl;
    cin>>bagsize;
    int area;
    cout<<"area covered by bag"<<endl;
    cin>>area;
    int costperbag;
    cout<<"cost per bag"<<endl;
    cin>>costperbag;
    int costperpound;
    cout<<"cost per pound"<<endl;
    cin>>costperpound;
    int pound;
    int costperarea;
    costperarea=area*pound;
    costperpound=bagsize*pound;
    cout<<"cost per area is"<<costperarea<<endl;
    cout<<"cost per pound is"<<costperpound<<endl;
    return 0;
}