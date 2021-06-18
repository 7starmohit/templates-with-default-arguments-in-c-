#include<iostream>
using namespace std;
template<class w1=int,class w2=float>
class pop{
    w1 k1;
    w2 k2;
public:
    pop(w1 g1,w2 g2){
        k1=g1;
        k2=g2;
    }
    void display(){
        cout<<"the value of k1 is"<<k1<<endl;
        cout<<"the value of k2 is "<<k2<<endl;
    }
};
int main(){
    pop<> fff(2,4.6);
    fff.display();
    pop<float,int>rrr(1.6,99);
    rrr.display();
    return 0;
}

