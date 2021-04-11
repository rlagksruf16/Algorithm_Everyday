var judgeCircle = function(moves) {
    let x = 0; // x 좌표
    let y = 0; // y 좌표
    let leng = moves.length; // 길이
    
    for(let i = 0; i < leng; i++) { // 상하좌우
        if(moves[i] === "U")
            y += 1;
        else if(moves[i] === "D")
            y -= 1;
        else if(moves[i] === "R")
            x += 1;
        else if(moves[i] === "L")
            x -= 1;
    }
    if(x === 0 && y === 0) // 원점일 경우
        return true;
    else // 원점 아닐 경우
        return false;
};