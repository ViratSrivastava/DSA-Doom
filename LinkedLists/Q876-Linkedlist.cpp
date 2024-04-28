class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        int size = 0;
        ListNode* current = head;
        ListNode* prev = nullptr;
        while (current != nullptr) {
            size++;
            current = current->next;
        }
        int middleIndex = size / 2;
        current = head;
        for (int i = 0; i < middleIndex; i++) {
            prev = current;
            current = current->next;
        }
        if (prev != nullptr) {
            prev->next = current->next;
            delete current;
        } 
        else {
            head = head->next; 
            delete current;
        }
        return head;
    }
};  
