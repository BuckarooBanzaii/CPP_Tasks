#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double loanAmount; // Сумма займа
    double annualInterestRate; // Годовая процентная ставка
    int loanTerm; // Срок займа в месяцах

    cout << "Введите сумму займа: $";
    cin >> loanAmount;

    cout << "Введите годовую процентную ставку (например, 5% вводится как 0.05): ";
    cin >> annualInterestRate;

    cout << "Введите срок займа в месяцах: ";
    cin >> loanTerm;

    double monthlyInterestRate = annualInterestRate / 12; // Месячная процентная ставка
    double monthlyPayment = (loanAmount * monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -loanTerm));

    cout << "Месячный платеж составит: $" << monthlyPayment << endl;

    return 0;
}