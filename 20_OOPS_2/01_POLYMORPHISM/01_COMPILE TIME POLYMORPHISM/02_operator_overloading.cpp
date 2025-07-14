#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int real;
        int img;
    public:
        Complex(int r, int i){
            real = r;
            img = i;
        }
        void showNum(){
            cout<<"Number: "<<real<<" + "<<img<<"i"<<endl;
        }
        //operator overloading
        Complex operator + (Complex &c2){
            int resReal = this->real + c2.real;
            int resImg = this->img + c2.img;
            Complex c3(resReal,resImg);
            cout<<"result: ";
            return c3;
        }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);

    c1.showNum();
    c2.showNum();

    Complex c3 = c1+c2;
    c3.showNum();
return 0;
}