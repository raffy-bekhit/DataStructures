#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define TYPE int

using namespace std;

typedef class Stack{

private:
TYPE top;
TYPE values[SIZE];

public:
Stack()
{
    top=0;
}

void push(TYPE value)
{
    values[top++]=value;

}

TYPE pop()
{
    return values[--top];

}
bool isEmpty()
{
    return top==0;
}

bool isFull(){
 return top>SIZE;
}
}Stack;

int main()
{
    Stack stack1=Stack() ;



    return 0;
}
