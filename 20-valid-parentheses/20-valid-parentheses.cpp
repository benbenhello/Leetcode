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