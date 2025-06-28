#include<iostream>
using namespace std;
int main(){

  int counter,first,last,next;
  first = 1; last = 2;

  for(counter=first;counter<=last;counter++){
    cout << endl << counter;
    next = counter*counter;
    cout << " " << next;
  }

  counter = first;

  while(counter <= last){
    cout << endl << counter;
    next = counter*counter;
    cout << " " << next; 
    counter++;
  }

  counter = first;

  do{
    cout << endl << counter;
    next = counter*counter;
    cout << " " << next; 
    counter++;
  }while(counter < last);
  
  return 0;
  
}


// OUTPUT :- 

// 1 1
// 2 4
// 1 1
// 2 4
// 1 1
