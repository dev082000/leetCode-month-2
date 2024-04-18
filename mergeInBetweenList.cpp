struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1==NULL)
          return list2;
        int n=0;
        ListNode* newNode=list1;
         while(n<a-1)
        {
            newNode=newNode->next;
            n++;
        }
        ListNode* secondNode=newNode->next;
           int it=b-a+1;
         while(it>0)
                 {
                    secondNode=secondNode->next;
                         it--;
                 }  
        newNode->next=list2;
        while(list2->next)
        {
        list2=list2->next;}
       list2->next=secondNode;
        return list1;
    }
};