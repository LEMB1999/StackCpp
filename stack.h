template<typename T>
class stack {
   
    private:
        int i,size = 10,tope;
        T * arr;
    public:
        stack();
        void push(T valor);    
        T pop();
        T top();
        bool isEmpty();
};

