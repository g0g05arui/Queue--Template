#ifndef QUEUE_HPP
#define QUEUE_HPP
template<class T>
int Queue<T>::size(){
    return _size;
}
template<class T>
int Queue<T>::capacity(){
    return _capacity;
}
template<class T>
void Queue<T>::pop(){
    if(_size>=1)
        q++,_size--;
}
template<class T>
void Queue<T>::push(T aux){
    if(_size<_capacity)
        q[_size++]=aux;
    else
        reserve(_size),push(aux);
}
template<class T>
void Queue<T>::reserve(int size){
    T *aux;
    aux=new int[_capacity+size+1];
    _capacity+=size;
    for(int i=0;i<_size;i++)
        aux[i]=q[i];
    delete[]q;
    q=aux;
}
template<class T>
T & Queue<T>::front(){
    return q[0];
}
template<class T>
T & Queue<T>::back(){
    return q[_size-1];
}
template<class T>
Queue<T>::Queue(){
    _size=0;
    _capacity=2;
    q=new T[3];
}
template<class T>
Queue<T>::Queue(int x){
    _size=0;
    _capacity=x;
    q=new T[x+1];
}
template<class T>
bool Queue<T>::empty(){
    return _size==0;
}
#endif // QUEUE_HPP

