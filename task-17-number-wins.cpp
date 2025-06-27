// With Function

#include<iostream>
using namespace std;

int sumDigits(int n){
  
  int sum = 0;

  while(n > 0){
    sum += n%10;
    n /=10;
  }
  return sum;
}

int main(){

  int a,b;

  cout << "Enter a :- ";
  cin >> a;

  cout << "Entre b :- ";
  cin >> b;

  int aSum = sumDigits(a);
  cout << "Sum of digit of a :- " << aSum << endl;

  int bSum = sumDigits(b);
  cout << "Sum of digit of b :- " << bSum << endl;

  if(aSum > bSum){
    cout << "If sum of digits of a is greater." << endl;
  }else if(bSum > aSum){
    cout << "If sum of digits of b is greater." << endl;
  }else{
    cout << "If both sums are equal." << endl;
  }
  
  return 0;
}
