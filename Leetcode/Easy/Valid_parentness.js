var isValid = function(s) {
    var stack = [];
    for(var i = 0; i < s.length; i++) {
        if(s[i] == "(" || s[i] == "[" || s[i] == "{")
            stack.push(s[i]);
        else {
            if(Array.isArray(stack) && stack.length === 0)
                return false;
            if(stack[stack.length-1] == "(" && s[i] != ")")
                return false;
            else if(stack[stack.length-1] == "[" && s[i] != "]")
                return false;
            else if(stack[stack.length-1] == "{" && s[i] != "}")
                return false;
            else
                stack.pop();
        }
    }
    if(Array.isArray(stack) && stack.length === 0)
        return true;
    else
        return false;
};