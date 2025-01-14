#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
  return hourly_rate * 8;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
  double diff = before_discount * (discount / 100);
  return before_discount - diff;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
  double daily = daily_rate(hourly_rate);
  double monthly = daily * 22;
  double tmp = apply_discount(monthly, discount);
  return ceil(tmp);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
  double daily = daily_rate(hourly_rate);
  double after_discount = apply_discount(daily, discount);
  return budget / after_discount;
}
