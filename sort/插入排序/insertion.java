/* 
    input:
        4
        1
        5
        2
        3
    output:
        1
        2
        3
        4
        5
*/
public class insertion {
    public static void main(String []args){
        int[] array = {4,1,5,2,3};
        System.out.println("input:");
        for(int a:array)
            System.out.println(a);
        System.out.println("output:");
        for(int b:insertionSort(array))
            System.out.println(b);
    }
    // 插入排序
    public static int[] insertionSort(int []arr){
        for(int i =1;i<arr.length;i++) { 
            // 小于前一个元素
            if (arr[i]<arr[i-1]){
                int index = i-1;
                int temp = arr[i];
                while (index>=0 && arr[index]>temp){
                    arr[index+1] = arr[index];
                    index --;
                }
                arr[index+1] = temp;
            } 
        }
        return arr;
    }
}

