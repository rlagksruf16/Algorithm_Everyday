var restoreString = function(s, indices) {
    var t = [];
    var temp = "";
    for(var i = 0; i < s.length; i++) {
        t[indices[i]] = s[i];
        temp += t[i];
    }
    for(var j = 0; j < t.length; j++) {
        temp += t[j];
    }
    return temp;
};