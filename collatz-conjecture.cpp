#include <iostream>
#include <chrono>

int main() {

    long long i = 1;
    long long b = 1;

    while (b<10000000){

        auto start = std::chrono::high_resolution_clock::now();

        if (i % 2 == 0){
            i = i / 2;
        } else {
            i = i * 3 + 1;
        }

        if (i == 4){

            auto stop = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

            std::cout << b << " has succumb." << " execution time: " << duration.count() << "ns" << std::endl;

            //std::cout << b << " has succumbed." << std::endl;
            b++;
            i = b;
        }

    }
    return 0;
}
