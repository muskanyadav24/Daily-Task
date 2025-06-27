#include<iostream>
using namespace std;
int main(){

  int num,digit,original,rev=0;

  cout << "Enter the positive number :- " ;
  cin >> num;

  original = num;
  
  while(num > 0){
    digit = num % 10;
    rev = rev * 10 + digit;
    num /= 10;
  }

  cout << "Input :- " << original << endl;
  cout << "Reversed :- " << rev << endl;
  cout << "Difference :- " << rev-original << endl;
  
  return 0;
}
