#ifndef STACK_H
#define STACK_H

#define SIZE 5


template<class T>
class Stack{
private:    
    T _first[SIZE];
    int counter = 0;
public:
    Stack();
    void push(T value);
    bool isEmpty();
    T pop();
    void clear();
};




template<class T>
void Stack<T>::push(T value){
    /// wyjątek czy stos jest pełen
    _first[counter] = value;
    counter++;
}
template<class T>
bool Stack<T>::isEmpty(){
    if(counter == 0) return true;
    else return false;
}

template<class T>
T Stack<T>::pop(){
    //// wyjatek czy stos pusty?
    T pop;
    for(int i=0; i<counter-1;i++){
        pop = _first[i];
        _first[i] = _first[i+1];
    }
    _first[counter]= 0;
    counter--;
    return pop;
}

template<class T>
void Stack<T>::clear(){
    counter=0;
}



#endif
