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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* node = new ListNode();
        ListNode* temp =node;
        map <int,int> mpp;
        for(int i : nums){
            mpp[i] = 1;
        }
        while(head != nullptr){
            if(mpp.find(head->val) == mpp.end() ){
                node->next = head;
                node = node->next;
            }
            head = head->next;
        }
        node->next = nullptr;
        return temp->next;
    }
};