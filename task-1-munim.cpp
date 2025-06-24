#include<iostream>
using namespace std;
int main(){
    
    int array[] = {2000,500,200,100,50,20,10,5,2,1};
    int money,i,tamp;

    cout << "Enter the money :- ";
    cin >> money;

    for(i=0;i<10;i++){
        if(array[i] <= money){
            tamp = money/array[i];
            money = money%array[i];
            cout << array[i] << " X " << tamp << endl;
        }
    }
    return 0;
}


// OUTPUT :-

// Enter the money :- 275
// 200 X 1
// 50 X 1
// 20 X 1
// 5 X 1
