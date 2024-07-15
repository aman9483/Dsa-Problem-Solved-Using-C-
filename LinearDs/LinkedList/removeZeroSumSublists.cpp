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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixSum = 0;
        unordered_map<int, ListNode*> mp;

        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;
        mp[0] = dummyNode;

        ListNode* current = head;

        while (current != nullptr) {
            prefixSum += current->val;

            if (mp.find(prefixSum) != mp.end()) {
                ListNode* start = mp[prefixSum];
                ListNode* temp = start;

                int sum = prefixSum;
                while (temp != current) {
                    temp = temp->next;
                    sum += temp->val;

                    if (temp != current) {
                        mp.erase(sum);
                    }
                }

                start->next = current->next;
            } else {
                mp[prefixSum] = current;
            }

            current = current->next;
        }

        return dummyNode->next;
    }
};
