// Fix the bug in given snipet.

#include<iostream>
using namespace std;
int main(){

  bool b(int n){
    for(int i=2;i<=n/2;i++){
      if(n%i = 0){ // ---> bug (n%i == 0);
        return false;
      }
    }
    return true;
  }

  int c(int n){
    int f=0; // ---> bug (f=1);
    for(int i=1;i<=n;i++){
      f*=i;
    }
    return f;
  }

  int a(int n){
    int rev=0;
    while(n > 0){
      rev = rev * 10 + n%10;
      n/10;  // ---> (n/=10);
    }
    return rev;
  }
  
  return 0;
}
