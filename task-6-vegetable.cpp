#include<iostream>
using namespace std;
int main(){

  int quantity,price1=0,price2=0,price3=0,price4=0,rate=50,choice;

  do{
    cout << "Press 1 for potatoes." << endl;
    cout << "Press 2 for tomatoes." << endl;
    cout << "Press 3 for onions." << endl;
    cout << "Press 4 for okra." << endl;

    cout << "Enter the number of your choice :- " ;
    cin >> choice;

    switch(choice){
      case 1:
        cout << "Enter the quantity per kg potatoes :- ";
        cin >> quantity;

        price1 = quantity * rate;
        cout << "Price of " << quantity << "kg potatoes :- " << price1 << endl;
        cout << "-----------------------------" << endl;
        break;
      
      case 2:
        cout << "Enter the quantity per kg tomatoes :- ";
        cin >> quantity;

        price2 = quantity * rate;
        cout << "Price of " << quantity << "kg tomatoes :- " << price2 << endl;
        cout << "-----------------------------" << endl;
        break;
      
      case 3:
        cout << "Enter the quantity per kg onions :- ";
        cin >> quantity;

        price3 = quantity * rate;
        cout << "Price of " << quantity << "kg onions :- " << price3 << endl;
        cout << "-----------------------------" << endl;
        break;
      
      case 4:
        cout << "Enter the quantity per kg okra :- ";
        cin >> quantity;

        price4 = quantity * rate;
        cout << "Price of " << quantity << "kg okra :- " << price4 << endl;
        cout << "-----------------------------" << endl;
        break;
      default :
        cout << "Invalid input..." << endl;
        break;
    }
  }while(choice != 0);

  int total = price1 + price2 + price3 + price4;
  cout << "Total bill amount :- " << total;
  
  return 0;
  
}
