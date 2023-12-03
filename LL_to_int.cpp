/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> res;
        ListNode* temp = head;
        int count=0;
        while(temp!=nullptr)
        {
            temp=temp->next;
            count++;
        }
        ListNode* temp2=head;
        for( int i = 0 ; i < count ; i++)
        {
            res.push_back(temp2->val);
            temp2=temp2->next;
        }
        int size=res.size();
        int bin=0;

        for( int i = 0; i < res.size(); i++)
        {
            bin=bin + res[i]*pow(2,size-1);
            size--;
        }
        return bin;
    }
};
