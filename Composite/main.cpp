#include "Button.hpp"
#include "Window.hpp"



int main(){
    auto firstWindow = std::make_shared<Window>("Window1");
    auto bigWindow = std::make_shared<Window>("Window2");
    auto btn1 = std::make_shared<Button>("Button1");
    auto btn2 = std::make_shared<Button>("Button2");

    firstWindow->add(btn1);
    firstWindow->add(btn2);

    bigWindow->add(firstWindow);
    
    bigWindow->draw();

}