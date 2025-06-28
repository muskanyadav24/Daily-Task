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


// // OUTPUT :-

// Enter details for 5 students :- 

// Student 1 Name :- Muku
// Math marks :- 89
// Physics marks :- 90
// English marks :- 99
// Computer marks :- 90
// Congratulations! you are a perfect student. 
// Student 2 Name :- Kru
// Math marks :- 90
// Physics marks :- 78
// English marks :- 89
// Computer marks :- 68
// Congratulations! you are a perfect student. 
// Student 3 Name :- Divu
// Math marks :- 98
// Physics marks :- 90
// English marks :- 89
// Computer marks :- 67
// Congratulations! you are a perfect student. 
// Student 4 Name :- Rahul
// Math marks :- 79
// Physics marks :- 90
// English marks :- 59
// Computer marks :- 69
// You are not eligible. All marks must be between 60 and 100.
// Student 5 Name :- Angel
// Math marks :- 67
// Physics marks :- 79
// English marks :- 61
// Computer marks :- 60
// You scored 60+ in all, but average is less than 75.
