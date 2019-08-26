/**
    Stack implementation from CLRS
    Uses last in, first out (LIFO) policy 
    Using vector rather than array
    
    Functions:
        stackEmpty(): returns boolean value 
        push(): adds an element to the top of the stack and returns stack
        pop(): removes the element at the top of the stack and returns stack
**/

#include <iostream>
#include <vector>
using namespace std;

bool stackEmpty(vector<int> stack, int top){
    if(top == 0){
        return true;
    }
    else{
        return false;
    }
}

vector<int> push(vector<int> stack, int& top, int x){
    //adding element to the top of the stack
    top = top + 1;
    stack.push_back(x);

    return stack;
}

vector<int> pop(vector<int> stack, int& top){
    //removing element from the top of the stack
    if(stackEmpty(stack, top)){
        cout << "Error: stack underflow";
        return stack;
    }
    
    else{
        stack.pop_back();
        top = top - 1; 
        return stack;
    }
}

int main() {
    vector<int> stack = {1, 2, 3, 4, 5};
    int top = stack.size();
    
    cout << "Stack: ";
    for(int i=0; i<top; i++){
        cout << stack[i] << " ";
    }
    cout << endl;
    
    //adding element
    stack = push(stack, top, 6);
    cout << "Pushed stack: ";
    for(int i=0; i<top; i++){
        cout << stack[i] << " ";
    }
    cout << endl;
    
    //removing element
    stack = pop(stack, top);
    
    cout << "Popped stack: ";
    for(int i=0; i<top; i++){
        cout << stack[i] << " ";
    }
    
}
