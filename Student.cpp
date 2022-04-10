#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int StudentId, char Name[]) {
  studentId=StudentId; 
    strcpy(name,Name);
  
}

// Display StudentId and Name
void Student::display() {

  cout<< studentId<<" "<<name;
  
}
