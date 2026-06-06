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

//DETECTING A CYCLE IN LINKED LIST
bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            cout<<"Cycle exists"<<endl;
            return true;
        }
    }

    cout<<"Cycle doesn't exist"<<endl;
    return false;
}

//REMOVING A CYCLE IN LINKED LIST
void removeCycle(Node* head){
    //detect if there is any cycle
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            cout<<"Cycle exists"<<endl;
            isCycle = true;
            break;
        }
    }
    
    if(!isCycle){
        cout<<"Cycle does not exist"<<endl;
        return;
    }

    slow = head;
    if(slow == fast){
        while(fast->next != slow){  //head = tail
            fast = fast->next;
        }
        fast->next = NULL;
    }else{
        Node* prev = fast;
        while(slow != fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;
    }
}

int main(){
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);     //1->2->3->4->1
    ll.tail->next = ll.head;
    
    removeCycle(ll.head);
    ll.printList();
return 0;
}