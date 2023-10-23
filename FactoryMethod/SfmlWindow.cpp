#include "SfmlWindow.hpp"
#include "SfmlButton.hpp"

std::unique_ptr<AbstractButton> SfmlWindow::createButton() const
{
    return std::make_unique<SfmlButton>();

}