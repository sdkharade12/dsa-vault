#include<bits/stdc++.h>

using namespace std;

// Node structure for the Circular Linked List
class Node{
    public:
        int data;
        Node* next;

        Node(int info, Node* nextNode = nullptr){
            data = info;
            next = nextNode;
        }
};

class CircularLinkedList{
    private:
        Node* head;
        Node* tail;

    public:
        CircularLinkedList(){
            head = nullptr;
            tail = nullptr;
        }

        // Inserts a node at the end (O(N) traversal approach)
        void insertAtEnd(int value){
            Node* temp = new Node(value);

            if(head != nullptr){
                Node* t1 = head;
                while(t1->next != head){
                    t1 = t1->next;
                }
                t1->next = temp;
                temp->next = head;
                tail = temp; // Update tail tracker
            } else {
                temp->next = temp;
                head = temp;
                tail = temp;
            }
        }

        // Inserts a node at the beginning in O(1) time
        void insertAtBeg(int value){
            Node* temp = new Node(value);

            if(head == nullptr){
                head = temp;
                tail = temp;
                temp->next = head;
            } else {
                temp->next = head;
                head = temp;
                tail->next = head; // Secure the circular link
            }
        }

        // Inserts a node immediately after the first occurrence of 'x'
        void insertAfter(int value, int x){
            if(head == nullptr){
                cout << "List is empty\n";
                return;
            }

            Node* t1 = head;
            bool found = false;

            // Traverse to find the target node
            do {
                if(t1->data == x){
                    found = true;
                    break;
                }
                t1 = t1->next;
            } while(t1 != head);

            if(!found){
                cout << "Node with value " << x << " not found in the list\n";
                return;
            }

            Node* temp = new Node(value);
            temp->next = t1->next;
            t1->next = temp;

            // If inserted after the last node, update the tail
            if(t1 == tail){
                tail = temp;
            }
        }

        // Deletes the first occurrence of a specified node safely
        void deleteCLL(int value){
            if(head == nullptr) return;

            // Edge Case 1: List has only one node, and it's the target
            if(head->data == value && head->next == head){
                delete head;
                head = nullptr;
                tail = nullptr;
                return;
            }

            // Edge Case 2: Deleting the first node (when list size > 1)
            if(head->data == value){
                Node* temp = head;
                head = head->next; // Shift head forward
                tail->next = head; // Reconnect tail to new head
                delete temp;
                return;
            }

            Node* t1 = head;
            Node* prev = nullptr;
            bool found = false;

            // Search for the node while tracking the previous node
            do {
                if(t1->data == value){
                    found = true;
                    break;
                }
                prev = t1;
                t1 = t1->next;
            } while(t1 != head);

            if(!found){
                cout << "Node with value " << value << " not found\n";
                return;
            }

            // Standard Deletion: Bypass the target node
            prev->next = t1->next;

            // Edge Case 3: Deleting the last node updates the tail
            if(t1 == tail){
                tail = prev;
            }
            
            delete t1; // Free memory
        }

        // Traverses and prints the circular linked list
        void printCLL() const{
            if(head == nullptr) return;

            Node* t1 = head;
            do {
                cout << t1->data << " -> ";
                t1 = t1->next;
            } while(t1 != head);

            cout << "(back to head)\n";
        }
};

int main(){
    CircularLinkedList obj;

    obj.insertAtEnd(5);
    obj.insertAtEnd(10);
    obj.insertAtEnd(15);
    obj.insertAtEnd(20);
    obj.insertAtEnd(25);
    obj.insertAtBeg(30);
    obj.insertAtBeg(50);
    obj.insertAtBeg(60);
    obj.insertAfter(70, 15);
    obj.deleteCLL(60);
    obj.deleteCLL(50);

    obj.printCLL();
    
    return 0;
}