#include "Singleton.hpp"

#include <thread>

void test(){
    Singleton::getInstance()->go();
}

int main(){
    std::thread t1(test);
    std::thread t2(test);

    t1.join();
    t2.join();

}