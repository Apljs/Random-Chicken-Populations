#include "functions.h"
#include <cmath>


// Define your function definitions here

// Earth's current average temperature is 61 degerees
// Fahrenheit. Suppose Earth's temperature rises by 1.5 degrees every
// year.  Write a function that takes the starting temperature, a
// number of years, and returns the temperature of the Earth after that
// many years have passed.
//
// Do not use any loops or recursion.
double earthTemp(double temp, double numYears)
{
	return (temp + (numYears * 1.5));
}

// Suppose an animal requires three times as much food
// for every pound it gains. Write a function that takes the starting
// weight of the animal, a final weight, the amount of food the animal
// needs when at the start weight, and returns the amount of food the
// animal needs when it weighs the final weight.
//
// Do not use any loops or recursion.
int requiredFood(int startWeight, int foodNeeded, int finalWeight)
{
	return (static_cast<int>(pow(foodNeeded, finalWeight - startWeight)));
}

// A chicken farmer is expanding his coops.  Each year, each chicken
// produces 4 chicks.  He keeps half of all the chicks born that year
// to increase the number of chickens he has.  Furthermore, suppose
// that approximately 1/6 of the chickens die every year (rounded down
// -- e.g. if there are 7 chickens, 1 chicken dies).  Write a function
// that takes the starting number of chickens, a number of years and
// returns how many chickens the farmer has at the end of that year.
//
// You may use loops or recursion.
int numChickens(int startChickens, int numYears)
{
	if (numYears <= 0)
	{
		return startChickens;
	}

	int temp = startChickens;

	for (int i = 1; i <= numYears; i++)
	{
		
		temp += static_cast<int>(((temp * 4) / 2) - floor(temp * (1 / 6)));
	}

	return temp;
}