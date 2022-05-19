/* 2. Add two numbers */

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* ll1 = l1;
        ListNode* ll2 = l2;

        std::string a;
        std::string b;

        while (ll1 != NULL && ll2 != NULL)
        {
            a.append(std::to_string(ll1->val));
            b.append(std::to_string(ll2->val));
            ll1 = ll1->next;
            ll2 = ll2->next;
        }
        std::cout << a << std::endl;
        std::cout << b << std::endl;


        std::string::iterator begin = a.begin();
        std::string::iterator end = a.end();
        std::reverse(begin, end);
        begin = b.begin();
        end = b.end();
        std::reverse(begin, end);
        std::cout << a << std::endl;
        std::cout << b << std::endl;

        stringstream ss;
        int suma, sumb;

        ss << a;
        ss >> suma;
        ss.clear();
        ss << b;
        ss >> sumb;

        std::cout << suma <<std::endl;
        std::cout << sumb <<std::endl;

        suma += sumb;
        return NULL;
    }
};