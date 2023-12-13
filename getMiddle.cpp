class Solution{
    public:
    int getMiddle(Node *head)
    {
       int ans=0;
       Node* temp = head;
       int count=0;
       while(temp!=nullptr)
       {
           temp=temp->next;
           count++;
       }
       int mid;
       temp=head;
       mid=(count/2)+1;
       while(mid>0)
       {
           ans=temp->data;
           temp=temp->next;
           mid--;
       }
       return ans;
    }
};
