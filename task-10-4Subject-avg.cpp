#include<iostream>
using namespace std;

void fourSubject(int math,int physics,int english,int computer){
  if ((math >= 60 && math <= 100) &&
        (physics >= 60 && physics <= 100) &&
        (english >= 60 && english <= 100) &&
        (computer >= 60 && computer <= 100)) {
    int total = math + physics + english + computer;
    float avg = total/4;
    if(avg > 75){
      cout << "Congratulations! you are a perfect student. " << endl;
    }else{
      cout << "You scored 60+ in all, but average is less than 75." << endl;
    }
  }else {
        cout << "You are not eligible. All marks must be between 60 and 100." << endl;
  }
}

int main(){

  int student=5;
  string names[student];
  int math,physics,english,computer;

  cout << "Enter details for 5 students :- " << endl << endl;

  for(int i=0;i<student;i++){
    cout << "Student " << i + 1 << " Name :- " ;
    cin >> names[i];

    cout << "Math marks :- ";
    cin >> math;
    cout << "Physics marks :- ";
    cin >> physics;
    cout << "English marks :- ";
    cin >> english;
    cout << "Computer marks :- ";
    cin >> computer;

    fourSubject(math, physics, english, computer);
  }
  
  return 0;
}
