package main

import "fmt"

func main() {
	var n int
	ans := ""
	fmt.Scan(&n)
	if n == 0 {
		fmt.Println(0)
		return
	}

	for n != 0 {
		k := 0
		n, k := n/(-2), n%(-2)
		if k < 0 {
			n += 1
			k += 2
		}
		ans = string(k+'0') + ans
	}
	fmt.Println(ans)
}
