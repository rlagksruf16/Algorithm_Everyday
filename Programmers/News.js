function solution(str1, str2) {
    var answer = 0;
    
    //대문자 설정
    str1 = str1.toUpperCase();
    str2 = str2.toUpperCase();
    
    var a1 = [];
    var a2 = [];
    
    // 각각 string들을 2개씩 잘라서 영문자가 아니면 continue, 영문자면 넣어주기
    for (var i = 0; i < str1.length - 1; i++) {
        var tmp = str1.slice(i, i + 2);
        if (tmp.search(/[^A-Z]/g) >= 0) {
            continue;
        }
        a1.push(tmp);
    }
    for (var i = 0; i < str2.length - 1; i++) {
        var tmp = str2.slice(i, i + 2);
        if (tmp.search(/[^A-Z]/g) >= 0) {
            continue;
        }
        a2.push(tmp);
    }
    
    // 정렬
    a1.sort();
    a2.sort();
    
    var x = []; // 중복포함, 교집합
    var y = []; // 중복포함, 합집합
    
    //교집합
    for (var i = 0; i < a2.length; i++) {
        if (a1.indexOf(a2[i]) >= 0) {
            x.push(a1.splice(a1.indexOf(a2[i]), 1));
        }
        y.push(a2[i]);
    }
    // 합집합
    for (var i = 0; i < a1.length; i++) {
        y.push(a1[i]);
    }
    
    if (y.length === 0) 
        return 65536;
    if (x.length === 0) 
        return 0;
    return Math.floor((x.length / y.length) * 65536);
}