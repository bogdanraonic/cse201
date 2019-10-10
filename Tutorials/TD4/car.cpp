#include <iostream>
#include <string>

class Engine{
    public:
        std::string name;

        Engine()
        {
            this -> name = "generic";
        }

        Engine(std::string name)
        {
            this -> name = name;
        }

        void print()
        {
            std::cout << this -> name << std::endl;
        }
};

class Wheel{
public:
    std::string name;

    Wheel()
    {
        this -> name = "generic";
    }

    Wheel(std::string name)
    {
        this -> name = name;
    }
    void print()
    {
        std::cout << this -> name << std::endl;
    }
};

class Steeringwheel{
public:
    std::string name;

    Steeringwheel()
    {
        this -> name = "generic";
    }

    Steeringwheel(std::string name)
    {
        this -> name = name;
    }
    void print()
    {
        std::cout << this -> name << std::endl;
    }
};

class Seat{
public:
    std::string name;

    Seat()
    {
        this -> name = "generic";
    }

    Seat(std::string name)
    {
        this -> name = name;

    }
    void print()
    {
        std::cout << this -> name << std::endl;
    }
};

class Car{
public:
    std::string brand;
    std::string model;
    Engine engine;
    Wheel wheels[4];
    Steeringwheel sw;
    Seat seats[4];

    Car()
    {
        this -> brand = "generic";
        this -> model = "generic";
        this -> engine = Engine();
        this -> wheels = [Wheel(),Wheel(),Wheel(),Wheel()];
        this -> sw = Steeringwheel();
        this -> seats = [Seat(),Seat(),Seat(),Seat()];
    }

    Car(std::string brand, std::string model, std::string engine, std::string wheel, std::string sw, std::string seat)
    {
        this -> brand = brand;
        this -> model = model;
        this -> engine = Engine(engine);
        this -> wheels = [Wheel(wheel),Wheel(wheel),Wheel(wheel),Wheel(wheel)];
        this -> sw = Steeringwheel(sw);
        this -> seats = [Seat(seat),Seat(seat),Seat(seat),Seat(seat)];
    }

    void print()
    {
        std::cout << this -> brand << std::endl;
        std::cout << this -> model << std::endl;
        engine.print();
        wheels[0].print();
        sw.print();
        seats[0].print();

    }
};


int main() {

    Car c;
    c.print();

    Car c2("Peugeot","205 Gti", "four cylinders in line", "Konig","Recaro", "Momo");
    c2.print();

}
