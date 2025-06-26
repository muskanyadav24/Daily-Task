#include<iostream>
using namespace std;
int main(){

  int size,sum=0;

  cout << "Enter the size of array :- ";
  cin >> size;

  int array[100] ;

  cout << "Enter the array : " << endl;

  for(int i=0;i<size;i++){
    cout << "Array of [" << i << "] :- ";
    cin >> array[i];
  }
  cout << endl << "Indices of prime numbers :- " ;//index value 

  for(int i=0;i<size;i++){
    int num = array[i];
    int count = 0;

    if(num > 1){
      for(int j=1;j<=num;j++){
        if(num%j == 0){
          count++;
        }
      }
      if(count == 2){
        cout << i << " ";
        sum += num;
      }
    }
  }

  cout << endl << "Sum of prime number :- " << sum << endl;
  
  return 0;
}
