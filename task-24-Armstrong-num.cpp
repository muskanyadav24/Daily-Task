#include<iostream>
using namespace std;
int main(){

  int num,temp,k,sum=0,digits=0;

  cout << "Enter a number :- ";
  cin >> num;

  temp = num;

  while(temp > 0){
    digits++;
    temp /= 10;
  }
  temp = num;
  while(temp > 0){
    k = temp % 10;
    int power = 1;
    for(int i=0;i<digits;i++){
      power *= k;
    }
    sum += power;
    temp /= 10;
  }
  if(sum == originalNum){
    cout << originalNum << " is an Armstrong number." << endl;
  }else{
    cout << originalNum << " is not an Armstrong number." << endl;
  }
  
  return 0;
}
