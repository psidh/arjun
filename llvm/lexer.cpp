#include <iostream>

void iterateForLoop(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Iteration: " << i << std::endl;
    }
}

int main()
{
    std::cout << "Hello" << std::endl;

    int numIterations = 5;
    iterateForLoop(numIterations);

    return 0;
}