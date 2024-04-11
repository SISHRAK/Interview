#include <iostream>

class Car {
public:
    Car(int cost, int horse_power) {
        this->cost = cost;
        this->horse_power = horse_power;
    }

    Car() {
        this->cost = 1000;
        this->horse_power = 200;
    }

    virtual ~Car() {
        std::cout << "Pencil" << '\n';
    }

    virtual void start() {
        std::cout << this->cost << " " << this->horse_power << '\n';
    }

    virtual void SetCost(int cost_new) {
        this->cost = cost_new;
    }

protected:
    int cost;
    int horse_power;

};

class Electrocar : public Car {
public:
    void start() override {
        std::cout << "Pipi " << this->cost << '\n';
    }

    void SetCost(int cost) override {
        this->cost = cost;
    }

    ~Electrocar() override {
        std::cout << "Pen" << '\n';
    }

    Electrocar() {
        this->cost = 4444;
        this->horse_power = 32847;
    }

};

class Battery : public Electrocar {
public:
    int x, y;
    Battery(){
        this->x = 23213;
        this->y = 2347234;
    }
    ~Battery() override{
        std::cout << "Bye Bye Battery" << '\n';
    }

};

int main() {
    Car *car = new Car();
    car->start();
    auto *car_1 = new Electrocar();
    car_1->start();
    car_1->SetCost(234);
    car_1->start();
    delete car;
    delete car_1;
}
