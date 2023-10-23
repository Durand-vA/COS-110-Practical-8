#ifndef LIST_CPP
#define LIST_CPP

#include "List.h"

template<class T>
List<T>::List() {
    head = NULL;
}

template<class T>
List<T>::~List() {

}

template<class T>
int List<T>::size() const {
    Node<T>* ptr = head;
    int count = 0;
    while (ptr) {
        count++;
        ptr = ptr->next;
    }
    return count;
}

template<class T>
bool List<T>::contains(T data) const {
    Node<T>* ptr = head;
    while (ptr) {
        if (*ptr == data)
            return true;
        ptr = ptr->next;
    }
    return false;
}

#endif /*LIST_CPP*/