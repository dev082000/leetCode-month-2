struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 class Solution {
public:
int length(ListNode* head)
{
    ListNode* temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=length(head);
        if(head==NULL)
        return NULL;
        if(head->next==NULL)
        {
            head=NULL;
            return head;
        }
        ListNode* prev=head;
        int i=len-n;
        int j=0;
            if(i==j)
            {
                head=head->next;
                return head;;
            }
            while(j<i-1)
            {
            prev=prev->next;
            j++;

            }
             ListNode* curr=prev->next;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
      return head;
    }
};