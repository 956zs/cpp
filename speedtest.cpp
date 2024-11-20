#include <iostream>
#include <chrono>

int main()
{
    using namespace std::chrono;

    auto start = high_resolution_clock::now();

    for (int i = 1; i <= 100000; ++i)
    {
        std::cout << i << std::endl;
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    std::cout << "Time elapsed: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
