#include <cstddef>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* newNode = new ListNode();

        int listSize = 0;
        ListNode* tmp = head;

        while(tmp->next != NULL)
        {
            listSize++;
            tmp = tmp->next;
        }
        if(listSize % 2) {
            int newSize = (listSize / 2) + 1;

            for(int i = 0; i < newSize; i++)
            {
                head = head->next;
            }
        }
        else
        {
            int newSize = listSize / 2;

            for(int i = 0; i < newSize; i++)
            {
                head = head->next;
            }
        }

        return head;

    }
};