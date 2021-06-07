/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {void} Do not return anything, modify root in-place instead.
 */
 var recoverTree = function(root) {
    // first and second are the two nodes that are swapped by mistake
    var prev, first, second;
    
    function inorder(root) { // 전위방식으로 검색하면 bst는 오름차순이 되어야 한다
        if (!root) return;
        
        inorder(root.left);
        
        if (prev && prev.val > root.val) {
            // Found a mistake
            if (!first) first = prev; // 첫번째꺼 넣어두기
            second = root; // 계속 두번째꺼 넣어두기 
        }
        prev = root;
        
        inorder(root.right);
    }
    
    inorder(root);
    
    // 발견한 둑개 노드 변경하기 
    var temp = first.val;
    first.val = second.val;
    second.val = temp;
};


/*
 inorder 로 검색을 하면 bst에서는 모두 문제가 없으면 오름차순이 되어야 한다
 계속 반복하면서 first에 첫번째 값을 두고 first랑 비교했을때 차이 나는 수를 second로 하면서 지속적으로 있을 가능성을 대비해서 계속 찾아준다
 끝까지 다 돈 다음 문제가 되는 첫번째와 두번째 값을 swap 해준다
 -> 두개의 노드가 문제를 일으킨다고 했기 때문에 가능 

*/