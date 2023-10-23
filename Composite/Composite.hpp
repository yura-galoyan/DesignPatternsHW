#ifndef COMPOSITE_HPP
#define COMPOSITE_HPP


#include "Component.hpp"
#include <algorithm>
#include <list>

class Composite : public Component
{
public:
    virtual void draw() override;

    void add(std::shared_ptr<Component> comp){
        components.push_back(comp);
    }

    void remove(std::shared_ptr<Component> comp){
        components.erase(std::remove(components.begin(), components.end(), comp));
    }

protected:
    auto begin(){
        return components.begin();
    }
    auto end(){
        return components.end();
    }

private:
    std::list<std::shared_ptr<Component>> components;
};

#endif //COMPOSITE_HPP