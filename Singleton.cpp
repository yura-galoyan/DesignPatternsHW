#include "Singleton.hpp"


Singleton:: Singleton() {
    std::cout << "Singleton is created" << std::endl; 
}

Singleton* Singleton::getInstance(){
    if(instance == nullptr){
        instance = std::unique_ptr<Singleton>{ new Singleton};
    }
    return instance.get();
}

void Singleton::go() {
    std::cout << "Go singleton!!!" << std::endl; 
}

