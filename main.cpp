#include<iostream>

#include"z3a/stack.h"

using namespace std;

int main(){
    
    Stack <int> mojStack;
    //int value;
    // for(int i=0;i<6;i++){
    //     cin>>value;
    //     mojStack.push(value);
    // }
    // mojStack.pop();
    char control;
    int number;
    bool check_while = false;
    while(!check_while){
        cin >> control;
        switch (control)
        {
        case('U') /* constant-expression */:
            cin>>number;
            mojStack.push(number);
            break;
        case('O'):
            cout<<mojStack.topStack();
            break;
        case('T'):
            mojStack.pop();
            break;
        default:
            check_while=true;
            break;
        }
    }
    return 0;
}