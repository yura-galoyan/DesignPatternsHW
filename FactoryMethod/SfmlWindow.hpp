#ifndef SFML_WINDOW_HPP
#define SFML_WINDOW_HPP

#include "Window.hpp"

class SfmlWindow : public Window
{
public:
    std::unique_ptr<AbstractButton> createButton() const override;

};



#endif //SFML_WINDOW_HPP