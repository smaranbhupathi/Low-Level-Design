#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        Student(string n,int a) : name(n), age(a){}
        string getName() {return name;}
        int getAge() {return age;}
};

class Database{
    private:
        string name;
        string id;
    public:
        Database(string n, string i) : name(n), id(i){}
        void saveToDB(Student* s)
        {
            cout<<"Name : "<< s->getName()<<'\n';
            cout<<"Age : "<< s->getAge()<<'\n';
        }
};

int main(){
    Student* s = new Student("test", 25);
    Database* db = new Database("testDB", "123");
    db->saveToDB(s);
}