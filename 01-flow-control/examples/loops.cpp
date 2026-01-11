#include <iostream>
using namespace std;

void  run_for () {
    cout<<"---For loop---\n";
 for (int i =0; i<=5; i++){
    cout<<i<<"*\n";
 }

}

void run_while(){
    cout<<"---While loop---";
   int j =0;
   while(j<=6){
    cout<<j++<<"*\n";
   }

}

void run_do_while(){
    cout<<"Do-while loop\n";
    int k;
    do{
        cout<<k++<<"*";
    } while (k<7);
    
}
void run_loops (){
cout<<"---\nLoops examples\n---  1.For loop\n 2.While loop\n 3.Dow-while lopo\n";

int option ;
if (!option){
    cout<<"Invalid option!";
    return ;
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