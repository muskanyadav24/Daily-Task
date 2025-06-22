//Task a number as input and count how many zeroes are present using a UDF.

#include<iostream>
using namespace std;

int countZeroes(int num){
  int count = 0;

  while(num > 0){
    if(num % 10 ==0){
      count++;
    }
    num/=10;
  }
  return count;
}

int main(){

  int num;

  cout << "Enter a number :- ";
  cin >> num;

  int ans = countZeroes(num);

  cout << "Number of zeroes :- " << ans << endl;
  
  return 0;
}
