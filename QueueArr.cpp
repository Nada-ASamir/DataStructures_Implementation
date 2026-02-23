#include"QueueArr.h"
#include<iostream>
using namespace std;
template<class T>
QueueArr<T>::QueueArr(){
    front=rear=-1;
    size = 10;
    arr = new T[size];
}
template<class T>
void QueueArr<T>::enqueue(T x){
    if((rear+1)%size==front)
        cout << "queue full";
    else{
        if(front==-1)
        front=0;

        rear=(rear+1)%size;
        arr[rear] = x;
        elements++;
    }
}

template<class T>
void QueueArr<T>::dequeue(){
   if(front==rear)
       front = rear = -1;
    else
       front = (front + 1) % size;
    elements--;
}

template<class T>
bool QueueArr<T>::isempty(){
    if(front == back == -1)
    return true;
    else
        return false;
}
template<class T>
int QueueArr<T>::length(){
    return elements;s
}





















template<class T>
QueueArr<T>::~QueueArr(){
    delete[] arr;
}