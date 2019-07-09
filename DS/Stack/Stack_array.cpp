#include<iostream>

using namespace::std;

#define MAX 1000

class stack {
    private:
        int top;

    public:
        int a[MAX];
        stack()
        {
            top = -1;
        }
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};

bool stack::push(int x){
    if(top >=MAX - 1){
        cout << "Stack overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << "push into stack\n";
        return true;
    }
}

int stack::pop(){
    if(top==-1){
        cout << "stack underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}

int main()
{

}
