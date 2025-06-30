// Spiral traversing.

#include<iostream>
using namespace std;
int main(){

  int rSize,cSize;

  cout << "Enter the matrix row size :- ";
  cin >> rSize;

  cout << "Enter the matrix column size :- ";
  cin >> cSize;

  int matrix[rSize][cSize];

  cout << "Enter the matrix elements (" << rSize*cSize << " values) :- " <<endl;

  for(int i=0;i<rSize;i++){
    for(int j=0;j<cSize;j++){
      cin >> matrix[i][j];
    }
  }

  int top=0,bottom = rSize-1;
  int left=0,right = cSize-1;

  cout << "Spiral order :- ";

  while(top <= bottom && left <= right){
    for(int i=left;i<=right;i++){
      cout << matrix[top][i] << " ";
    }
    top++;
    
    for(int i=top;i<=bottom;i++){
      cout << matrix[i][right] << " ";
    }
    right--;
    
    if(top <= bottom){
      for(int i=right;i>=left;i--){
        cout << matrix[bottom][i] << " ";
      }
      bottom--;
    }
    
    if(top <= right){
      for(int i=bottom;i>=top;i--){
        cout << matrix[i][left] << " ";
      }
      left++;
    }
  }
  
  return 0;
}


// OUTPUT :- 

// Enter the matrix row size :- 4
// Enter the matrix column size :- 4
// Enter the matrix elements (16 values) :- 
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13
// 14
// 15
// 16
// Spiral order :- 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
