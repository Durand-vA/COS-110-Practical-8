#ifndef SINGLY_SinglyList_H
#define SINGLY_SinglyList_H

#include <iostream>

#include "List.h"

template<class T>
class SinglyList;

template<class T>
std::ostream& operator<<(std::ostream& os, const SinglyList<T>*);

template<class T>
class SinglyList: public List<T>{
    public:
    SinglyList();
    SinglyList(T* arr, int  size);
    ~SinglyList();

    virtual Node<T>* insert(T data, int pos);
    virtual int remove(T data);
    virtual Node<T>* operator[](int index) const;
    virtual Node<T>* operator()(T* dataPtr) const;
    virtual int getIndexFromFront(T data) const;
    virtual int getIndexFromRear(T data) const;
    virtual List<T>* sort(bool order) const;
    virtual Node<T>* findSmallest() const;
    virtual Node<T>* findBiggest() const;
    virtual List<T>* clone() const;

        friend std::ostream& operator<<<>(std::ostream& os, const SinglyList*);

};


#include "SinglyLinked.cpp"

#endif /*SinglyList_H*/