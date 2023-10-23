#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"

template<class T>
Node<T>::Node(T data) {
    this->data = data;
    next = NULL;
}

template<class T>
T Node<T>::getData() const {
    return data;
}
/**
 * @brief Overloads the == operator to compare the data of the node to the given data.
 *
 * @tparam T Data Type
 * @param other Data to compare to
 * @return true
 * @return false
 */
template<class T>
bool Node<T>::operator==(T other) const {
    return this->data == other;
}

#endif /*NODE_CPP*/