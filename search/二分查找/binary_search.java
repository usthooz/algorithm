public class binary_search {
    public static void main(String []args){
        int[] array = {1,2,3,4,5};
        int key = 2;
        System.out.println("Input:");
        for(int a:array)
            System.out.println(a);
        System.out.println("Key:"+key+"");
        System.out.println("Result Index:"+binarySearch(array,key)+"");
    }
    // binarySearch 二分查找
    public static int binarySearch(int []arr,int key){
        int low = 0;
        int hight = arr.length-1;
        while (low<=hight){
            int m = (low+hight) / 2;
            if (arr[m]<key) {
                low = m + 1;
            }else if (arr[m]>key){
                hight = m-1;
            }else{
                return m;
            }
        }
        return -1;
    }
}

