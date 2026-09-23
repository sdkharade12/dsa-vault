#include<bits/stdc++.h>

using namespace std;

// Creates a node containing a value and points to the null
class Node{
    public:
        int data;
        Node* next;

        Node(int info, Node* nextNode = nullptr){
            data = info;
            next = nextNode;
        }
};

// Singly Linked List Definiton
class SinglyLinkedList{
    // Creates a head pointer
    private:
        Node* head;

    public:
        SinglyLinkedList(){
            // Head points to the nullptr
            head = nullptr;
        }

        void insertAtEnd(int value){
            Node* temp = new Node(value);

            if(head != nullptr){
                Node* t1 = head;
                while(t1->next != nullptr){
                    t1 = t1->next;
                }
                t1->next = temp;
            } else{
                // If there are no nodes intially the head points to the 1st node
                head = temp;
            }
        }

        // Inserts a node at beginning by pointing the node to the head's address
        void insertAtBeg(int value){
            Node* temp = new Node(value);
            temp->next = head;
            head = temp;
        }

        // Inserts a node immediately after the first occurrence of 'x'
        void insertAtMid(int value, int x){
            Node* t1 = head;

            // Change: Loop until t1 is nullptr so we don't skip the last node
            while(t1 != nullptr){
                if(t1->data == x){
                    Node* temp = new Node(value); // Create temp only when needed
                    temp->next = t1->next;
                    t1->next = temp;
                    return; // Change: Exit once inserted to prevent infinite loops
                }
                t1 = t1->next;
            }
        }

        // Deletes the first occurrence of the specified node safely
        void deletelLL(int value){
            if(head == nullptr) return; // Edge case: Empty list

            // Edge case 1 -> If the node to be deleted is the first node
            if(head->data == value){
                Node* temp = head; // Store the node before moving head
                head = head->next;
                delete temp;       // FREE THE MEMORY
                return;
            }

            Node* t1 = head;
            Node* prev = nullptr;

            // Change: Traverse all nodes. This naturally handles the last node edge case.
            while(t1 != nullptr){
                if(t1->data == value){
                    prev->next = t1->next;
                    delete t1;     // FREE THE MEMORY
                    return;
                }
                prev = t1;
                t1 = t1->next;
            }
        }

        // Prints the linked list.
        void printLL() const{
            Node* t1 = head;
            while(t1 != nullptr){
                cout << t1->data << "->";
                t1 = t1->next;
            }
            cout << "nullptr\n";
            // cout << t1->data;
        }
};

int main(){
    SinglyLinkedList obj;
    obj.insertAtEnd(10);
    obj.insertAtEnd(20);
    obj.insertAtEnd(30);
    obj.insertAtBeg(5);
    obj.insertAtMid(15, 20);
    obj.deletelLL(30);
    
    obj.printLL();

    return 0;
}