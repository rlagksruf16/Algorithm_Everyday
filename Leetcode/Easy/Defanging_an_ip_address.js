var defangIPaddr = function(address) {
    var results = "";
    results = address.replace(/\./g, "[.]"); // .을 모두 [.]으로 변경
    
    return results;
};