class Solution {
public:
    bool isValid(string s) {
        std::stack<char> myStack;       
        for(int i = 0 ; i < s.length() ; i++){
            switch(s[i]){
                case '(' : case '[' : case '{':
                    myStack.push(s[i]);
                    break;
                case ')':
                    if( myStack.empty()){
                        return false;
                    }else{
                        if(myStack.top() == '('){
                            myStack.pop();
                            break;
                        }else{
                            return false;
                        }
                    }
                case ']':
                    if( myStack.empty()){
                        return false;
                    }else{
                        if(myStack.top() == '['){
                            myStack.pop();
                            break;
                        }else{
                            return false;
                        }
                    }
                case '}':
                    if( myStack.empty()){
                        return false;
                    }else{
                        if(myStack.top() == '{'){
                            myStack.pop();
                            break;
                        }else{
                            return false;
                        }
                    }
                default:
                    break;
            }
        }
        if (myStack.size() == 0){
            return true;
        }else{
            return false;
        }
    }
};

/*
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> a;
        for (auto c : s) {
            // this problem is easy intuitively, just a bit of tedious when checking a match.
			// Pushing the corresponding right side of the parentheses to the stack makes it a bit easier
			// so you only have to check whether the current character equals to the top of the stack.
            if (c == '(')
                a.push(')');
            else if (c == '[')
                a.push(']');
            else if (c == '{')
                a.push('}');
            
            else if (!a.empty() && c == a.top()) {
                a.pop();
            }
            else return false;
        }
        
        return a.empty();
    }
};
*/