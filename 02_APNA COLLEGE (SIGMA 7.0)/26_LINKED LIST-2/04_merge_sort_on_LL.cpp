#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next  = NULL;
        }
        ~Node(){
            if(next != NULL){
                delete next;
                next = NULL;
            }
        }
};
class List {
    public:
        Node* head;
        Node* tail;
    
        List() {
            head = NULL;
            tail = NULL;
        }
        ~List(){
            if(head != NULL){
                delete head;
                head = NULL;
            }
        }
        //PUSH FRONT
        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head ;
                head = newNode;
            }
        }
        //POP FRONT
        void pop_front(){
            if(head == NULL){
                cout<<"Linked List is empty\n";
                return;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        // PRINT LL
        void printList(){
            Node* temp = head;
            while (temp != NULL){
                cout<< temp->data <<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};

int main(){
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
return 0;
}