#include <iostream>
#include <iomanip>
#include "InvestmentCalculator.h"

using namespace std;

void InvestmentCalculator::getUserInput() {
    cout << "**************************************\n";
    cout << "********** Airgead Banking ***********\n";
    cout << "**************************************\n\n";

    cout << "Initial Investment Amount: ";
    cin >> initialInvestment;

    cout << "Monthly Deposit: ";
    cin >> monthlyDeposit;

    cout << "Annual Interest Rate (%): ";
    cin >> annualInterestRate;

    cout << "Number of Years: ";
    cin >> numberOfYears;

    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
}

void InvestmentCalculator::calculateWithoutMonthlyDeposit() {
    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "========================================================\n";
    cout << left << setw(6) << "Year"
         << setw(20) << "Year End Balance"
         << "Year End Earned Interest\n";

    double balance = initialInvestment;
    double monthlyRate = (annualInterestRate / 100) / 12;

    for (int year = 1; year <= numberOfYears; year++) {
        double yearlyInterest = 0;

        for (int month = 1; month <= 12; month++) {
            double interest = balance * monthlyRate;
            balance += interest;
            yearlyInterest += interest;
        }

        cout << left << setw(6) << year
             << "$" << setw(19) << fixed << setprecision(2) << balance
             << "$" << yearlyInterest << endl;
    }
}

void InvestmentCalculator::calculateWithMonthlyDeposit() {
    cout << "\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "=====================================================\n";
    cout << left << setw(6) << "Year"
         << setw(20) << "Year End Balance"
         << "Year End Earned Interest\n";

    double balance = initialInvestment;
    double monthlyRate = (annualInterestRate / 100) / 12;

    for (int year = 1; year <= numberOfYears; year++) {
        double yearlyInterest = 0;

        for (int month = 1; month <= 12; month++) {
            balance += monthlyDeposit;
            double interest = balance * monthlyRate;
            balance += interest;
            yearlyInterest += interest;
        }

        cout << left << setw(6) << year
             << "$" << setw(19) << fixed << setprecision(2) << balance
             << "$" << yearlyInterest << endl;
    }
}