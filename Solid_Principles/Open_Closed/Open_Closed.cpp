#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
        virtual void talking() = 0;
        virtual void getFood() = 0;
};

class Dog : public Animal{
    public:
        void talking() override{
            cout<< "bow bow"<<'\n';
        }
        void getFood() override{
            cout<<"called get dog food function"<<'\n';
        }
};

int main(){
    Dog d;
    d.talking();
    d.getFood();
    return 0;
}


// Here we can exted the animal functionality for cat without modifying the existing code thsi is open close principle