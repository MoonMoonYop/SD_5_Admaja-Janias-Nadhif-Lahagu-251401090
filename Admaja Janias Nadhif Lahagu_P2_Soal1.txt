#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

void insertlast(int n) {
    node *newnode = new node;
    newnode->value = n;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void deletefirst() {
    if (head == NULL) {
        cout << "list kosong" << endl;
        return;
    }

    node *temp = head;
    head = head->next;
    if (head == NULL) tail = NULL;
    delete temp;
}

void display() {
    node *temp = head;
    cout << "isi linked list: ";
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    system("cls");

    insertlast(10); 
    display();
    insertlast(20); 
    display();
    insertlast(30); 
    display();

    deletefirst(); 
    display();
    deletefirst(); 
    display();

    return 0;
}