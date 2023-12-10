// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    class Node* next;
};
void push(class Node** head,int newdata){
    Node* temp = new Node();
    temp->data = newdata;
    temp->next =(*head);
    (*head)= temp;
}

void insertAfter(class Node* prevNode,int newdata){
   Node* temp = new Node();
   temp->data = newdata;
   temp->next = prevNode->next;
   prevNode->next = temp;
}
void insertLast(class Node** head, int newdata){
    Node* temp = new Node();
    Node* last = *head;
    while(last->next != nullptr){
        last = last->next;
    }
    temp->data = newdata;
    temp->next = nullptr;
    last->next = temp;
}
void del_beg(class Node** head){
    class Node* temp = (*head);
    (*head) = temp->next;
    delete temp;
}
void delLast(class Node** head){
    class Node* temp = (*head);
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
}
void delPosition(class Node** head, int position){
    class Node* previous = (*head);
    class Node* current = (*head);
    if(*head == NULL){
        cout<<"Linked List is empty";
    }
    else if(position == 1){
            class Node* temp = (*head);
            (*head) = temp->next;
            delete temp;
        }
    else{
        while(position != 1){
            previous = current;
            current = current->next;
            position--;
        }
        previous->next = current->next;
        delete current;
    }
}

void print(class Node* node){
    while(node != NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}

void reverseList(class Node** head){
    Node* prevptr = nullptr;
    Node* currptr = *head;
    Node* nextptr;
    
    while(currptr!= nullptr){
        nextptr = currptr->next;
        currptr->next = prevptr;
        
        prevptr= currptr;
        currptr = nextptr;
    }
    *head = prevptr;
}


int main() {
  class Node* head_val = NULL;

  push(&head_val, 34);
 push(&head_val, 10);
  insertLast(&head_val, 48);
  insertAfter(head_val, 72);
 del_beg(&head_val);
  delLast(&head_val);
 delPosition(&head_val, 2);
  cout << "*---Implementation of Linked List in C++---*" << endl;

  cout << "\nThe Input Linked list is: ";
  print(head_val);
  cout<<endl;
  cout<<"After reverse"<<" ";
  reverseList(&head_val);
  print(head_val);

    return 0;
}
