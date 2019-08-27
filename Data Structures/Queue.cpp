/**
    Queue implementation from CLRS
    Uses first in, first out (FIFO) policy 
    Using vector
    
    Functions:
       - enqueue(): adds an element to the end of the queue and returns queue
       - dequeue(): removes the element at the front of the queue and returns queue
**/
#include <iostream>
#include <vector>
using namespace std;

vector<int> enqueue(vector<int> queue, int& head, int& tail, int x){
    if(tail == queue.size()){
        cout << "Error: Queue overflow" << endl;
        return queue;
    }
    
    else{    
        cout << tail << endl;
        tail = tail + 1;
        
        queue[tail] = x;
        
        return queue;
    }

}

vector<int> dequeue(vector<int> queue, int& head, int& tail){
    if(head == tail){
        cout << "Error: Queue underflow" << endl;
        return queue;
    }
    
    else{
        queue.erase(queue.begin());
        
        head = head + 1;
        
        return queue;
    }
}

int main(){
    vector<int> queue;
    queue.resize(3); //defining a queue of 3 integers
    
    int head = 0, tail = 0;
    
    cout << "Queue: ";
    for(int i=0; i<queue.size(); i++){
        
        cout << queue[i] << " ";
        
    }
    cout << endl;
    
    queue = enqueue(queue, head, tail, 6);
    
    cout << "Add element: ";
    for(int i=0; i<queue.size(); i++){
        
        cout << queue[i] << " ";
        
    }
    cout << endl;
    
    queue = dequeue(queue, head, tail);
    
    cout << "Delete element: ";
    for(int i=0; i<queue.size(); i++){
        
        cout << queue[i] << " ";
        
    }
}


