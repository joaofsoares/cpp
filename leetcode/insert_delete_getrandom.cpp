#include <iostream>
#include <set>

using std::set;

class RandomizedSet {
private:
  set<int> elems;

public:
  RandomizedSet() { this->elems = {}; }

  bool insert(int val) {
    auto resp = elems.insert(val);
    return resp.second;
  }

  bool remove(int val) {
    auto found = elems.find(val);
    if (found != elems.end()) {
      elems.erase(found);
      return true;
    }

    return false;
  }

  int getRandom() {
    int random = std::rand() % elems.size();
    auto idx = next(elems.begin(), random);
    return *idx;
  }
};

int main() {

  RandomizedSet *rs = new RandomizedSet();
  rs->insert(1);
  rs->insert(2);
  rs->insert(3);
  rs->insert(10);
  rs->remove(2);
  std::cout << "random = " << rs->getRandom() << std::endl;
  std::cout << "random = " << rs->getRandom() << std::endl;

  return 0;
}
