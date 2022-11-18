//Time Complexity : O(m+n)  Space: O(M)
class Solution1 {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        unordered_set<ListNode*>s;
     
     if(head1==NULL || head2==NULL)return NULL;
    while(head1!=NULL)
    {
        s.insert(head1);
        head1=head1->next;
    }
   while(head2!=NULL)
   {
       if(s.find(head2)!=s.end())return head2;
       head2=head2->next;
   }
 return 0;   
    }
};

 //Time Complexity : O(m+n)+O(n-m ) + O(n)  == O(2m) Space: O(1)

class Solution2 {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        
        
    ListNode* p1=head1;
    ListNode* p2=head2;
    int l1=0,l2=0;
    while(p1!=NULL){
            l1++;
            p1=p1->next;
    }
    while(p2!=NULL){
            l2++;
            p2=p2->next;
    }
    p1=head1;
    p2=head2;
    
    int d=abs(l1-l2);
    if(l1>l2)
    {
        while(d--)
            p1=p1->next;
    }
    else
    {
        while(d--)
            p2=p2->next;
    }
        while(p1!= NULL  and p2!= NULL )
        {
            if(p1==p2)return p1;
            else{
                p1=p1->next;
                p2=p2->next;
            }
        }
          return NULL;
    }  
};

// MOst Efficient with short lines of codes
// Time : O(2m) Space : O(1)

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        if(head1==NULL || head2==NULL)return NULL;
        
    ListNode* p1=head1;
    ListNode* p2=head2;
        while(p1 != p2)
        {
            p1 = p1==NULL ? head2 : p1->next;
            p2 = p2==NULL ? head1 : p2->next;
        }
        return p1;
    }
    
};

