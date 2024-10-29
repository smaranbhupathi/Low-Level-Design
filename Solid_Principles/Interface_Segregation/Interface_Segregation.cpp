#include <bits/stdc++.h>
using namespace std;

// class Animal{
//     public:
//         virtual void eat() = 0;
//         virtual void hunt() = 0; 
// };

// class Lion : public Animal {
//     public:
//         void eat() override{
//             cout<<"Loin is eating"<<'\n';
//         }

//         void hunt() override{
//             cout<<"Loin is hunting"<<'\n';
//         }
// };

// class Horse : public Animal{
//     public:
//         void eat() override{
//             cout<<"Horse is eating"<<'\n';
//         }

//         void hunt() override {
//         }// horse dont hunt
// };


class Animal{
    public:
        virtual void eat() = 0;
         
};

class Carnivores : public Animal{
    public:
        virtual void hunt() = 0;
};

class Lion : public Carnivores {
    public:
        void eat() override{
            cout<<"Loin is eating"<<'\n';
        }

        void hunt() override{
            cout<<"Loin is hunting"<<'\n';
        }
};

class Horse : public Animal{
    public:
        void eat() override{
            cout<<"Horse is eating"<<'\n';
        }
};

int main(){
    Lion l;
    Horse h;
    l.eat();
    l.hunt();
    h.eat();
    
    return 0;
}