#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  bool isPalindrome(ListNode *head) {
    if (head == NULL || head->next == NULL)
      return true;

    ListNode *tmp = head;

    int cnt = 0;
    while (tmp != NULL) {
      tmp = tmp->next;
      cnt++;
    }

    tmp = head;

    ListNode *mid = find_mid(tmp, cnt);
    ListNode *rev_mid = rev(mid);

    while (rev_mid != NULL) {
      if (head->val != rev_mid->val)
        return false;

      rev_mid = rev_mid->next;
      head = head->next;
    }

    return true;
  }

private:
  ListNode *find_mid(ListNode *head, int n) {
    ListNode *s = head, *f = head;
    while (f != NULL && f->next != NULL) {
      s = s->next;
      f = f->next->next;
    }
    return (n & 1) ? s->next : s;
  }

  ListNode *rev(ListNode *head) {
    ListNode *prv = NULL;
    ListNode *curr = head;
    ListNode *nxt = NULL;

    while (curr != NULL) {
      nxt = curr->next;
      curr->next = prv;
      prv = curr;
      curr = nxt;
    }
    return prv;
  }
};

int main() {
  ListNode node, node1, node2, node3;

  // node3.val = 1;
  // node3.next = nullptr;

  node2.val = 1;
  node2.next = nullptr;

  node1.val = 0;
  node1.next = &node2;

  node.val = 1;
  node.next = &node1;

  Solution solution;
  bool result = solution.isPalindrome(&node);
  cout << "result = " << result << endl;

  return 0;
}
