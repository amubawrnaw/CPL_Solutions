import java.util.*;

public class SkylineProblem {
    static class Item implements Comparable<Item> {
        int left;
        int right;
        int height;

        Item(int s, int e, int h) {
            left = s;
            right = e;
            height = h;
        }

        @Override
        public int compareTo(Item o) {
            if (this.left == o.left) {
                return Integer.compare(o.height, this.height);
            } else {
                return Integer.compare(this.left, o.left);
            }
        }
    }

    static List<int[]> getSkyline(int[][] buildings) {
        int n = buildings.length;
        List<int[]> result = new ArrayList<int[]>();
        if (n == 0) { return result; }
        PriorityQueue<Item> queue = new PriorityQueue();
        int rightMost = buildings[0][1];
        for (int[] b : buildings) {
            if (rightMost < b[0]) {
                queue.offer(new Item(rightMost, b[0], 0));
            }
            queue.offer(new Item(b[0], b[1], b[2]));
            rightMost = Math.max(rightMost, b[1]);
        }

        Item cur = queue.poll();
        result.add(new int[]{cur.left, cur.height});
        while (!queue.isEmpty()) {
            Item next = queue.poll();
            if (next.height == cur.height && next.left == cur.right) {
                // the same height, no space
                cur = next;
            } else if (next.height > cur.height) {
                // next is higher than current
                if (next.right < cur.right) {
                    // give the second chance to a lower height
                    cur.left = next.right;
                    queue.offer(cur);
                }
                cur = next;
                result.add(new int[]{cur.left, cur.height});
            } else {
                // next is lower than current
                if (next.left == cur.right) {
                    // no space
                    // this is mostly a survivor of the second chance
                    cur = next;
                    result.add(new int[]{cur.left, cur.height});
                } else if (next.right > cur.right) {
                    // give the second chance to a lower height
                    next.left = cur.right;
                    queue.offer(next);
                }
            }
        }
        result.add(new int[]{cur.right, 0});
        return result;
    }

    static void printList(List<int[]> list) {
        System.out.print("[");
        for (int i = 0; i < list.size(); i++) {
            if (i != 0) {
                System.out.print(", ");
            }
            int[] ary = list.get(i);
            System.out.print("[" + ary[0] + ", " + ary[1] + "]");
        }
        System.out.println("]");
    }

    public static void main(String[] args) {
        // {left, right, height}
        int[][] bs0 = {
                {1, 5, 11},
                {2, 7, 6},
                {3, 9, 13},
                {12, 16, 7},
                {14, 25, 3},
                {19, 22, 18},
                {23, 29, 13},
                {24, 28, 4}
        };
        List<int[]> result = getSkyline(bs0);
        printList(result);

        int[][] bs1 = {
                {2, 9, 10},
                {3, 7, 15},
                {5, 12, 12},
                {15, 20, 10},
                {19, 24, 8}
        };
        result = getSkyline(bs1);
        printList(result);
    }
}