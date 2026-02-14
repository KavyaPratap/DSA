
#include <iostream>
using namespace std;

/*
    Node structure
    Each node contains:
    - data  -> stores integer value
    - next  -> pointer to next node
*/
struct node {
    int data;
    node* next;

    // Constructor to initialize node
    node(int val) {
        data = val;
        next = nullptr;
    }
};

/*
    Linked List Class
    Manages operations on singly linked list
*/
class linkedlist {
private:
    node* head;   // pointer to first node

public:

    // Constructor: initialize empty list
    linkedlist() {
        head = nullptr;
    }

    /*
        Insert at Beginning
        Time Complexity: O(1)
    */
    void inserthead(int data) {
        node* newnode = new node(data);  // create new node
        newnode->next = head;            // point new node to current head
        head = newnode;                  // move head to new node
    }

    /*
        Insert at End
        Time Complexity: O(n)
    */
    void insertend(int data) {
        node* newnode = new node(data);

        // If list is empty
        if (head == nullptr) {
            head = newnode;
            return;
        }

        // Traverse to last node
        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newnode;  // attach new node at end
    }

    /*
        Insert at Specific Position
        Position starts from 0
        Time Complexity: O(n)
    */
    void insertatpos(int data, int pos) {
        node* newnode = new node(data);

        // Insert at head if position is 0 or list is empty
        if (pos == 0 || head == nullptr) {
            newnode->next = head;
            head = newnode;
            return;
        }

        node* temp = head;

        // Traverse to position - 1
        for (int i = 0; i < pos - 1 && temp->next != nullptr; i++) {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }

    /*
        Delete from Beginning
        Time Complexity: O(1)
    */
    void deletehead() {
        if (head == nullptr) {
            return;  // list empty
        }

        node* temp = head;
        head = head->next;  // move head forward
        delete temp;        // free memory
    }

    /*
        Delete from End
        Time Complexity: O(n)
    */
    void deleteend() {
        if (head == nullptr) {
            return;  // empty list
        }

        // If only one node
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        node* temp = head;

        // Traverse to second last node
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        delete temp->next;   // delete last node
        temp->next = nullptr;
    }

    /*
        Delete at Specific Position
        Position starts from 0
        Time Complexity: O(n)
    */
    void deleteatpos(int pos) {
        if (head == nullptr) {
            return;
        }

        // Delete head if position is 0
        if (pos == 0) {
            deletehead();
            return;
        }

        node* temp = head;

        // Traverse to position - 1
        for (int i = 0; i < pos - 1 && temp->next != nullptr; i++) {
            temp = temp->next;
        }

        // If position invalid
        if (temp->next == nullptr) {
            return;
        }

        node* nodetodelete = temp->next;
        temp->next = temp->next->next;
        delete nodetodelete;
    }

    /*
        Print Linked List
        Time Complexity: O(n)
    */
    void print() {
        node* temp = head;

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    /*
        Destructor
        Automatically deletes all nodes
        Prevents memory leak
    */
    ~linkedlist() {
        while (head != nullptr) {
            deletehead();
        }
    }
};


/*
    Main Function
    Demonstrates all operations
*/
int main() {

    linkedlist list;

    cout << "Inserting at head:\n";
    list.inserthead(5);
    list.inserthead(10);
    list.print();

    cout << "\nInserting at end:\n";
    list.insertend(25);
    list.insertend(30);
    list.print();

    cout << "\nInserting at position 2:\n";
    list.insertatpos(99, 2);
    list.print();

    cout << "\nDeleting from head:\n";
    list.deletehead();
    list.print();

    cout << "\nDeleting from end:\n";
    list.deleteend();
    list.print();

    cout << "\nDeleting at position 1:\n";
    list.deleteatpos(1);
    list.print();

    return 0;
}
