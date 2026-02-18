class Stack2{

    
        int size;
        int *arr;
    public:
        Stack2();
        int length();
        void push(int value);
        void pop();
        int top();
        bool empty();
        ~Stack2();
};