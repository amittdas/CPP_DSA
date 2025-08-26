#include<bits/stdc++.h>
using namespace std;

void printList(list<int> ll){
    list<int>::iterator itr;

    for(itr=ll.begin(); itr!=ll.end(); itr++){
        cout<<(*itr)<<"->";
    }
    cout<<"NULL"<<endl;
}

int main(){
    list<int> ll;    //Made a linked list

    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);
    
    printList(ll);
    cout<<"Size of the Linked list is: "<<ll.size()<<endl;

    cout<<"Head = "<<ll.front()<<endl;
    cout<<"Tail = "<<ll.back()<<endl;

    ll.pop_front();
    printList(ll);

    ll.pop_back();
    printList(ll);
    
return 0;
}