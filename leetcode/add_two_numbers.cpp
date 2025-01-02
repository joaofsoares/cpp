#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {

    ListNode *res = new ListNode();
    int rem = 0;

    while (l1 != NULL && l2 != NULL) {
      int val = l1->val + l2->val + rem;

      calc_node(res, &rem, val);

      l1 = l1->next;
      l2 = l2->next;
    }

    while (l1 != NULL) {
      int val = l1->val + rem;

      calc_node(res, &rem, val);

      l1 = l1->next;
    }

    while (l2 != NULL) {
      int val = l2->val + rem;

      calc_node(res, &rem, val);

      l2 = l2->next;
    }

    if (rem > 0) {
      add_node(res, new ListNode(rem));
    }

    return res->next;
  }

private:
  void add_node(ListNode *node, ListNode *other) {
    if (node->next == NULL)
      node->next = other;
    else
      add_node(node->next, other);
  }

  void calc_node(ListNode *res, int *rem, int val) {
    if (val >= 10) {
      *rem = 1;
      add_node(res, new ListNode(val - 10));
    } else {
      *rem = 0;
      add_node(res, new ListNode(val));
    }
  }
};

int main() {

  // ListNode *n1 = new ListNode(2, new ListNode(4, new ListNode(3)));
  // ListNode *n2 = new ListNode(5, new ListNode(6, new ListNode(4)));

  ListNode *n1 = new ListNode(
      9,
      new ListNode(
          9,
          new ListNode(
              9, new ListNode(
                     9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
  ListNode *n2 =
      new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));

  Solution s;

  ListNode *res = s.addTwoNumbers(n1, n2);

  while (res != NULL) {
    int val = res->val;
    std::cout << "val = " << val << std::endl;
    res = res->next;
  }

  return 0;
}
