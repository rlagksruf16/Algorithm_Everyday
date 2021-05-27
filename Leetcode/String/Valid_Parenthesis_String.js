var checkValidString = function(s) {
    let stack = [];
    let s_stack = [];
    
    for(let i = 0; i < s.length; i++) {
        if(s[i] === '(')
            stack.push(i);
        else if(s[i] === '*')
            s_stack.push(i);
        else {
            if(stack.length !== 0)
                stack.pop();
            else if(s_stack.length !== 0)
                s_stack.pop();
            else
                return false;
        }
    }
    while(stack.length !== 0) {
        if((s_stack.length === 0) || s_stack.pop() < stack.pop())
            return false;
    }
    return true;
};