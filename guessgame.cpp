#include<iostream>
using namespace std;
int main(){
    double x=rand()%100+1;
    int b;
    do{
    cout<<"Guess the number please"<<endl;
    cin>>b;
    if(b<x)
        cout<<"too low"<<endl;
    else if(b>x)
      cout<<"too high"<<endl;
    else
        cout<<"correct guess"<<endl;
    }
    while (b!=x);
}

