#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

//insert first
void insertfirst(int n){
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL){
        head = newnode;
        tail = newnode;
    } else{
        newnode -> next = head;
        head = newnode;
    }
}

//isert last
void insertlast(int n){
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL){
        head = newnode;
        tail = head;
    } else{
        tail -> next = newnode;
        tail = newnode;
    }
}

//insert after
void insertafter(int n, int check){
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if(head == NULL){
        cout<<"list kosong!"<<node;
        return;
    }

    node *p = n;
    while(p != NULL && p->value != check){
        p = p -> next;
    }

    if (p == NULL){
        cout<<"Node dengan nilai"<< check <<"tidak ditemukan"<<endl;
        delete newnode;
    } else{
        node -> next = p -> next;
        p -> next = newnode;
        if (p == tail){
            tail = newnode
        }
    }
}

//delete first
void deletefirst(){
    if (head == NULL){
        cout<<"list kosong"<<endl;
        return;
    }

    node *temp=head;
    head = head -> next;
    if(head == NULL) tail = NULL;
    delete temp;
}

//delete last
void deletelast(){
    if (head == NULL){
        cout<<"list kosong"<<endl;
        return;
    }

    if(head == tail){
        delete head;
        head = tail = NULL;
        return;
    }
    
    node *p = head;
    while (p-> next != tail){
        p = p -> next;
    }

    delete tail;
    tail = p;
    tail -> next = NULL;
}

//delete middle
void deleteafter(int value){
    if (head == NULL){
        cout<<"list kosong"<<endl;
        return;
    }

    if (head -> value == check){
        deletefirst();
        return;
    }

    node *p = head;
    while(p -> NULL && p -> next -. value != check){
        p = p -> next;
    }

    if(p -> next == NULL){
        cout<<"node dengan nilai "<<check<<' tidak ada';
    } else {
        node *temp = p -> next;
        p -> next = temp -> next;
        if(temp == tail) tail = p;
        delete temp;
    }
}


void display(){
    node temp = head;
    cout<<"isi linked list";
    while (temp != NULL){
        cout<<temp -> value<<"->";
        temp = temp -> next;
    }
}
int main(){
    system ("cls");

    insertfirst(10);
    display();
    insertfirst(5);
    display();
    insertlast(20);
    display();
    insertafter(30,10);
    display();

    deletefirst();
    display();
    deletelast();
    display();
    deleteafter(30);
    display();

    return 0;
}