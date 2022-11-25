//Problem Link: https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1
class Solution{
  public:
  Node* middle(Node* head)
  {
      Node* slow=head;
      Node* fast=head->next;
      while(fast!=NULL && fast->next!=NULL)
      {
          slow=slow->next;
          fast=fast->next->next;
      }
      return slow;
  }
  Node* merge(Node* l1,Node* l2)
  {
     if(l1==NULL)return l2;
     if(l2==NULL) return l1;
      Node* dummy = new Node(0);
      Node* temp =  dummy; 
      while(l1!=NULL && l2!=NULL)
      {
          if(l1->data>=l2->data){
            temp->next=l2;
            l2=l2->next;
            
          }
          else {
             temp->next=l1;
              l1=l1->next;
          }
           temp=temp->next;
      }
      while(l1!=NULL)
      {
          temp->next=l1;
          temp=temp->next;
          l1=l1->next;
      }
       while(l2!=NULL)
      {
          temp->next=l2;
          temp=temp->next;
          l2=l2->next;
      }
      return dummy->next;
  }
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
     if(head==NULL || head->next==NULL)return head;
        Node* mid=middle(head);
      
         Node* left=head;
         Node* right=mid->next;
         mid->next=NULL;
        left=mergeSort(left);
        right=mergeSort(right);
        Node* l3=merge(left,right);
        return l3;
      
        
    }
};
