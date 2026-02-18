#include<cassert>
#include"Stack2.h"
    Stack2::Stack2(){
        int max_size = 100;
        int size = 0;
        int *arr = new int[max_size];
    }
    int Stack2::length(){
        return size;
    }
    void Stack2::push(int value){
        arr[size] = value;
        size++;
    }
    void Stack2::pop(){
        assert(size != 0);
        size--;
    }
    int Stack2::top(){
        assert(size!=0);
        return arr[size - 1];
    }
    bool Stack2::empty(){
        return size;
    }
    Stack2::~Stack2(){
        delete[] arr;
    }

