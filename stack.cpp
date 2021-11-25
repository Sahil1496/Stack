#include "stack.hpp"

template <class T>
Stack<T>::Stack(int len){
    // my_stack.resize(4);
}

template <class T>
void Stack<T>::push_data(T element){
    my_stack.push_back(element);
}

template <class T>
T Stack<T>::pop_data(){
    T elem = my_stack.back();
    my_stack.pop_back();
    return elem;
}

template <class T>
void Stack<T>::traverse(){
    for(auto&it:my_stack){
        std::cout << it << " ";
    }
    std::cout << std::endl;
}

template <class T>
int Stack<T>::size(){
    return my_stack.size();
}
