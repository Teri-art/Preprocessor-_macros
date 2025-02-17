#include <iostream>
#define MODE 1

#if MODE == 1
int add(int n1, int n2) {
    return n1 + n2;
}
#endif

int main()
{
    int n1, n2;

#if  MODE == 0
    std::cout << "Working in training mode." << std::endl;

#elif  MODE == 1
    std::cout << "Working in combat mode" << std::endl;
    std::cout << "Enter number1:   ";
    std::cin >> n1;
    std::cout << "Enter number 2:   ";
    std::cin >> n2;
    std::cout << "Addition result : " << add(n1, n2) << std::endl;

#else
    std::cout << "Unknown mode. Shutdown" << std::endl;
#endif


    return 0;
}