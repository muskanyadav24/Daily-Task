//WAP Find frequency of number in an array using UDF.

#include<iostream>
using namespace std;

int countFrequency(int array[], int size, int target){
  
  int count = 0;

  for(int i=0;i<size;i++){
    if(array[i] == target){
      count++;
    }
  }
  return count;
}

int main(){

  int size,target;

  cout << "ENter the size of the array :- ";
  cin >> size;

  int array[size];

  cout << "Enter " << size << " array elements :- " << endl;

  for(int i=0;i<size;i++){
    cout << "Array of [" << i << "] :- " ;
    cin >> array[i];
  }
  cout << "Enter the number you want to find the frequency of :- " ;
  cin >> target ;

  int freguency = countFrequency(array, size, target);

  cout << "The freguency of " << target << " is :- " << freguency << endl;
  
  
  return 0;
}
