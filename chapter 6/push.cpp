#include <iostream>
#include <stack>
using namespace std;

void printStack() {
    stack<int> myStack;

    myStack.push(10);  
    myStack.push(20);  
    myStack.push(30);
    myStack.push(40); 

    while (!myStack.empty()) {
        cout << myStack.top() << endl;
        myStack.pop();
    }
}

int main() {
    
    printStack();

    return 0;
}
