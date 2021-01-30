/**
 * initialize your data structure here.
 */
var MinStack = function() {
    this.st = [];
};

/** 
 * @param {number} x
 * @return {void}
 */
MinStack.prototype.push = function(x) {
    this.st.push(x);
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function() {
    return this.st.pop();
};

/**
 * @return {number}
 */
MinStack.prototype.top = function() {
    return this.st[this.st.length-1];
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function() {
    return this.st.reduce((a, b)=> a > b ? b : a);
};

/** 
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(x)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */