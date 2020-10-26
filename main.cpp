#include "stack.cpp"
#include <iostream>

using std::cout;
using std::cin;

int main(){


     stack<int> p;
     
     for (int i = 0 ; i < 10; i++)
     {
        p.push(i+1);
      
        
     }

     for (int i = 0 ; i < 12; i++)
     {
        cout<<p.pop()<<" ";
     }

     cout<<"\n";


    return 0;

}