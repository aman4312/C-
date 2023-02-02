EX : 10->20->30  n=2
  o/p :20
   Approach: 1- move first pointer n times starting from head
              2- keep a second pointer on head
              3- move first and second pointer with same speed and when first reaches null then return second
          
   Code:
          Node* nthNodeFromEnd(Node* head, int n)
           {
            Node* first=head;
            Node* second=head;
            for(int i=1;i<=n;i++)
            {
              first=first->next;
             }
            while(first!=NULL)
            {
              second=second->next;
              first=first->next;
            }
            return second;
           }
