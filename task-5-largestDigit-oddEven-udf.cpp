#include<iostream>
using namespace std;

int large(int num){
    int largest=0;

    while(num > 0){
      int digit = num % 10;
      if(digit > largest){
        largest = digit;
      }
      num/=10;
    }
  return largest;
}

int main(){

  int num;

  cout << "Enter the positive integer number :- ";
  cin >> num;

  if(num <= 0){
    cout << "Invalid input! Please enter a positive integer. " << endl;
  }
  int largestDigit = large(num);
  cout << "The largest digit in the number is: " << largestDigit << endl;

  if(num%2 == 0){
    cout << "The largest digit is even." << endl;
  }else{
    cout << "The largest digit is odd." << endl;
  }
  
  return 0;
}
