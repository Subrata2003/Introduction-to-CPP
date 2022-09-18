#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    bool isequal = (a==b);
    bool isgreater = (a>b);
    bool isless = (a<b);
  
    bool third= isequal && isgreater;
    bool fourth= isgreater || isless;
    
    cout << "And operation  " << third <<endl;
    cout << "Or operation  " << fourth <<endl;
    cout << "Not equal  " << ! isequal <<endl;
}