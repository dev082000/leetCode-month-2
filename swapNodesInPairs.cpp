struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 class Solution {
public:
     int  length(ListNode* head)
     {    int i=0;
         ListNode* temp=head;
         while(temp!=NULL)
         {
             temp=temp->next;
             i++;
         }
         return i;
     }
     ListNode* reverse2Node(ListNode* &head,int k)
    {
        int len=length(head);
        if(len<k)
        return head;
        if(head==NULL)
        {
            return head;
        }
         ListNode* prev=NULL;
        ListNode* curr=head;
        int m=0;
        while(m<k)
         {
            ListNode* forward=curr->next;
            curr->next=prev;
             prev=curr;
            curr=forward;
            m++;   
        }
        if(curr != NULL)
        {
            head->next=reverse2Node(curr,2);
        }
        return prev;
    }
     ListNode* swapPairs(ListNode* head) {
     ListNode* newHead= reverse2Node(head,2);     
     return newHead;
    }
};