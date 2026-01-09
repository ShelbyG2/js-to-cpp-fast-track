#include <iostream>
using namespace std;
int option;
 int main (){
    cout<<"=== Flow Control Examples ===\n";
    cout<<"1. Conditional Statements\n" ;
    cout<<"2. Loop Statements\n" ;
    cout<<"3. Switch Statements\n" ;
    cout<<"4. Break and Continue Statements\n" ;
 cout<<"Enter an option:";
 cin>>option;

 if(!option){
    cerr<<"Invalid option";
 }
      
 switch(option){
    case 1:
    cout<<"1. Conditional Statements\n" ;
    break;
    case 2:
    cout<<"2. Loop Statements\n" ;
    break;
    case 3:
    cout<<"3. Switch Statements\n" ;
    break;
    case 4:
    cout<<"4. Break and Continue Statements\n" ;
    default:
    cout<<"Invalid option" ;

 }
 }