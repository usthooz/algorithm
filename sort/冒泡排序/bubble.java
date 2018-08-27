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
public class bubble {
    public static void main(String []args){
        int[] array = {4,1,5,2,3};
        System.out.println("input:");
        for(int a:array)
            System.out.println(a);
        System.out.println("output:");
        for(int b:bubbleSort(array))
            System.out.println(b);
    }
    // 排序
    public static int[] bubbleSort(int []arr){
        for(int i =0;i<arr.length-1;i++) { 
            for(int j=0;j<arr.length-1;j++) {
                if(arr[j]>arr[j+1]) {
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }    
        }
        return arr;
    }
}

