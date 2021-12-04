#include "stack.hpp"

template <class T>
Stack<T>::Stack(int len){
    /*!
        Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), 
        where elements are inserted and extracted only from one end of the container
    */
    // my_stack.resize(4);
}

template <class T>
void Stack<T>::push_data(T element){
    /*!
        This API add data to the top of the stack

    */
    my_stack.push_back(element);
}

template <class T>
T Stack<T>::pop_data(){
    /*!
        This API removes the data to the top of the stack

    */
    T elem = my_stack.back();
    my_stack.pop_back();
    return elem;
}

template <class T>
void Stack<T>::traverse(){
    /*!
        This API traverse the stack to its depth without removing the elements. It prints the
        elements while traversing.

    */
    for(auto&it:my_stack){
        std::cout << it << " ";
    }
    std::cout << std::endl;
}

template <class T>
int Stack<T>::size(){
    /*!
        This API returns the size of the stack

    */
    return my_stack.size();
}
