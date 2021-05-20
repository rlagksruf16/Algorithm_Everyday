var isEvenOddTree = function(root) {
    let queue = [];
    queue.push(root);
    let odd = true;
    
    while(queue.length) {
        const leng = queue.length;
        for(let i = 0; i < leng; i++) {
            let temp = queue.shift(); // 가장 앞의 부분 빼기
            if((odd && (!(temp.val%2) || (i !== leng-1 && temp.val >= queue[0].val))) || (!odd && (temp.val%2 || (i !== leng-1 && temp.val <= queue[0].val))))
                return false;
            if(temp.left)
                queue.push(temp.left);
            if(temp.right)
                queue.push(temp.right);
        }
        odd = !odd;
    }
    return true;
};
