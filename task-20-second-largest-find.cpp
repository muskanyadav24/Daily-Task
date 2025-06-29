#include<iostream>
using namespace std;
int main(){

  int n;

  cout << "Enter size of size :- " ;
  cin >> n;

  if(n > 2){
    cout << "Array must have at least 2 element." << endl;
  }else{
    int *arr = new int [n];
    cout << "Enter " << n << " positive integers :- " << endl;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
  }
  
  return 0;
}
