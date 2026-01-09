#include <iostream>
using namespace std;
int sum (int a, int b){
    return a + b;
}

int main (){
    int x,y;
    cout <<"Enter your first number:";
    cin>>x;
     cout <<"Enter your second number:";
    cin>>y;
cout<<"The sum is :"<< sum(x,y)<< endl;
    return 0;
}