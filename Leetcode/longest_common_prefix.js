var longestCommonPrefix = function(strs) {
    if(!strs.length)
        return "";
    var re = "";
    for(var i = strs[0].length; i > 0 ; i--) {
        var tem = strs[0].substr(0,i);
        var t = 0;
        for(var j = 1; j < strs.length; j++) {
            if(strs[j].indexOf(tem) == 0) { //일치한 경우
                continue;
            }
            else { //일치하지 않은 경우
                t = 1;
                break;
            }
        } // 만약 모든 문자열에서 동일한 경우
        if(t == 0)
            break;
    }
    if(t == 0)
        re += tem;
    return re;
};