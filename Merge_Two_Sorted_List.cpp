struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* op = dummy;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                op->next = list1;
                list1 = list1->next;
            } else {
                op->next = list2;
                list2 = list2->next;
            }
            op = op->next;
        }
        op->next = list1 ? list1 : list2;
        return dummy->next;
    }
};
