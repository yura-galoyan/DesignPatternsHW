#include "Window.hpp"
#include "SfmlWindow.hpp"
#include "QtWindow.hpp"

int main(){
    std::unique_ptr<Window> window = std::make_unique<QtWindow>();
    window->addButton( window->createButton( ));
    window->addButton( window->createButton( ));
    window->addButton( window->createButton( ));
    window->run();
}