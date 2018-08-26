package main

import "fmt"

func abs(n int) int {
	if n < 0 {
		return -n
	} else {
		return n
	}
}

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	sub := abs(a - b)

	var preset = []int{0, 1, 2, 3, 2, 1, 2, 3, 3, 2}

	fmt.Println(sub/10 + preset[sub%10])
}
