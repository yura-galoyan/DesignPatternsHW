#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <memory>
#include <iostream>

class Singleton
{
public:
    static Singleton* getInstance();
    void go();

    Singleton(const Singleton& other) = delete;
    Singleton& operator=(const Singleton& other) = delete;

private:
    Singleton(); 
    inline static std::unique_ptr<Singleton> instance{nullptr};
};



#endif //SINGLETON_HPP