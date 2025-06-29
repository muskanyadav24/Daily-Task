#include<iostream>
using namespace std;

void findSecondLargest(int arr[], int n){

  int first = arr[0];
  int second = arr[0];

  for(int i=1;i<n;i++){
    if(arr[i] > first){
      first = arr[i];
    }
  }

  int i=0;
  while(i<n && arr[i] == first){
    i++;
  }

  if(i == n){
    cout << "Second largest distinct element does not exist." << endl;
  }else{
    second = arr[i];
    for(int j=i+1;j<n;j++){
      if(arr[j] != first && arr[j] > second){
        second = arr[j];
      }
    }
    cout << "Second largest distinct element is :- " << second << endl;
  }
  
}

int main(){

  int n;

  cout << "Enter size of size :- " ;
  cin >> n;

  if(n < 2){
    cout << "Array must have at least 2 element." << endl;
  }else{
    int *arr = new int [n];
    
    cout << "Enter " << n << " positive integers : " << endl;
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    findSecondLargest(arr,n);
    delete [] arr;
  }
  
  return 0;
}
