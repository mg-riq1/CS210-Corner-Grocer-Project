#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

class InvestmentCalculator {
private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterestRate;
    int numberOfYears;

public:
    void getUserInput();
    void calculateWithoutMonthlyDeposit();
    void calculateWithMonthlyDeposit();
};

#endif