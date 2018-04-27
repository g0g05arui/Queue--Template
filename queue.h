#ifndef QUEUE_H
#define QUEUE_H
template<class T>
class Queue{
private:
    T *q;
    int _size,_capacity;
public:
    void pop();
    void push(T);
    T &front();
    T &back();
    Queue();
    Queue(int);
    int size();
    int capacity();
    void reserve(int);
    bool empty();
};
#include "queue.hpp"
#endif // QUEUE_H
