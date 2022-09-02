#include <iostream>

#ifndef NODO 

#define NODO 1

using namespace std;

template <class T>
class Node {
    private:
        T *data;
        Node *prev;
        Node *next;

    public:
        Node() {
            data = NULL;
            prev = NULL;
            next = NULL;
        }

        Node(T *pData) {
            this->data = pData;
            prev = NULL;
            next = NULL;
        }

        T* getData() {
            return data;
        }

        Node* getNext() {
            return next;
        }

        Node* getPrev() {
            return prev;
        }

        void setNext(Node *pValue) {
            this->next = pValue;
        }

        void setPrev(Node *pValue){
            this->prev = pValue;
        }
};

#endif