public class hello_world {
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50};
        int target = 30; // Number to search
        boolean found = false;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                System.out.println("Found " + target + " at index: " + i);
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println(target + " not found in the array.");
        }
    }
}
