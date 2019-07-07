package main

import "fmt"

var memo = make([]int, 1000001)

const MOD = 10007

func dfs(n int) int {
	if n <= 1 {
		return 0
	}
	if memo[n-1] != 0 {
		return memo[n-1]
	}
	memo[n-1] = (dfs(n-1) + dfs(n-2) + dfs(n-3)) % MOD
	return memo[n-1]
}

func main() {
	var num int
	fmt.Scan(&num)
	memo[2] = 1
	fmt.Println(dfs(num))

}
