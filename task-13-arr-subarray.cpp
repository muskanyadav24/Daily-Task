#include<iostream>
using namespace std;
int main(){

  int size,target,array[100];

  cout << "Enter the size of array :- ";
  cin >> size;

  cout << "Enter the array element :- " << endl;

  for(int i=0;i<size;i++){
    cout << "Array of [" << i << "] :- ";
    cin >> array[i];
  }

  cout << "ENter the target sum :- ";
  cin >> target;

  for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
      if(array[i] + array[j] == target ){
        cout << "Indices with target sum :- [" << i << "][" << j << "]" << endl;
        return 0;
      }
    }
  }

  cout << "No pair found with the target sum." << endl;
  
  return 0;
  
}
