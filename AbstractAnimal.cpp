// AbstractAnimal.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
 class Animal {
 protected:
    std::string name;
public:
    Animal() { name = "unknown"; }
    Animal(std::string _name) : name(_name){}

    virtual void Voice() = 0;
};

 class Fox : public Animal {
 public:
     Fox() : Animal("MrFox") {}
     Fox (std::string _name) :Animal(_name){}

     void Voice() override
     {
         std::cout << "What does the fox say? - Tchoff-tchoff-tchoffo-tchoffo- tchoff!" << std::endl;
     }
 };
 class Dog : public Animal {
 public:
     Dog() : Animal("Dog") {}
     Dog(std::string _name) :Animal(_name) {}
     void Voice() override {
         std::cout << Animal::name << " goes Woof" << std::endl;
     }

 };
 class Cat : public Animal {
 public:
     Cat() : Animal("Cat") {}
     Cat(std::string _name) :Animal(_name) {}
     void Voice() override {
         std::cout << Animal::name << " goes Meow" <<std::endl;
     }
 };
 class Bird : public Animal {
 public:
     Bird() : Animal("Bird") {}
     Bird(std::string _name) :Animal(_name) {}
     void Voice() override {
         std::cout << Animal::name << " goes Twit" << std::endl;
     }
 };
 class Mous : public Animal {
 public:
     Mous() : Animal("Mous") {}
     Mous(std::string _name) :Animal(_name) {}
     void Voice() override {
         std::cout << "and " << Animal::name << " goes squeek" << std::endl;
     }
    
 };
int main()
{
    Animal* animals[5];
    animals[0] = new Dog;
    animals[1] = new Cat;
    animals[2] = new Bird;
    animals[3] = new Mous;
    animals[4] = new Fox;

    for (auto a : animals) {
        a->Voice();
    }


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
