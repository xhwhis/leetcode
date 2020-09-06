/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 */

// @lc code=start
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
    ListNode *left;
    bool isPalindrome(ListNode* head) {
        left = head;
        return traverse(head);
    }
    bool traverse(ListNode *right) {
        if (right == NULL) return true;
        bool res = traverse(right->next);
        res = res && (right->val == left->val);
        left = left->next;
        return res;
    }
};
// @lc code=end

