//subtraction of two numbers using polymorphism;
#include<iostream>
using namespace std;
class demo{
    private:
    int x;
    public:
    int getdata(){
        cout<<"enter the numbers";
        cin>>x;

    }
    void display(){
        cout<<x;
    
    }
    demo operator-(demo bb){
        demo cc;
        cc.x=x-bb.x;
        return cc;
    }

};
int main(){
    demo xx,bb,cc;
    xx.getdata();
    bb.getdata();
    cc= xx-bb;
    cc.display();


}
