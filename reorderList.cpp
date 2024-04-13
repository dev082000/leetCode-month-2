struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    void reorderList(ListNode* head) {
       if(head==NULL || head->next==NULL || head->next->next==NULL)
          return;
        ListNode* second_last=head;
        while(second_last->next->next)
        {
            second_last=second_last->next;
        }
        second_last->next->next=head->next;
        head->next=second_last->next;
        second_last->next=NULL;
        reorderList(head->next->next);
    }
};