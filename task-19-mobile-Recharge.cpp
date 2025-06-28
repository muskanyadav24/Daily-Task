#include<iostream>
using namespace std;
int main(){

  int cnt99=0,cnt149=0,cnt249=0,cnt399=0,choice;
  int totalCustomers=0, totalCollection=0;

  do{
    cout << endl << "Press 1 for recharge 99 rupees." << endl;
    cout << "Press 2 for recharge 149 rupees." << endl;
    cout << "Press 3 for recharge 249 rupees." << endl;
    cout << "Press 4 for recharge 399 rupees." << endl;
    cout << "Press 0 for Exit." << endl;

    cout << "Enter your choice :- ";
    cin >> choice;

    switch(choice){
      case 1:
        cnt99++;
        totalCollection += 99;
        totalCustomers++;
        cout << "Recharge 99 rupess done." << endl;
        break;
      case 2:
        cnt149++;
        totalCollection += 149;
        totalCustomers++;
        cout << "Recharge 149 rupess done." << endl;
        break;
      case 3:
        cnt249++;
        totalCollection += 249;
        totalCustomers++;
        cout << "Recharge 249 rupess done." << endl;
        break;
      case 4:
        cnt399++;
        totalCollection += 399;
        totalCustomers++;
        cout << "Recharge 399 rupess done." << endl;
        break;
      case 0:
        cout << "Exiting......" << endl;
        break;
      default:
        cout << "Please enter a valid number..." << endl;
        break;
    }
    
  }while(choice != 0);

  int bestPlan,maxcnt;

  if(cnt99 >= cnt149 && cnt99 >= cnt249 && cnt99 >= cnt399){
    bestPlan = 99;
    maxcnt = cnt99;
  }else if(cnt149 >= cnt249 && cnt149 >= cnt399){
    bestPlan = 149;
    maxcnt = cnt149;
  }else if(cnt249 >= cnt399){
    bestPlan = 249;
    maxcnt = cnt249;
  }else{
    bestPlan = 399;
    maxcnt = cnt399;
  }

  if(maxcnt == 0){
    cout << "No recharges today." << endl;
  }else{
    cout << "Most popular plan :- rupess " << bestPlan << "( " << maxcnt << "time )" << endl;
  }
  
  
  return 0;
}
