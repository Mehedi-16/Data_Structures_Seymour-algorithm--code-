#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element before pop: " << myStack.top() << endl; 

    myStack.pop();

    cout << "Top element after pop: " << myStack.top() << endl; 

    return 0;
}
