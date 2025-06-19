#include<iostream>
using namespace std;
int main(){

  int num,evenCount=0,oddCount=0,evenSum=0,oddSum=0;

  cout << "Enter 10 integer number :- ";
  for(int i=0;i<10;i++){
    cin >> num;
    if(num%2 == 0){
      evenCount++;
      evenSum += num;
    }else{
      oddCount++;
      oddSum += num;
    }  
  }
  cout << endl;
  cout << "Count of even numbers :- " << evenCount << endl;
  cout << "Count of odd numbers :- " << oddCount << endl;
  cout << "Sum of all even numbers :- " << evenSum << endl;
  cout << "Sum of all odd numbers :- " << oddSum << endl;
  
  return 0;
}
