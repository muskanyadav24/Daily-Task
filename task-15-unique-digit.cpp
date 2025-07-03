#include<iostream>
using namespace std;

void countUniqueDigits(int num){

  int digits[10] ={0};
  while (num > 0){
    int digit = num%10;
    digits[digit] = 1 ;
    num = num/10;
  }
  int count = 0;
  cout << "Unique digits :- ";
  for(int i=0;i<10;i++){
    if(digits[i] == 1){
      cout << i << " ";
      count++;
    }
  }
  cout << endl << "Total unique digits :- " << count << endl;
}

int main(){

  int num;

  cout << "Enter a number :- ";
  cin >> num;

  countUniqueDigits(num);
  
  return 0;
}
