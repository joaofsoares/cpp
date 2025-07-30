#include <iostream>

// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
  if (balance < 0) {
    return 3.213;
  } else if (balance >= 0 && balance < 1000) {
    return 0.5;
  } else if (balance >= 1000 && balance < 5000) {
    return 1.621;
  } else {
    return 2.475;
  }
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
  return balance * interest_rate(balance) / 100.0;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
  return balance + yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
  double tmp_balance = balance;
  int cnt = 0;
  while (tmp_balance < target_balance) {
    tmp_balance += yearly_interest(tmp_balance);
    cnt++;
  }
  return cnt;
}

int main(void) {
  double balance = 200.75;

  double yearly_interest_value = yearly_interest(balance);
  std::cout << "yearly_interest_value: " << yearly_interest_value << std::endl;

  double anual_balance = annual_balance_update(balance);
  std::cout << "anual_balance: " << anual_balance << std::endl;

  int years = years_until_desired_balance(balance, 214.88);
  std::cout << "years_until_desired_balance: " << years << std::endl;

  years = years_until_desired_balance(100.0, 125.80);
  std::cout << "years_until_desired_balance: " << years << std::endl;

  years = years_until_desired_balance(2345.67, 12345.6789);
  std::cout << "years_until_desired_balance: " << years << std::endl;

  return 0;
}
