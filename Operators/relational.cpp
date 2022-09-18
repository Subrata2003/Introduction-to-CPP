#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    bool isequal = (a==b);
    bool isgreater = (a>b);
    bool isless = (a<b);
    cout<<"Are they equal  "<<isequal<<endl;
    cout<<"Are a greater  "<<isgreater<<endl;
    cout<<"Are a lesser  "<<isless<<endl;


}