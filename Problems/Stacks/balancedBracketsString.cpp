#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str){
    stack<char> stk;
    for (int i = 0; i < str.length(); i++) {
        switch(str[i]){
            case ')':
                if (!stk.empty() && '(' == stk.top()) {
                    stk.pop();
                } else {
                    return false;
                }
                break;
            case ']':
                if (!stk.empty() && '[' == stk.top()) {
                    stk.pop();
                } else {
                    return false;
                }
                break;
            case '}':
                if (!stk.empty() && '{' == stk.top()) {
                    stk.pop();
                } else {
                    return false;
                }
                break;
            default:
                stk.push(str[i]);
        }
    }
    return stk.empty();
}

int main(int argc, const char *argv[])
{
    string str;
    str = "(){}]";
    (isBalanced(str)) ? cout << str << " is Balanced" << endl : cout << str << " Isn't Balanced"<< endl ;
    str = "a";
    (isBalanced(str)) ? cout << str << " is Balanced" << endl : cout << str << " Isn't Balanced"<< endl ;
    str = "()(";
    (isBalanced(str)) ? cout << str << " is Balanced" << endl : cout << str << " Isn't Balanced"<< endl ;
    str = "([)]";
    (isBalanced(str)) ? cout << str << " is Balanced" << endl : cout << str << " Isn't Balanced"<< endl ;
    str = "()[]{}";
    (isBalanced(str)) ? cout << str << " is Balanced" << endl : cout << str << " Isn't Balanced"<< endl ;
    str = "({}]";
    (isBalanced(str)) ? cout << str << " is Balanced" << endl : cout << str << " Isn't Balanced"<< endl ;
     str = "([]{{[]()}()})";
    (isBalanced(str)) ? cout << str << " is Balanced" << endl : cout << str << " Isn't Balanced"<< endl ;
    return 0;
}
