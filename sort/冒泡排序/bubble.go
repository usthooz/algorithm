package main

import (
	"fmt"
)

func main() {
	number := []int{95, 45, 15, 78, 84, 51, 24, 12}
	fmt.Println("Sort Result:", BubbleSort(number))
	fmt.Println("Sort Result:", BubbleSort1(number))
}

/*
	BubbleSort 冒泡排序
	input: [95 45 15 78 84 51 24 12]
	output: [12 15 24 45 51 78 84 95]
*/
func BubbleSort(values []int) []int {
	flag := true
	vLen := len(values)
	for i := 0; i < vLen-1; i++ {
		flag = true
		for j := 0; j < vLen-i-1; j++ {
			if values[j] > values[j+1] {
				values[j], values[j+1] = values[j+1], values[j]
				flag = false
				continue
			}
		}
		if flag {
			break
		}
	}
	return values
}

func BubbleSort1(values []int) []int {
	length := len(values)
	for i := 0; i < length; i++ {
		for j := length - 1; j > i; j-- {
			if values[j] < values[j-1] {
				tmp := values[j-1]
				values[j-1] = values[j]
				values[j] = tmp
			}
		}
	}
	return values
}
