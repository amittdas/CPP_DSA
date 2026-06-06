#include<bits/stdc++.h>
using namespace std;

//creating stack using vector with class Template
template<class T>
class Stack {
        vector<T> vec;
    public:
        void push(T val){                  // O(1)
            vec.push_back(val);
        }
        void pop(){                          // O(1)
            if(isEmpty()){
                cout << "Stack is empty.\n";
                return;
            }
            vec.pop_back();
        }
        T top(){                           // O(1)
            // if(isEmpty()){
            //     cout << "Stack is empty.\n";
            //     return -1;
            // }
            int lastIdx = vec.size() - 1;
            return vec[lastIdx];
        }
        bool isEmpty(){
            return vec.size() == 0;
        }
};

int main(){
    Stack<int> s1;
    s1.push(3);
    s1.push(2);
    s1.push(1);

    while(!s1.isEmpty()){
        cout << s1.top() << endl;
        s1.pop();
    }

    cout<<"-----------------------------------------"<<endl;

    Stack<char> s2;
    s2.push('a');
    s2.push('b');
    s2.push('c');

    while(!s2.isEmpty()){
        cout << s2.top() << endl;
        s2.pop();
    }

    cout<<"-----------------------------------------"<<endl;

    Stack<string> s3;
    s3.push("amit");
    s3.push("Raj");
    s3.push("aneet");

    while(!s3.isEmpty()){
        cout << s3.top() << endl;
        s3.pop();
    }
return 0;
}