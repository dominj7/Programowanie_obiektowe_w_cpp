#include<iostream>

using namespace std;


class Animal {
public:
    virtual void call() = 0;
};

class Cat : public Animal {
public:
    void call() override {
        cout<<"Meow"<<endl;
    }
};

class Cow : public Animal {
public:
    void call() override {
        cout<<"Muu"<<endl;
    }
};

class Dog : public Animal {
public:
    void call() override {
        cout<<"Auu!"<<endl;
    }
};


void call_animals(Animal *animals[], size_t n);
template<typename T> void call_template(T array[], size_t n);


int main() {
    Animal *animals[3];
    animals[0] = new Cat();
    animals[1] = new Cow();
    animals[2] = new Dog();
    call_animals(animals, 3);

    cout<<endl;

    Cat cats[3] = {Cat(), Cat(), Cat()};
    Dog dogs[2] = {Dog(), Dog()};
    Cow cows[1] = {Cow()};
    call_template(cats, 3);
    call_template(dogs, 2);
    call_template(cows, 1);

    return 0;
}


void call_animals(Animal *animals[], size_t n) {
    for(size_t i = 0; i < n; ++i)
        animals[i]->call();
}

template<typename T>
void call_template(T array[], size_t n) {
    for(size_t i = 0; i < n; ++i)
        array[i].call();
}
