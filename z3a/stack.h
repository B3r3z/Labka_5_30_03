#ifndef STACK_H
#define STACK_H

#define SIZE 5


template<class T>
class Stack{
private:    
    T _first[SIZE];
    int counter = 0;
public:
    //Stack<T>();
    void push(T value);
    bool isEmpty();
    bool isFool();
    T pop();
    void topStack();
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
void Stack<T>::topStack(){
    std::cout<<_first[0] << std::endl;
    // return _frist[0]; 
}

template<class T>
T Stack<T>::pop(){
    //// wyjatek czy stos pusty?
    T pop;
    for(int i=0; i<counter-1;i++){
        pop = _first[i];
        _first[i] = _first[i+1];
    }
    //topStack();
    _first[counter]= 0;
    counter--;
    return pop;
}

template<class T>
void Stack<T>::clear(){
    counter=0;
}



#endif
