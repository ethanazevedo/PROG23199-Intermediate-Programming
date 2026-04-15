#include <iostream>
#include <fstream>
using namespace std;

class Animal {
    public:
    void eat() { cout << "Eating \n"; }
    };

class Cow : public Animal { };


int main(){

Cow cow1;
cow1.eat();

return 0; 
}