#include<iostream>
using namespace std;
int main(){
   float a,b;
    char c;
    cout<<"welcome to calculator\n please two number"<<endl;
    cin>>a>>b;
    cout<<"what you want to perform\n + \n - \n x \n/"<<endl;
    cin>>c;
    if(c=='+'){
        cout<<"the sum of two number is "<<a+b;
    }
    else if(c=='-'){
        cout<<"the subtraction of two number is "<<a-b;
    }
    else if(c=='x'){
        cout<<"the product of two number is "<<a*b;
    }
    else if(c=='/'){
        
        if(b==0){
            cout<<"error";
        }
        else {
            cout<<"the division of two number is "<<a/b;
        }
    }

}
