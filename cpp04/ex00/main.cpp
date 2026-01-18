#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal;
const Animal* j = new Dog;
const Animal* i = new Cat;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
meta->makeSound();
Dog dog;
Dog new_dog(dog);
Dog copy_dog;
copy_dog = dog;
Cat cat;
Cat new_cat(cat);
Cat copy_cat;
copy_cat = cat;
WrongAnimal *wrongcat = new WrongCat;
wrongcat->makeSound();
delete(meta);
delete(i);
delete(j);
delete(wrongcat);
return 0;
}