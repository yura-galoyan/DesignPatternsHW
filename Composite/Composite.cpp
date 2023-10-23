#include "Composite.hpp"

void Composite::draw()  {
    auto it = begin();
    std::cout<<"composite name is: " << name <<std::endl;
    for(; it != end(); ++it){
        (*it)->draw();
    }
}