#include <iostream>
#include <memory>
#include <thread>

int main(int argc, char **argv)
{
    std::cout << "Hello, World死!" << std::endl;
    std::unique_ptr<int> myptr = std::make_unique<int>();
    *myptr = 35;
    std::cout << *myptr << std::endl;
    std::thread t([] {
        std::cout << "Hello, Threads!" << std::endl;
    });
    t.join();
    return 0;
}

