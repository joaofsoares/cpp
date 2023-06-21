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
  ListNode *reverseList(ListNode *head) {

    ListNode *curr = head;

    ListNode *prev = nullptr;
    ListNode *next = nullptr;

    while (curr != NULL) {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }

    head = prev;

    return head;
  }
};

int main() {
  Solution s;

  ListNode *ln = new ListNode(
      1, new ListNode(
             2, new ListNode(3, new ListNode(4, new ListNode(5, nullptr)))));

  ListNode *res = s.reverseList(ln);

  while (res != NULL) {
    int v = res->val;
    std::cout << "v = " << v << std::endl;
    res = res->next;
  }

  return 0;
}
