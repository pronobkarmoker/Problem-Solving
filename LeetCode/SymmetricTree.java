
// Definition for a binary tree node.
public class SymmetricTree {
    int val;
    SymmetricTree left;
    SymmetricTree right;

    SymmetricTree() {
    }

    SymmetricTree(int val) {
        this.val = val;
    }

    SymmetricTree(int val, SymmetricTree left, SymmetricTree right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public boolean isSymmetric(SymmetricTree root) {
        return root == null || test(root.left, root.right);
    }

    private boolean test(SymmetricTree left, SymmetricTree right) {
        if (left == null || right == null) {
            return left == right;
        }
        if (left.val != right.val) {
            return false;
        }
        return test(left.left, right.right) && test(left.right, right.left);
    }
}