#include "stack.h"

template <typename T> 
stack<T>::stack(){
    arr = new T [size];
    i = 0;
}

template <typename T> 
void stack<T>::push(T valor){

    if(i<size){
        tope = i;
        arr[i++] = valor;
    }else{
        arr = new T [sizeof(arr)/sizeof(arr[0])*2];    
        size *=2;
        tope = i;
        arr[i++] = valor;
    }

}


template <typename T> 
T stack<T>::pop(){
    
    if(!isEmpty()){
       i=tope;
       return arr[tope--];      
    }

    return 0;
}


template<typename T>
T stack<T>::top(){
    if(!isEmpty()){
       return arr[tope];
    }
    
    return 0;
}

template<typename T>
bool stack<T>::isEmpty(){
     return i==0 ? true:false;
}