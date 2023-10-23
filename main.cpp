#include "List.h"
#include "Node.h"
#include "SinglyLinked.h"

#include <iostream>
#include <string>


const int size = 5;

int main(int argc, char const *argv[]) {
    int* arr = new int[size];
    for (int  i = 0; i < size; i++) {
        arr[i] = std::rand() % 20 +1;
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    SinglyList<int>* list = new SinglyList<int>(arr, size);

    std::cout << list << std::endl;

    std::cout << "Inserting 5 at position 1" << std::endl;
    list->insert(5, 1);
    std::cout << list << std::endl;
    std::cout << "Inserting 10 at position 0" << std::endl;
    list->insert(10, 0);
    std::cout << list << std::endl;
    std::cout << "Inserting 20 at position 1" << std::endl;
    list->insert(1, 20);
    std::cout << list << std::endl;
    std::cout << "Inserting 20 at position 3" << std::endl;
    list->insert(20, 3);
    std::cout << list << std::endl;

    std::cout << "Removing 20" << std::endl;
    list->remove(20);
    std::cout << list << std::endl;
    std::cout << "Removing 3" << std::endl;
    list->remove(3);
    std::cout << list << std::endl;
    std::cout << "Removing 1" << std::endl;
    list->remove(1);
    std::cout << list << std::endl;
    std::cout << "Removing 10" << std::endl;
    list->remove(10);
    std::cout << list << std::endl;

    std::cout << "Element at index -1" << std::endl;
    std::cout << (*list)[-1] << std::endl;
    std::cout << "Element at index -2" << std::endl;
    std::cout << (*list)[-2] << std::endl;
    std::cout << "Element at index -10" << std::endl;
    std::cout << (*list)[-10] << std::endl;
    std::cout << "Element at index -6" << std::endl;
    std::cout << (*list)[-6] << std::endl;
    std::cout << "Element at index 0" << std::endl;
    std::cout << (*list)[0] << std::endl;
    std::cout << "Element at index 5" << std::endl;
    std::cout << (*list)[5] << std::endl;
    std::cout << "Element at index 6" << std::endl;
    std::cout << (*list)[6] << std::endl;


}