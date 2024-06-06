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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> sol;
        ListNode* temp = list1;
        while(temp != NULL) {
            sol.push_back(temp->val);
            temp = temp->next; 
        }
        ListNode* tempOne = list2;
        while(tempOne != NULL) {
            sol.push_back(tempOne->val);
            tempOne = tempOne->next; 
        }
        if (sol.empty()) return NULL;
        sort(sol.begin(), sol.end());        
        ListNode* ans = new ListNode(sol[0]);
        ListNode* curr = ans;
        for(size_t i=1; i<sol.size();) {
            curr->next = new ListNode(sol[i++]);
            curr = curr->next;
        }
        return ans;
    }
};

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        if(list1->val <= list2->val) {
            list1->next =  mergeTwoLists(list1->next, list2);
            return list1;
        }
        else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};