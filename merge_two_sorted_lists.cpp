#include <cstddef>
#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void print_list_node(ListNode *nodes);

class Solution {
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {

    ListNode *tmpList1 = list1;
    ListNode *tmpList2 = list2;
    ListNode *res = new ListNode();

    int v1, v2;

    while (tmpList1 != NULL && tmpList2 != NULL) {
      v1 = tmpList1->val;
      v2 = tmpList2->val;

      if (v1 == v2) {
        add_node(res, new ListNode(v1, new ListNode(v2)));
        tmpList1 = tmpList1->next;
        tmpList2 = tmpList2->next;
      } else if (v1 < v2) {
        add_node(res, new ListNode(v1));
        tmpList1 = tmpList1->next;
      } else {
        add_node(res, new ListNode(v2));
        tmpList2 = tmpList2->next;
      }
    }

    if (tmpList2 != NULL) {
      add_node(res, tmpList2);
    }

    if (tmpList1 != NULL)
      add_node(res, tmpList1);

    return res->next;
  }

private:
  void add_node(ListNode *node, ListNode *other) {
    if (node->next == NULL)
      node->next = other;
    else
      add_node(node->next, other);
  }
};

int main() {

  Solution s;

  ListNode *node1 = new ListNode(1, new ListNode(3));
  ListNode *node2 = new ListNode(1, new ListNode(2));

  // ListNode *node1 = NULL;
  // ListNode *node2 = NULL;

  // ListNode *node1 = nullptr;
  // ListNode *node2 = new ListNode(2);

  // ListNode *node1 = new ListNode(5);
  // ListNode *node2 = new ListNode(1, new ListNode(2, new ListNode(4)));

  ListNode *res = s.mergeTwoLists(node1, node2);
  print_list_node(res);

  return 0;
}

void print_list_node(ListNode *nodes) {
  if (nodes == NULL && nodes->next == NULL) {
    std::cout << "null values. breaking..." << std::endl;
    return;
  }

  while (nodes != NULL) {
    std::cout << "elem = " << nodes->val << std::endl;
    nodes = nodes->next;
  }
}
