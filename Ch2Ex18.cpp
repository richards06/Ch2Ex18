/*
Program File Name: Ch2Ex10
Programmer: Josh Richards
Date: September 23, 2024
Requirements:

A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed 
purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of 
them prefer citrus-flavored energy drinks. Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so
that the user can enter the number of the number of customers that were surveyed

*/

#include <iostream>
using namespace std;


int main()
{
	int totalCustomers;
	double energyDrinkPercentage = 0.15;
	double citrusDrinkPercentage = 0.58;
	cout << "Enter the number of customers surveyed: ";
		cin >> totalCustomers;


	int energyDrinkCustomers = totalCustomers * energyDrinkPercentage;
	int citrusDrinkCustomers = energyDrinkCustomers * citrusDrinkPercentage;

	cout << "Approximate number of customers who purchase one or more energy drinks per week: "
		<< energyDrinkCustomers << endl;
	cout << "Approximate numher of customers who prefer citrus-flavored energy drinks: "
		<< citrusDrinkCustomers << endl;



	return 0;
}

