#include<iostream>
using namespace std;

void printValidNumbers(int start, int end){

  for(int i=start;i<=end;i++){
    if((i%3 == 0 || i%5 == 0) && (i%5 != 0)){
      if((i%3 == 0 || i%5 == 0) && (i%5 !=0)){
        cout << i << " ";
      }
    }
    cout << endl;
  }
  
}

int main(){

  int start,end;

  cout << "Enter start number :- " ;
  cin >> start;
  cout << "Enter end number :- " ;
  cin >> end;

  cout << "Numbers divisible by 3 or 5 but not both." << endl;
  printValidNumbers(start,end);

  return 0;
}
