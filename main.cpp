#include<iostream>
#include<stdio.h>
using namespace std;
class Person{
    private:
        int nAge;
    public:
        Person(){

        }
        Person(int x):nAge(x) {
            cout << "construction!" << endl;
        }
        virtual int getAge(){

            cout << "Person" << endl;
            return nAge;
        }
        ~Person(){
            cout << "deconstruction!" << endl;
        }
};
int main(){
    Person p(12);
    Person q(21);
    Person r(31);
    cout << &p << ' ' << &q << endl;
    cout << *((int*)&p) << ' ' << *((int*)&q) << ' ' << *((int*)&r) << endl;
    cout << sizeof(int*) << endl << sizeof(char*) << endl;
    cout << endl;
    return 0;
}