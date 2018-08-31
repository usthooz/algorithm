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
public class section {
    public static void main(String []args){
        int[] array = {4,1,5,2,3};
        System.out.println("input:");
        for(int a:array)
            System.out.println(a);
        System.out.println("output:");
        for(int b:sectionSort(array))
            System.out.println(b);
    }
    // 排序
    public static int[] sectionSort(int []arr){
        for(int i =0;i<arr.length-1;i++) { 
            int min = i;
            for(int j=i+1;j<arr.length;j++) {
                if(arr[j]<arr[min]) {
                    min = j;
                }
            }    
            int temp = arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        return arr;
    }
}

