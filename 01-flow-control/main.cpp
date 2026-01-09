#include <iostream>
using namespace std;

void run_if_else();

 int main (){
   
   int option;


    cout<<" ======================\n Flow Control Examples \n ======================\n";
    cout<<" 1. Conditional Statements\n" ;
    cout<<" 2. Loop Statements\n" ;
    cout<<" 3. Switch Statements\n" ;
    cout<<" 4. Break and Continue Statements\n" ;
    cout<<" Enter an option:  ";
 cin>>option;

 if(!option){
    cerr<<"Invalid option";
    return 0;
 }
      
 switch(option){
    case 1:
    run_if_else();
    break;
    case 2:
    cout<<"2. Loop Statements\n" ;
    break;
    case 3:
    cout<<"3. Switch Statements\n" ;
    break;
    case 4:
    cout<<" Work in progress ....\n" ;
    break;
    default:
    cout<<"Unknown option\n" ;

 }
 }