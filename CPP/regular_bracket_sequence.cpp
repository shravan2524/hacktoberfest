#include <bits/stdc++.h>

using namespace std;

bool isRegularBracketSequence(string bs){
    stack<char> st;
    for(char x: bs){
        if(!st.empty()){
            if(st.top() == '(' && x == ')') {
                st.pop();
                continue;
            }
        }
        st.push(x);
    }

    return (st.size() == 0);
}

int main(){
    string bracketSequence1 = "(())())()())";
    string bracketSequence2 = "(())()()()";
    cout << isRegularBracketSequence(bracketSequence1) << '\n';
    cout << isRegularBracketSequence(bracketSequence2) << '\n';
}