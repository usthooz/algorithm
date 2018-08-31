# include<iostream>
using namespace std;

/*
	input:
	4 1 5 2 4
	output:
	1 2 4 4 5
*/
void Section(int array[],int len){
	int i,j,temp,min;
    for (i = 0;i<len-1;i++)
    {
        min = i;
        for (j = i+1; j < len; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}

int main(){
	int array[]={4,1,5,2,3}; 
	int len = sizeof(array)/sizeof(array[0]);
	cout << "input:" << endl;
	for (int i = 0; i < len; i++)
        cout << array[i] << ' ';
	cout << endl;
	// section sort 
	Section(array,len);
	cout << "output:" << endl;
	for (int i = 0; i < len; i++)
        cout << array[i] << ' ';
	cout << endl;
}
