#include <iostream>

using std::vector;

class Solution {
public:
    double average(vector<int> &salary) {
        int min_salary = salary[0];
        int max_salary = salary[0];

        double total = 0.0;

        int div = salary.size() - 2;

        if (div == 0)
            return 0.0;

        for (int i = 0; i < salary.size(); ++i) {
            int s = salary[i];

            min_salary = std::min(min_salary, s);
            max_salary = std::max(max_salary, s);

            total += s;
        }

        total -= min_salary;
        total -= max_salary;

        return total / div;
    }
};

int main() {
    Solution s;

    //  vector<int> salaries = {4000, 3000, 1000, 2000};
    // vector<int> salaries = {1000, 2000, 3000};
    vector<int> salaries = {1000, 3000};

    double res = s.average(salaries);
    std::cout << "res = " << res << std::endl;

    return 0;
}
