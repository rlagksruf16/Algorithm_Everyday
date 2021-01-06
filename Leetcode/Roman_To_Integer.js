var romanToInt = function(s) {
    var temp = s.split('')
    var result = 0;
    for(var i = 0; i < temp.length; i++) {
        if(temp[i] == 'I')
            temp[i] = 1
        else if(temp[i] == 'V')
            temp[i] = 5
        else if(temp[i] == 'X')
            temp[i] = 10
        else if(temp[i] == 'L')
            temp[i] = 50
        else if(temp[i] == 'C')
            temp[i] = 100
        else if(temp[i] == 'D')
            temp[i] = 500
        else if(temp[i] == 'M')
            temp[i] = 1000
    }
    
    for(var i = 0; i < temp.length-1; i++) {
        if(temp[i] >= temp[i+1])
            result += temp[i];
        else
            result -= temp[i];
    }
    result += temp[temp.length-1];
    
    return result;
};