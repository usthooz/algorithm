package main

import "fmt"

func main() {
	number := []int{95, 45, 15, 78, 84, 51, 24, 12}
	fmt.Println("Sort Result:", SectionSort(number))
}

/*
	SectionSort 选择排序
	input: [95 45 15 78 84 51 24 12]
	output: [12 15 24 45 51 78 84 95]
*/
func SectionSort(values []int) []int {
	length := len(values)
	for i := 0; i < length-1; i++ {
		min := i
		for j := i + 1; j < length; j++ {
			if values[j] < values[min] {
				min = j
			}
		}
		values[i], values[min] = values[min], values[i]
	}
	return values
}
