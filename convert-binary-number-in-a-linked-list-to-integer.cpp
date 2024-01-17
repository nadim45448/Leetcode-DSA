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
int length(ListNode* head)
{
   int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
    int getDecimalValue(ListNode* head) {
        int size=length(head);
        int ans=0;
        int power=pow(2,size-1);
        while(head!=NULL)
        {
            if(head->val==1)
            {
                ans+=power;
            }
            head=head->next;
            power=power/2;
        }
        return ans;
    }
};
