#include "Window.hpp"

void Window::run(){
    for(auto& button : buttons){
        button->press();
    }
}