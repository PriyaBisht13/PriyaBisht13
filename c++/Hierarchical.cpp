#include <iostream>
using namespace std;

class Animal {
   public:
    void info() {
        cout << "I am an animal." << endl;
    }
};
class Dog : public Animal {
   public:
    void bark() {
        cout << "I am a Dog. Woof woof." << endl;
    }
};
class Cat : public Animal {
   public:
    void meow() {
        cout << "I am a Cat. Meow." << endl;
    }
};