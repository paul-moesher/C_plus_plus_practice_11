//----------------------------------------------------------------------------------------------------------------------------------
//														Program 3a:
// Paul Moesher											CS2010 Spring 2018									Class: MWF 10:30
// Project name: MoesherP_pgm3																				Due: 2/14/18
// 
// Purpose:		The purpose of this program is to show the user how many points they have earned for entertainment,
//				food and other purchases. Then to display what rewards they can get based off of their preferences.
// Input:		The amount of dollars spent on entertainment, food, and other purchases, as well as the choice of rewards 
//				of the user.
// Processing:	Get the users dollars spent on food, entertainment, and other, as well as choice of rewards. Display the amount of 
//				points earned for all 3 categories. Multiply the amount of money spent by the amount of points each dollar spent
//              is worth in that category. Use the remained to find what else the user can buy with the leftover points.
// Output:		The output will show the user the number of points he or she has earned for each category and also show
//				them what they can redeem based off of their preferences.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// string declarations
	string stuPreference_One; // The students first preference of rewards

	 // int declarations
	int CB_credit; // The amount of cash back credit the user has based off of preference
	int T_credit; // The amount of t shirt credit the user has based off of preference
	int P_credit;// The amount of pizza credit the user has based off of preference
	int remaining_points; // Points leftover after putting them into a category
	int overall_total; // Amount of total points earned from all categories

	// Constant declarations 
	const double entertainment_points = 5; // 5 points for every dollar spent on entertainment
	const double food_points = 2; // 2 points for every dollar spent on food
	const double other_points = 1; // Anything else counts as one point
	const double cashBack = 300; // Cash back costs 300 points
	const double tShirts = 150; // T shirts costs 150 points
	const double pizza = 60; // Pizza costs 60 points

	// Variable declarations 
	double entertainment_spent; // Amount of money spent in the entertainment category
	double food_spent; // Amount of money spent in the food category
	double other_spent;  // Amount of money spent in the other category
	double entertainment_total; // Amount earned in the entertainment category
	double food_total; // Amount of points earned in the food catagory
	double other_total; // Amount of points earned in the other catagory

	// Get first choice of reward from user
	cout << "Please enter your first choice for rewards enter (C) for cash back (T) for tshirt or (P) for pizza:";
	cin >> stuPreference_One;

	if (stuPreference_One != "C")
	if (stuPreference_One != "c")
	if (stuPreference_One != "T")
	if (stuPreference_One != "t")
	if (stuPreference_One != "P")
	if (stuPreference_One != "p")

	{
	cout << "student type must be C, T, or P please try again: ";
	system("pause");
	exit(1);
	}

	// Get money spent on entertainment, food, and other from user
	cout << "Please enter the amount spent on entertainment:";
	cin >> entertainment_spent;
	cout << "Please enter the amount spent on food:";
	cin >> food_spent;
	cout << "Please enter the amount spent on other:";
	cin >> other_spent;

	// Calulate number of points earned for each catagory
	entertainment_total = entertainment_spent * entertainment_points;
	food_total = food_spent * food_points;
	other_total = other_spent * other_points;
	overall_total = entertainment_total + food_total + other_total;

	// Display total amount of points earned
	cout << endl;
	cout << "total points earned " << overall_total;

	// Set option based off of responce
	if (stuPreference_One == "C" || stuPreference_One == "c") {
		CB_credit = overall_total / 300;
		overall_total = overall_total % 300;
		P_credit = overall_total / 175;
		overall_total = overall_total % 175;
		T_credit = overall_total / 90;
		overall_total = overall_total % 90;
		remaining_points = overall_total / 1;
		overall_total = overall_total % 1;

		// Display credit amount of each catagory based off of student preference
		cout << endl;
		cout << "You have earned the following rewards for your credit card purchases" << endl;
		cout << CB_credit << "Dollars cash back (300 points each)" << endl;
		cout << T_credit << "BGSU T-shirts (175 points each)" << endl;
		cout << P_credit << "Pizza (90 points each)" << endl;
		cout << remaining_points << "(points leftover)" << endl;
	}
	else 
		if (stuPreference_One == "T" || stuPreference_One == "t") {
			T_credit = overall_total / 175;
			overall_total = overall_total % 175;
			P_credit = overall_total / 90;
			overall_total = overall_total % 90;
			remaining_points = overall_total / 1;
			overall_total = overall_total % 1;

			// Display credit amount of each catagory based off of student preference
			cout << endl;
			cout << "You have earned the following rewards for your credit card purchases" << endl;
			cout << T_credit << "BGSU T-shirts (175 points each)" << endl;
			cout << P_credit << "Pizza (90 points each)" << endl;
			cout << remaining_points << "(points leftover)" << endl;
		}
		else {
		P_credit = overall_total / 90;
		overall_total = overall_total % 90;
		remaining_points = overall_total / 1;
		overall_total = overall_total % 1;

		// Display credit amount of each catagory based of student preference
		cout << endl;
		cout << "You have earned the following rewards for your credit card purchases" << endl;
		cout << P_credit << "Pizza (90 points each)" << endl;
		cout << remaining_points << "(points leftover)" << endl;
	}

	cout << endl;
	system("pause");
	return 0;

}
