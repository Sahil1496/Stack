#include "stack.hpp"
#include "stack.cpp"
int main(){
    Stack<int> my_stack(4);
    my_stack.push_data(5);
    my_stack.push_data(4);
    my_stack.push_data(6);
    my_stack.traverse();
    return 0;
}