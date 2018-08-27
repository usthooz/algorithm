# include <iostream>
using namespace std;

/*
	input:
	4 1 5 2 4
	output:
	1 2 4 4 5
*/
void Bubble(int array[],int len){
	int i,j,tpl;
	for (i = 0;i<len-1;i++)
		for (j = 0; j < len-1; j++)
			if (array[j]>array[j+1]){
				tpl = array[j];
				array[j] = array[j+1];
				array[j+1] = tpl;
			}
}

int main(){
	int array[]={4,1,5,2,3}; 
	int len = sizeof(array)/sizeof(array[0]);
	cout << "input:" << endl;
	for (int i = 0; i < len; i++)
        cout << array[i] << ' ';
	cout << endl;
	// bubble sort 
	Bubble(array,len);
	cout << "output:" << endl;
	for (int i = 0; i < len; i++)
        cout << array[i] << ' ';
	cout << endl;
}

