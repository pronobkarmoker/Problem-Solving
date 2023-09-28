
//  Definition for a binary tree node.
public class Convertsortedarraytobinarysearchtree {
    int val;
    Convertsortedarraytobinarysearchtree left;
    Convertsortedarraytobinarysearchtree right;

    Convertsortedarraytobinarysearchtree() {
    }

    Convertsortedarraytobinarysearchtree(int val) {
        this.val = val;
    }

    Convertsortedarraytobinarysearchtree(int val, Convertsortedarraytobinarysearchtree left,
            Convertsortedarraytobinarysearchtree right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public Convertsortedarraytobinarysearchtree sortedArrayToBST(int[] nums) {
        if (nums.length == 0)
            return null;
        return treeMake(nums, 0, nums.length - 1);
    }

    public Convertsortedarraytobinarysearchtree treeMake(int[] nums, int l, int r) {
        if (l > r)
            return null;
        int m = l + (r - l) / 2;
        Convertsortedarraytobinarysearchtree node = new Convertsortedarraytobinarysearchtree(nums[m]);
        node.left = treeMake(nums, l, m - 1);
        node.right = treeMake(nums, m + 1, r);

        return node;
    }
}