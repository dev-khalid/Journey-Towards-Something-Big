#include<bits/stdc++.h>
using namespace std; 
int precedence(char ch) { 
    int r; 
    switch(ch) { 
        case '+': 
        case '-': 
           r =  1; 
           break;

        case '*': 
        case '/': 
            r =  2; 
            break; 

    }
    return r; 
}
int calculate(char op, int i1, int i2) { 
    int res = 0; 
    switch(op) {
        case '+': 
            res =  i1+i2; 
            break; 
        case '-': 
            res = i1-i2; 
            break; 
        case '*': 
            res =  i1*i2; 
            break;
        case '/': 
            res =  i1/i2; 
            break; 
    }
    return res; 
}
int main() {
    string s; 
    cin >> s;  
    stack<int> operands; 
    stack<char> operators; 
    int i2,i1; 
    for(int i = 0; i < s.size();i++) {  
        if(s[i]-'0' >= 0 && s[i]-'0' <= 9) { 
            //digit 
            operands.push(s[i]-'0');
        } else { 
            //operator 
            switch(s[i]) { 
                case '+':
                case '-':
                case '*':
                case '/': 
                    while(!operators.empty() && operators.top() != '(' && precedence(s[i])<=precedence(operators.top()) ) { 
                        //runs till it has element and also has operators >= same precedence
                        char op = operators.top(); 
                        operators.pop(); 

                        i2 = operands.top(); 
                        operands.pop();

                        i1 = operands.top(); 
                        operands.pop();
  
                        operands.push(calculate(op,i1,i2));
                        
                    }
                    //finally push the operator also ? 
                    operators.push(s[i]);

                    break;
                case '(': 
                    //nothing just push it to operators stack 
                    operators.push(s[i]); 
                    break; 
                case ')':
                    while(!operators.empty() &&  operators.top() != '(') {
                        char op = operators.top(); 
                        operators.pop(); 

                        i2 = operands.top(); 
                        operands.pop();

                        i1 = operands.top(); 
                        operands.pop();
  
                        operands.push(calculate(op,i1,i2));
                    }
                    operators.pop();//removing the "(" 
                    break;
            }
        }
    } 

    //final evaluation . 
    while(!operators.empty()){ 
        //runs till it has element and also has operators >= same precedence
        char op = operators.top(); 
        operators.pop(); 


        i2 = operands.top(); 
        operands.pop();
        i1 = operands.top(); 
        operands.pop();
        
        operands.push(calculate(op,i1,i2));
        
    }
    cout << operands.top() << endl; 
}