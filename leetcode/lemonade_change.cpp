#include <iostream>

using std::vector;

class Solution {
public:
    bool lemonadeChange(vector<int> &bills) {

        vector<int> tmp_bills = {};

        for (int bill: bills) {

            switch (bill) {
                case 5:
                    tmp_bills.push_back(bill);
                    break;
                case 10:
                    if (check_give_back(tmp_bills, 5)) {
                        tmp_bills.push_back(10);
                    } else
                        return false;
                    break;
                case 20:
                    if (check_give_back(tmp_bills, 10)) {
                        if (check_give_back(tmp_bills, 5)) {
                            tmp_bills.push_back(20);
                            break;
                        } else
                            return false;
                    }

                    if (check_give_back(tmp_bills, 5) &&
                        check_give_back(tmp_bills, 5) &&
                        check_give_back(tmp_bills, 5)) {
                        tmp_bills.push_back(20);
                        break;
                    } else
                        return false;
                default:
                    tmp_bills.push_back(bill);
            }
        }

        return true;
    }

private:
    bool check_give_back(vector<int> &bills, int money) {
        vector<int>::iterator found = std::find(bills.begin(), bills.end(), money);
        if (found != bills.end()) {
            long pos = found - bills.begin();
            bills.erase(bills.begin() + pos);
            return true;
        }

        return false;
    }

};

int main() {
    Solution s;

    //vector<int> bills = {5, 5, 5, 10, 20};
    //vector<int> bills = {5, 5, 10, 10, 20};
    vector<int> bills = {5, 5, 5, 10, 5, 20, 5, 10, 5, 20};

    bool res = s.lemonadeChange(bills);
    std::cout << "res = " << res << std::endl;

    return 0;
}