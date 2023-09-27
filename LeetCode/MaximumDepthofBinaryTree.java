
//  Definition for a binary tree node.

import java.util.LinkedList;
import java.util.Queue;

public class MaximumDepthofBinaryTree {
    int val;
    MaximumDepthofBinaryTree left;
    MaximumDepthofBinaryTree right;

    MaximumDepthofBinaryTree() {
    }

    MaximumDepthofBinaryTree(int val) {
        this.val = val;
    }

    MaximumDepthofBinaryTree(int val, MaximumDepthofBinaryTree left, MaximumDepthofBinaryTree right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public int maxDepth(MaximumDepthofBinaryTree root) {
        if (root == null)
            return 0;

        Queue<MaximumDepthofBinaryTree> nodes = new LinkedList<>();

        nodes.add(root);
        int levels = 0;

        while (!nodes.isEmpty()) {

            levels++;
            int size = nodes.size();
            for (int i = 0; i < size; i++) {
                MaximumDepthofBinaryTree poppedNode = nodes.poll();
                if (poppedNode.left != null)
                    nodes.add(poppedNode.left);
                if (poppedNode.right != null)
                    nodes.add(poppedNode.right);
            }

        }

        return levels;
    }
}
