// circumferenceprogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void compute(double annualsalary, double percentup, double& raise, double& newannualsalary, double& totalannualsalary);

int main()
{

	// problem n5
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


	
	/*
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

	Sales Program 
	cout << "Hello World!\n";
	int count = 0;
	string salesperson;
	double totalsales, costofsales, netprofit;

	while (count<2)
	{
		cout << "Enter the sales person name: ";
		cin >> salesperson;

		cout << "Enter the total of sales: ";
		cin >> totalsales;

		cout << "Enter the cost of sales: ";
		cin >> costofsales;

		netprofit = totalsales - costofsales;

		count = count + 1;

		cout << "The net profit is " << netprofit << endl;
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