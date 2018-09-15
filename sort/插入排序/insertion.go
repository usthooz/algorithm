package main

import (
	ozlog "github.com/usthooz/oozlog/go"
)

func main() {
	number := []int{95, 45, 15, 78, 84, 51, 24, 12}
	ozlog.Infof("Sort Result: %v", InsertionSort(number))
}

/*
	InsertionSort:插入排序
	input: [95 45 15 78 84 51 24 12]
	output: [12 15 24 45 51 78 84 95]
*/
func InsertionSort(arr []int) []int {
	for i := 1; i < len(arr); i++ {
		// 小于前一个
		if arr[i] < arr[i-1] {
			index := i - 1
			temp := arr[i]
			// 为元素找到合适的位置
			for index >= 0 && arr[index] > temp {
				arr[index+1] = arr[index]
				index--
			}
			arr[index+1] = temp
		}
	}
	return arr
}
