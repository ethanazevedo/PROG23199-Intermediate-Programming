#include <iostream>
#include <string>

using namespace std;

class Brain {
};


class Animal {

    public:
    virtual void eat() {}
};


class Address {
};

class Person: public Animal {  // : public Animal -- Inheritence

    public:
    string name;

    Person(string name) {
        this->name = name;
    }




    Address *address;    //aggregation -- pointers

    void printText(string text){    //Association -- used temporarily
        cout << text << "\n";
    }

    void printAddress(Address &place){

    }

    void eat() override {}

    void eat(string food) {}

    protected:
    Brain brain;    // Composition 
};


class Worker: public Person {


};

int main() {

    Address home1;

    Person person1("Bob");
    person1.address = &home1;

    Person person2("Jill");
    person2.address = &home1;

    person2.printText("Hello!");
    person2.printAddress(home1);

    person1.eat();

    Animal *somePerson;
    somePerson = &person1;
    somePerson->eat();
}