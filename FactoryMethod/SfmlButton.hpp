#ifndef SFML_BUTTON_HPP
#define SFML_BUTTON_HPP


#include "AbstractButton.hpp"


class SfmlButton : public AbstractButton
{
public:
    void press() override ; 
};

#endif //SFML_BUTTON_HPP