#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter a and b numbers: "<<endl;
    cin>>a>>b;
    if (a==b) {
        cout<<"Woah! a and b is equal"<<endl;
    }
    else if (a>b) {
        cout<<"a is greater than b"<<endl;
    }
     else if(a<b) {
        cout<<"a is lesser than b"<<endl;
     }

}