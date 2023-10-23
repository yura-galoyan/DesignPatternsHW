#include "QtWindow.hpp"
#include "QtButton.hpp"

std::unique_ptr<AbstractButton> QtWindow::createButton() const {
    return std::make_unique<QtButton>();
}