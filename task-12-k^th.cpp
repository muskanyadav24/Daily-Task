#include<iostream>
using namespace std;
int main(){

  int a,b,c=1,d,k;

  cout << "Enter the value of a :- ";
  cin >> a;
  cout << "Enter the value of b :- ";
  cin >> b;
  cout << "Enter the value of k :- ";
  cin >> k;

  for(int i=1;i<=b;i++){
    c = c*a;
  }
  for(int j=1;j<=k;j++){
    d = c%10;
    c = c/10;
  }
  cout << k << "th digit from right is " << d << ".";
  
  return 0;
}

// Output :-

// Enter the value of a :- 3
// Enter the value of b :- 3
// Enter the value of k :- 1
// 1th digit from right is 7.
