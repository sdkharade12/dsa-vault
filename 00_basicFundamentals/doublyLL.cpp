#include<bits/stdc++.h>

using namespace std;

// Creates a node containing the data, next node address and a previous node address.
class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int info, Node* nextNode = nullptr, Node* prevNode = nullptr){
            data = info;
            next = nextNode;
            prev = prevNode;
        }
};

// Create =s a double pointed linked list
class DoublyLL{
    private:
        Node* head;

    public:
        DoublyLL(){
            head = nullptr;
        }

        // Inserts the node at the end
        void insertAtEnd(int value){
            Node* temp = new Node(value);
            
            // assigns the new node as head if the linked list is empty.
            if(head == nullptr){
                head = temp;
                return;
            }

            Node* t1 = head;
            while(t1->next != nullptr){
                t1 = t1->next;
            }
            t1->next = temp;
            temp->prev = t1; // ensures both pointers are connected
        }

        // Inserts the node at the very start of the linked list and the head pointer is assigned to that node.
        void insertAtBeg(int value){
            Node* temp = new Node(value);
            if(head == nullptr){
                head = temp;
                return;
            }
            temp->next = head;
            head->prev = temp;
            head = temp;
        }

        // searches the node to insert a new node after that.
        void insertInBetween(int value, int x){
            Node* t1 = head;

            // Check all nodes, including the last one
            while(t1 != nullptr){
                if(t1->data == x){
                    Node* temp = new Node(value);
                    
                    temp->next = t1->next;
                    temp->prev = t1;
                    
                    // Only update the next node's 'prev' if there actually IS a next node
                    if(t1->next != nullptr){
                        t1->next->prev = temp; 
                    }
                    
                    t1->next = temp;
                    return;
                }
                t1 = t1->next;
            }
        }

        // Deletes the desired node.
        void deleteDLL(int value){
            if(head == nullptr){
                cout << "Linked List is empty!";
                return;
            }

            Node* t1 = head;
            if(t1->data == value){
                head = t1->next;
                head->prev = nullptr;
                return;
            }

            while(t1->next != nullptr){
                if(t1->data == value){
                    t1->prev->next = t1->next;
                    t1->next->prev = t1->prev;
                    return;
                }
                t1 = t1->next;
            }
            if(t1->data == value){
                t1->prev->next = nullptr;
            }
        }

        void printDLL() const{
            Node* t1 = head;
            while(t1 != nullptr){
                cout << t1->data << " <--> ";
                t1 = t1->next;
            }
            cout << "nullptr\n";
        }
};

int main(){
    DoublyLL obj;

    obj.insertAtEnd(10);
    obj.insertAtEnd(20);
    obj.insertAtEnd(30);
    obj.insertAtBeg(40);
    obj.insertInBetween(50, 20);
    obj.deleteDLL(20);

    obj.printDLL();
}