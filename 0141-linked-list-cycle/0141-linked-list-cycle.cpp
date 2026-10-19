/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       unordered_map<ListNode*,int> mp;
       ListNode* tail=head;
       while( tail != nullptr && mp.find(tail) == mp.end()){
            mp[tail]++;
            tail=tail->next;
       }
       if(tail != nullptr){
       if(mp.find(tail)!=mp.end()){
        return true;
       }}
       return false;

    }
};