#include<iostream>

#include"z3a/stack.h"

using namespace std;

int main(){
    int value;
    Stack <int> mojStack;
    
    for(int i=0;i<6;i++){
        cin>>value;
        mojStack.push(value);
    }
    mojStack.pop();
    return 0;
}