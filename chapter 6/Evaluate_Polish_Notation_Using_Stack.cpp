#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
    string exp;
    cout << "Enter a postfix expression: ";
    cin >> exp;

    stack<int> st;

    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        if (ch >= '0' && ch <= '9')
        {
            st.push(ch - '0');
        }

        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch (ch)
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                if (op2 == 0)
                {
                    cout << "Error: Division by zero." << endl;
                    return 1;
                }
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            default:
                cout << "Error: Invalid operator." << endl;
                return 1;
            }
        }
    }

   if (st.size() == 1) {
        cout << "Result of postfix evaluation: " << st.top() << endl; 
    } else {
        cout << "Error: Invalid postfix expression." << endl;
    }

}

// 2 1 + 2 1 7 4 - 2 * + 5 -    Result of postfix evaluation: 2
