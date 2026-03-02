#include "InvestmentCalculator.h"

int main() {
    InvestmentCalculator investmentApp;

    investmentApp.getUserInput();
    investmentApp.calculateWithoutMonthlyDeposit();
    investmentApp.calculateWithMonthlyDeposit();

    return 0;
}