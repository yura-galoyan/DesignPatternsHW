#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "AbstractButton.hpp"

#include <vector>
#include <utility>
#include <memory>

class Window
{
public:
    using ButtonVec = std::vector<std::unique_ptr<AbstractButton>>; 

public:
    void addButton(std::unique_ptr<AbstractButton> button){
        buttons.push_back(std::move(button));
    }

    virtual std::unique_ptr<AbstractButton> createButton() const = 0;
    void run();
    
private:
    ButtonVec buttons;

};

#endif //WINDOW_HPP