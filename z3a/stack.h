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
    void pop(); // zdejmij element
    T topStack(); // wyswietl element
    void clear(); // wyczysc stos
    int getSize(){return counter+1;}; // zawraca aktualny rozmiar 

};

template<class T>
void Stack<T>::push(T value){
    /// wyjątek czy stos jest pełen
    try{
        if(isFool()) throw std::logic_error("test1");
    }
    catch(std::logic_error & e ){
        std::cout<<"Stack is full, ERROR \n";
    }

    _first[counter] = value;
    counter++;
}
template<class T>
bool Stack<T>::isFool(){
    if(counter>=SIZE) return true;
    else return false;
}

template<class T>
bool Stack<T>::isEmpty(){
    if(counter == 0) return true;
    else return false;
}

template<class T>
T Stack<T>::topStack(){
     try{
        if(isEmpty()) throw std::logic_error("test3");
    }
    catch(std::logic_error & a){
        std::cout<<"Stack is empty :c Error \n";
    }
    T pop;
    for(int i=0; i<counter-1;i++){
        pop = _first[i];
        _first[i] = _first[i+1];
    }
     return _first[0]; 
}

template<class T>
void Stack<T>::pop(){

    //// wyjatek czy stos pusty?
    try{
        if(isEmpty()) throw std::logic_error("test2");
    }
    catch(std::logic_error & a){
        std::cout<<"Stack is empty :c Error \n";
    }
    T pop;
    for(int i=0; i<counter-1;i++){
        pop = _first[i];
        _first[i] = _first[i+1];
    }
    //topStack();
    _first[counter]= 0;
    counter--;
}

template<class T>
void Stack<T>::clear(){
    counter=0;
}



#endif
