#ifndef SINGLY_SinglyList_CPP
#define SINGLY_SinglyList_CPP

#include "SinglyLinked.h"

template <class T>
std::ostream &operator<<(std::ostream &os, const SinglyList<T> *sl)
{
    if (sl->head == NULL)
    {
        os << "NULL";
        return os;
    }
    Node<T> *curr = sl->head;
    while (curr != NULL)
    {
        os << curr;
        curr = curr->next;
    }
    return os;
}

template<class T>
SinglyList<T>::SinglyList() {

}

template<class T>
SinglyList<T>::~SinglyList() {
    Node<T>* ptr = this->head;
    while (ptr) {
        Node<T>* prev = ptr;
        ptr = ptr->next;
        delete prev;
    }
}
/**
 * @brief Construct a new SinglyList<T> Singly List object
 *
 * @tparam T
 * @param arr
 * @param size
 */
template<class T>
SinglyList<T>::SinglyList(T* arr, int size) {
    if (arr == NULL || size < 0)
        return;

    this->head = NULL;
    if (size != 0) {
        this->head = new Node<T>(arr[0]);
    }
    Node<T>* ptr = this->head;
    for (int i = 1; i < size; i++) {
        ptr->next = new Node<T>(arr[i]);
        ptr = ptr->next;
    }
}
/**
 * @brief Inserts a new node at the given position. If the position is negative or 0,
 * prepend the value. If the position is greater than the amount of nodes, append at the end
 *
 * @tparam T
 * @param data
 * @param pos
 * @return Node<T>*
 */
template<class T>
Node<T>* SinglyList<T>::insert(T data, int pos) {
    int count = 0;
    Node<T>* ptr = this->head;
    Node<T>* prev = NULL;
    while (count < pos && ptr) {
        prev = ptr;
        ptr = ptr->next;
        count++;
    }
    Node<T>* newNode = new Node<T>(data);
    newNode->next = ptr;
    if (!prev)
        this->head = newNode;
    else {
        prev->next = newNode;
    }
    return newNode;
}
/**
 * @brief Removes the first node with the given data
 *
 * @tparam T
 * @param data
 * @return int Position of removed node. -1 if node not in list
 */
template<class T>
int SinglyList<T>::remove(T data) {
    Node<T>* ptr = this->head;
    Node<T>* prev = NULL;

    bool found = false;
    while (!found && ptr) {
        if (*ptr == data) {
            found = true;
        } else {
            prev = ptr;
            ptr = ptr->next;
        }
    }
    if (found) {
        if (prev) {
            prev->next = ptr->next;
        } else {
            this->head = ptr->next;
        }
        delete ptr;
    } else {
        return -1;
    }
}

template<class T>
Node<T>* SinglyList<T>::operator[](int index) const {
    if (index >= 0) {
        Node<T>* ptr = this->head;
        int count = 0;
        while (count < index && ptr) {
            ptr = ptr->next;
            count++;
        }
        if (ptr) {
            return ptr;
        } else {
            return NULL;
        }
    } else {
        int count = 0;
        Node<T>* ptr = this->head;
        while (ptr) {
            ptr = ptr->next;
            count++;
        }
        if (count + index < 0) {
            return NULL;
        } else {
            return (*this)[count+index];
        }
    }
}

template<class T>
Node<T>* SinglyList<T>::operator()(T* dataPtr) const {
    Node<T>* ptr = this->head;
    bool found = false;
    while (!found && ptr) {
        if (*ptr == *dataPtr) {
            found = true;
        }else {
            ptr = ptr->next;
        }
    }

    if (found) {
        return ptr;
    } else {
        return NULL;
    }
}

template<class T>
int SinglyList<T>::getIndexFromFront(T data) const {
    Node<T>* ptr = this->head;
    int count = 0;
    while (ptr) {
        if (*ptr == data)
            return count;
        ptr = ptr->next;
        count++;
    }

    return -1;
}

template<class T>
int SinglyList<T>::getIndexFromRear(T data) const {
    int count = 0;
    Node<T>* ptr = this->head;
    while (ptr) {
        ptr = ptr->next;
        count++;
    }
    int idxFront = getIndexFromFront(data);
    if (idxFront == -1) {
        return -1;
    }
    return (count-1) - idxFront;

}

template<class T>
List<T>* SinglyList<T>::sort(bool order) const {
    return nullptr;
}

template<class T>
Node<T>* SinglyList<T>::findSmallest() const {
    return nullptr;
}

template<class T>
Node<T>* SinglyList<T>::findBiggest() const {
    return nullptr;
}

template<class T>
List<T>* SinglyList<T>::clone() const {
    return nullptr;
}

#endif /*SinglyList_CPP*/
