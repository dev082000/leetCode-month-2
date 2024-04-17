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
    int n=0;
    while(head!=NULL)
    {
        head=head->next;
        n++;
    }
    return n;
   } 
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return NULL;
        int len=length(head);
          int mid=len/2;
         ListNode* newNode=head;
        if(len%2==0)
        {
            for(int i=0;i<mid-1;i++)
          {
            newNode=newNode->next;
          }
           newNode->next=newNode->next->next;
        }
        else
        {
            for(int i=0;i<mid-1;i++)
            {
                newNode=newNode->next;
            }
            newNode->next=newNode->next->next;
        }
        return head;
    }
};