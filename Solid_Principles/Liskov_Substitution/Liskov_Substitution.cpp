#include <bits/stdc++.h>
using namespace std;

class Bird{
    public:
        virtual void fly(){
            cout<<"Flying"<<'\n';
        }
};

class Sparrow : public Bird{
    public:
        void fly() override{
            cout<<"Sparrow flying"<<'\n';
        }
};

class Ostrich : public Bird{
    public:
        void fly() override{
            cout<<"Ostrich can't fly"<<'\n';
        }
};

void makeFly(Bird* b)
{
    b->fly();
}

int main(){
    Sparrow* s = new Sparrow();
    Ostrich* o = new Ostrich();
    makeFly(s); // Sparrow flying
    makeFly(o); // Ostrich can't fly here we are modyfying the method of the base class rather than extending
}