#include <iostream>
using namespace std;


void run_loops (){
cout<<"---\nLoops examples\n---";

int option ;
if (!option){
    cout<<"Invalid option!";
    return ;
}

void  run_for () {
 for (int i =0; i<=5; i++){
    cout<<"*";
 }
 cout <<'\n';
}
if (option = 1){
    run_for();
}
else if(option=2){
    run_while();
}else{
    run_do_while();
}




}