#include<iostream>
using namespace std;
int main(){

  int num,original,digit,sum=0,reverse=0,count=0;

  cout << "Enter the positive integer number :- ";
  cin >> num;

  original = num;
  
  while(num > 0){
    digit = num%10;
    sum += digit;
    reverse = reverse * 10 + digit;
    num/=10;
    count++;
  }
  
  cout << "Number of digits :- " << count << endl;
  cout << "Sum of digits :- " << sum << endl;
  cout << "Reverse of the number :- " << reverse << endl;

  if(original == reverse){
    cout << "The number is a palindrome." << endl;
  }else{
    cout << "The number is not a palindrome." << endl;
  }
  
  return 0;
}
