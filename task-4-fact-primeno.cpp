#include<iostream>
using namespace std;
int main(){

  int num,fact=1,count=0;

  cout << "Enter the positive integer number :- ";
  cin >> num;

  cout << "Factor number is " << num << " = ";

  for(int i=1;i<=num;i++){
    if(num%i == 0){
      cout << i << " ";
      count++;
    }
  }
  cout << endl << "Total number of factors :- " << count << endl;
  if(count == 2){
    cout << num << " Number is prime." ;
  }else{
    cout << num << " Number is not prime.";
  }

  
  return 0;
}


//OUTPUT :- 

// Enter the positive integer number :- 12
// Factor number is 12 = 1 2 3 4 6 12 
// Total number of factors :- 6
// 12 Number is not prime.
