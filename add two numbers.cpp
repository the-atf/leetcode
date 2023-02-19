#include <iostream>
#include <list>

int main() {
    //add two numbers
    std::list<int> list1 = {2, 4, 3};
    std::list<int> list2 = {5, 6, 4};

    int a = 0;
    int b = 0;

    for (auto rit = list1.rbegin(); rit != list1.rend(); ++rit){
        a = a * 10 + *rit;
    }
    for (auto rit = list2.rbegin(); rit != list2.rend(); ++rit){
        b = b * 10 + *rit;
    }

    int result = a+b;
    std::list<int> digit;

    while (result > 0){
        digit.push_back(result % 10);
        result = result / 10;
    }

    for (int item : digit){
        std::cout << item;
    }
}
