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

  cout << "Enter the size of the array :- ";
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


// OUTPUT :- 

// Enter the size of the array :- 10
// Enter 10 array elements :- 
// Array of [0] :- 1
// Array of [1] :- 2
// Array of [2] :- 3
// Array of [3] :- 1
// Array of [4] :- 4
// Array of [5] :- 5
// Array of [6] :- 1
// Array of [7] :- 6
// Array of [8] :- 1
// Array of [9] :- 7
// Enter the number you want to find the frequency of :- 1
// The freguency of 1 is :- 4

