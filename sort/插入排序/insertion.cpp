# include <iostream>
using namespace std;

/*
	input:
	4 1 5 2 4
	output:
	1 2 4 4 5
*/
void Insertion(int array[],int len){
	int i;
    for (i = 1;i<len;i++)
        if (array[i]<array[i-1])
        {
            int index = i-1;
            int temp = array[i];
            // 找到合适的位置
            while(index >=0 && array[index]>temp){
                array[index+1] = array[index];
                index --;
            }
            array[index+1] = temp;
        }
}

int main(){
	int array[]={4,1,5,2,3}; 
	int len = sizeof(array)/sizeof(array[0]);
	cout << "input:" << endl;
	for (int i = 0; i < len; i++)
        cout << array[i] << ' ';
	cout << endl;
	// Insertion sort 
	Insertion(array,len);
	cout << "output:" << endl;
	for (int i = 0; i < len; i++)
        cout << array[i] << ' ';
	cout << endl;
}

