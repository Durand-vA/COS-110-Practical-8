#include "List.h"
#include "Node.h"
#include "SinglyLinked.h"

#include <iostream>
#include <string>

const int size = 5;

int main(int argc, char const *argv[]) {
    int vals[size] = {4,7,18,16,14};
    int* arr = new int[size];
    for (int  i = 0; i < size; i++) {
        arr[i] = vals[i];
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
    std::cout << "Index: " << list->remove(20) << std::endl;
    std::cout << list << std::endl;
    std::cout << "Removing 3" << std::endl;
    std::cout << "Index: " << list->remove(3) << std::endl;
    std::cout << list << std::endl;
    std::cout << "Removing 1" << std::endl;
    std::cout << "Index: " << list->remove(1) << std::endl;
    std::cout << list << std::endl;
    std::cout << "Removing 10" << std::endl;
    std::cout << "Index: " << list->remove(10) << std::endl;
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

    std::cout << "Index of 4 should be 0.\n Actual: " << list->getIndexFromFront(4) << std::endl;
    std::cout << "Index of 18 should be 3.\n Actual: " << list->getIndexFromFront(18) << std::endl;
    std::cout << "Index of 14 should be 5.\n Actual: " << list->getIndexFromFront(14) << std::endl;
    std::cout << "Index of 7 should be 2.\n Actual: " << list->getIndexFromFront(7) << std::endl;
    std::cout << "Index of 10 should be -1.\n Actual: " << list->getIndexFromFront(10) << std::endl;

    std::cout << "Index from back of 4 should be 5.\n Actual: " << list->getIndexFromRear(4) << std::endl;
    std::cout << "Index from back of 18 should be 2.\n Actual: " << list->getIndexFromRear(18) << std::endl;
    std::cout << "Index from back of 14 should be 0.\n Actual: " << list->getIndexFromRear(14) << std::endl;
    std::cout << "Index from back of 7 should be 3.\n Actual: " << list->getIndexFromRear(7) << std::endl;
    std::cout << "Index from back of 10 should be -1.\n Actual: " << list->getIndexFromRear(10) << std::endl;

    List<int>* ascSort = list->sort(true);
//    std::cout << ascSort << std::endl;
    List<int>* descSort = list->sort(false);
//    std::cout << descSort << std::endl;

    std::cout << list->findBiggest() << std::endl;
    std::cout << list->findSmallest() << std::endl;

    List<int>* clone = list->clone();

    delete list;
    delete [] arr;
}