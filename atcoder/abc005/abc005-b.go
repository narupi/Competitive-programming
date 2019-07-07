package main

import "fmt"

func main() {
	var n int
	var t int
	ans := 1000

	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fmt.Scan(&t)
		if t < ans {
			ans = t
		}
	}

	fmt.Println(ans)
}
