#include <iostream>
#include <stack>
using namespace std;

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '^')
        return 3;
    return 0;
}

int main()
{
    string exp;
    cout << "Enter infix expression: ";
    cin >> exp;

    stack<char> s;
    string postfix = "";

    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        if (isalnum(ch))
        {
            postfix += ch; // অপারেন্ড পেলে পোস্টফিক্সে যোগ করুন
        }
        else if (ch == '(')
        {
            s.push(ch); // '(' স্ট্যাকে রাখুন
        }
        else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top(); // ')' পেলে '(' পর্যন্ত অপারেটরগুলো যোগ করুন
                s.pop();
            }
            s.pop(); // '(' সরান
        }
        else
        { // অপারেটর
            while (!s.empty() && precedence(s.top()) >= precedence(ch))
            {
                postfix += s.top(); // প্রাসঙ্গিকতার ভিত্তিতে অপারেটর যোগ করুন
                s.pop();
            }
            s.push(ch); // বর্তমান অপারেটর স্ট্যাকে রাখুন
        }
    }

    // স্ট্যাক থেকে বাকি অপারেটরগুলো পোস্টফিক্সে যোগ করুন
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    cout << "Postfix expression: " << postfix << endl; // ফলাফল প্রদর্শন করুন
    return 0;
}
