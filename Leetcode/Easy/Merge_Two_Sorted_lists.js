var mergeTwoLists = function(l1, l2) {
    var temp = new ListNode;
    var l3 = temp;
    while(l1 !== null && l2 !== null) {
        if(l1.val <= l2.val) {
            l3.next = l1;
            l1 = l1.next;
        }
        else {
            l3.next = l2;
            l2 = l2.next;
        }
        l3 = l3.next;
    }
    if(l1 !== null) {
        l3.next = l1;
    }
    if(l2 !== null) {
        l3.next = l2;
    }
    return temp.next;
};