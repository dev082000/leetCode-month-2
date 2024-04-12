struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       if(head==NULL || head->next==NULL)
       {
        return head;
       }
        ListNode* temp=head;
         while(temp!=NULL)
        {
 if(temp->next!=NULL && (temp->val==temp->next->val) )
            {
                ListNode* node=temp->next;
                temp->next=temp->next->next;
                node->next=NULL;
                delete node;
            }
             else
            temp=temp->next;
        }
        return head;
    }
};