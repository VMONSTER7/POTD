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
private:
    bool is_palindrome(vector<int> res)
    {
        bool flag=true;
        int start=0;
        int end=res.size()-1;
        while(start<end)
        {
            if(res[start]!=res[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return flag;
    }

public:
    bool isPalindrome(ListNode* head) {
       bool flag=false;
       vector<int> res;
       ListNode* temp = head;
       while(temp!=nullptr)
       {
           res.push_back(temp->val);
           temp=temp->next;
       }

       flag=is_palindrome(res);
       return flag;

    }
};
