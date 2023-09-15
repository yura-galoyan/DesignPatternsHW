#ifndef QT_WINDOW_HPP
#define QT_WINDOW_HPP


#include "Window.hpp"

class QtWindow : public Window
{
public:
    std::unique_ptr<AbstractButton> createButton() const override;

};

#endif //QT_WINDOW_HPP