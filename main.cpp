#include "functions.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


template<typename T, typename S>
void printTableRow(const T& colOne, const S& colTwo){
  cout << left << setw(15) << colOne << setw(15) << colTwo << endl;
}


int main(){

  cout << "Earth Temperature" << endl;
  const int EARTH_START_TEMP = 61;
  string h1 = "Years", h2 = "Temperature";
  printTableRow(h1, h2);
  for(int i = 0; i < 10; ++i){
    printTableRow(i, earthTemp(EARTH_START_TEMP, i));
  }


  cout << endl;
  cout << "Animal Food Requirements" << endl;
  int startWeight = 4;
  int unitFood = 3;
  int stopWeight = 14;
  h1 = "Weight";
  h2 = "Amount of Food";
  printTableRow(h1, h2);
  for(int i = startWeight; i < stopWeight; ++i){
    printTableRow(i, requiredFood(startWeight, unitFood, i));
  }


  cout << endl;
  cout << "Number of Chickens" << endl;
  h1 = "Year";
  h2 = "Total Chickens";
  int startChickens = 5;
  printTableRow(h1, h2);
  for(int i = 0; i < 6; ++i){
    printTableRow(i, numChickens(startChickens, i));
  }
  
  cout << endl << endl;
  cout << "Random Chicken Populations" << endl;
  cout << "Start with 5 chickens, after 0 years: " << numChickens(5,0) << endl;
  cout << "Start with 3 chickens, after 6 years: " << numChickens(3,6) << endl;
  cout << "Start with 1 chickens, after 10 years: " << numChickens(1, 10) << endl;
  cout << "Start with 100 chickens, after 2 years: " << numChickens(100, 2) << endl;



  return 0;
}
