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
        Node* head;
        Node* tail;
    public:
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
        // PUSH BACK
        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode ;
                tail = newNode;
            }
        }
        //INSERTING AN ELEMENT IN MIDDLE OF A LINKED LIST
        void insert(int val, int pos){
            Node* newNode = new Node(val);
            Node* temp = head;
            for(int i=0; i<pos-1; i++){
                if(temp == NULL){
                    cout<<"Position is INVALID\n";
                    return;
                }
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
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

        //POP BACK
        void pop_back(){
            Node* temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }

        //ITERATIVE SEARCH
        int iterative_search(int key){
            Node* temp = head;
            int idx = 0;
            while (temp != NULL){
                if(temp->data == key){
                    return idx;
                }
                temp = temp->next;
                idx++;
            }
            return -1;
        }

        //RECURSIVE SEARCH
        int helper(Node* temp, int key){
            if(temp == NULL){
                return -1;
            }
            if(temp->data == key){
                return 0;
            }
            int idx = helper(temp->next, key);
            if(idx == -1){
                return -1;
            }
            return idx+1;
        }

        int recursive_search(int key){
            return helper(head, key);
        }

        //REVERSE A LINKED LIST
        void reverse_ll(){
            Node* curr = head;
            Node* prev = NULL;
            while(curr != NULL){
                Node* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
        }

        //FIND THE SIZE OF THE LINKED LIST
        int sizeofLL(){
            int sz = 0;
            Node* temp = head;
            while(temp != NULL){
                temp = temp->next;
                sz++;
            }
            return sz;
        }

        //FIND & REMOVE nTH NODE FROM THE END
        void find_removeFromEnd(int n){
            int size = sizeofLL();
            Node* prev = head;
            for(int i=1; i<(size-n); i++){
                prev = prev->next;
            }
            Node* toDelete = prev->next;
            cout<<"Deleting the node:"<<toDelete->data<<endl;
            prev->next = prev->next->next;
        }

        // PRINT LL
        void printList(){
            Node* temp = head;
            while (temp != NULL)
            {
                cout<< temp->data <<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    
    cout<<endl;
    
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.printList();
    
    cout<<endl;
    
    ll.insert(100, 2);
    ll.insert(400, 3);
    ll.insert(300, 4);
    ll.printList();

    cout<<endl;
    
    ll.pop_front();
    ll.printList();

    cout<<endl;

    ll.pop_back();
    ll.printList();

    cout<<endl;
    cout<<ll.iterative_search(100);
    cout<<endl;
    cout<<ll.recursive_search(100);

    cout<<endl;
    // ll.reverse_ll();
    // ll.printList();

    ll.find_removeFromEnd(2);
    ll.printList();
    
return 0;
}