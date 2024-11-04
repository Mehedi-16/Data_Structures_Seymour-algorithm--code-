#include <iostream>
#include <stack>

int factorial(int n) {
    std::stack<int> s;
    int result = 1;

    // Push all numbers from 1 to n onto the stack
    for (int i = 1; i <= n; ++i) {
        s.push(i);
    }

    // Pop elements from the stack and multiply them
    while (!s.empty()) {
        result *= s.top();
        s.pop();
    }

    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;
    
    return 0;
}
