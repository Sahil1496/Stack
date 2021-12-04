#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

template <typename T>
class Stack{
    
    public:
        Stack(int len=4);
        void push_data(T data);
        T pop_data();
        void traverse();
        int size();

    private:
        int depth;
        std::vector<T> my_stack;

};

#endif //STACK_H
