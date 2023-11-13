// Alphanzo Moore
// CIS-5 Online
// November 5, 2023
// Assignment / Tutorial 12A: Accessing Members of a Struct

#include <iostream>
#include "Person.h"
using namespace std;

int main() 
{
  Person RBG;
  Person Ada;

  
  RBG.name = "RUTH";
  RBG.age = 87;
  RBG.height = 61;
  RBG.eyecolor = "Blue";

  Ada.name = "Ada";
  Ada.age = 36;
  Ada.height = 65;
  Ada.eyecolor = "Brown";


  
  cout << "Name: " << RBG.name << endl;
  cout << "Age: " << RBG.age << endl;
  cout << "Height: " << RBG.height << endl;
  cout << "Eye Color: " << RBG.eyecolor << endl;

  cout << "Name: " << Ada.name << endl;
  cout << "Age: " << Ada.age << endl;
  cout << "Height: " << Ada.height << endl;
  cout << "Eye Color: " << Ada.eyecolor << endl;
  
  
  return 0;
}