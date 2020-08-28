// circumferenceprogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void compute(double annualsalary, double percentup, double& raise, double& newannualsalary, double& totalannualsalary);

int main()
{
	system("cls");
	system("color 75");
	// pn: product number, up: units produced, bp: bonus pay, opr: over pay rate, uq: units over quota
	string name, pn;
	int quota, up, uq;
	double bp, opr, total_pay, base_pay;

	int count = 0;

	while (count<2)
	{

		cout << "Enter  name: ";
		cin >> name;

		cout << "Enter product number: ";
		cin >> pn;

		cout << "Enter quota: ";
		cin >> quota;

		cout << "Enter units produced: ";
		cin >> up;


		uq = up - quota;

		if ((uq >= 1) and (uq <= 11)) {
			opr = 0.60;
		}
		else if ((uq >= 11) and (uq <= 25)) {
			opr = 0.65;
		}
		else if ((uq >= 26) and (uq <= 45)) {
			opr = 0.70;
		}
		else if (uq >= 46) {
			opr = 0.75;
		}
		else {
			opr = 0;
		}


		bp = uq * opr;

		base_pay = 0.60 * quota;

		total_pay = base_pay + bp;

		cout << setw(15) << "Employee "
		<< setw(15) << "Product No."
		<< setw(15) << "Quota Number"
		<< setw(15) << "Units Produced"
		<< setw(15) << "Over quota"
		<< setw(15) << "Bonus Pay"
		<< setw(15) << "Total Pay"
		<< endl;

		cout << setw(15) << name
			<< setw(15) << pn
			<< setw(15) << quota
			<< setw(15) << up
			<< setw(15) << opr
			<< setw(15) << bp
			<< setw(15) << total_pay
			<< endl;



	}

C:\Users\Sam\source\repos\cpp_programs\circumferenceprogram\circumferenceprogram.cpp

	return 0;






	/*
	// ******************************************* problem n1 *********************************************
	string lastname;
	double previous_balance, payments, charges;
	double new_balance, finance_charge, month_end_balance;

	cout << "Enter last name: ";
	cin >> lastname;

	cout << "Enter previous balance: ";
	cin >> previous_balance;

	cout << "Enter payments: ";
	cin >> payments;

	cout << "Enter charges: ";
	cin >> charges;


	new_balance = previous_balance - payments + charges;
	finance_charge = new_balance * 0.12;
	month_end_balance = new_balance + finance_charge;

	cout << "New Balance is " << new_balance << endl;
	cout << "Finance charge is " << finance_charge << endl;
	cout << "Month end balance is " << month_end_balance << endl;
	*/

	/*
	// ******************************************* problem n2 *********************************************
	string name;
	double total_sales, cost_of_sales, net_profit;
	int count = 0;

	count = 0;

	while (count < 2)
	{

		cout << "Enter your name: -";
		cin >> name;

		cout << "Enter your total sales: - ";
		cin >> total_sales;

		cout << "Enter your cost of sales: - ";
		cin >> cost_of_sales;


		net_profit = total_sales - cost_of_sales;

		count = count + 1;

		cout << "You net profit is:" << net_profit << endl;

	}
	*/
	/*
	// ******************************************* problem n3 *********************************************

	system("cls");
	system("color 75");
	string employee_name;
	// gp: gross_pay, fit: federal income tax , np: net pay
	double rate, gp, fit, np;
	int hours, count=0;


	while (count < 2)
	{
		cout << "Enter name: ";
		cin >> employee_name;

		cout << "Enter hours: ";
		cin >> hours;

		cout << "Enter rate: ";
		cin >> rate;

		gp = hours * rate;
		fit = gp * 0.15;
		np = gp - fit;

		count = count + 1;

		cout << "The net pay is: " << np << endl;

	}
	*/

	/*
	// ******************************************* problem n5 *********************************************
	system("cls");
	system("color 75");
	string employeename;
	int employenum, deptnum;
	double ann_slr, percent_up, raise, new_ann_slr, total_ann_slr=0;

	int count = 0;

	while (count < 2) {
		cout << "Enter the employee number ";
		cin >> employenum;

		cout << "Enter the employee name ";
		cin >> employeename;
		
		cout << "Enter the department number ";
		cin >> deptnum;
		
		cout << "Enter the employee annual salary ";
		cin >> ann_slr;
		
		cout << "Enter the percent increase ";
		cin >> percent_up;

		compute(ann_slr,  percent_up,  raise,  new_ann_slr, total_ann_slr);

		count = count + 1;

		cout << setw(9) << employenum
			<< setw(9) << employeename
			<< setw(9) << deptnum
			<< setw(9) << ann_slr
			<< setw(9) << percent_up
			<< setw(9) << raise
			<< setw(9) << new_ann_slr
			<< endl;

		cout << "The raise is " << raise << endl;
		cout << "New annual salary is " << total_ann_slr << endl;

	}
	*/

	
	

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


void compute(double annualsalary, double percentup, double & raise, double & newannualsalary, double & totalannualsalary)
{
	raise = annualsalary * percentup;
	newannualsalary = annualsalary + raise;
	totalannualsalary = totalannualsalary + newannualsalary;
}