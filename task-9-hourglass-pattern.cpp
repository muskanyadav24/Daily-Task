 // *                                      * 
 // *  *                                *  * 
 // *  *  *                          *  *  * 
 // *  *  *  *                    *  *  *  * 
 // *  *  *  *  *              *  *  *  *  * 
 // *  *  *  *  *  *        *  *  *  *  *  * 
 // *  *  *  *  *  *  *  *  *  *  *  *  *  * 
 // *  *  *  *  *  *        *  *  *  *  *  * 
 // *  *  *  *  *              *  *  *  *  * 
 // *  *  *  *                    *  *  *  * 
 // *  *  *                          *  *  * 
 // *  *                                *  * 
 // *                                      *


#include<iostream>
using namespace std;
int main(){

  for(int i=1;i<=7;i++){
    for(int j=1;j<=i;j++){
      cout << " * ";
    }
    for(int k=7;k>i;k--){
      cout << "   ";
    }
    for(int k=7;k>i;k--){
      cout << "   ";
    }
    for(int j=i;j>=1;j--){
      cout << " * ";
    }
    cout << endl;
  }

  for(int i=1;i<=7;i++){
    for(int j=i;j<=6;j++){
      cout << " * ";
    }
    for(int k=0;k<i;k++){
      cout << "   ";
    }
    for(int k=0;k<i;k++){
      cout << "   ";
    }
    for(int j=7-i;j>=1;j--){
      cout << " * ";
    }
    cout << endl;
  }
  
  return 0;
}
