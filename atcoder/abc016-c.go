package main

import (
	"fmt"
)

var INF int = 1 << 32

func min(a, b int) int {
	if a < b {
		return a
	} else {
		return b
	}
}

func main() {
	var n, m int
	fmt.Scan(&n, &m)

	nodecost := make([][]int, n)

	//init
	for i := range nodecost {
		nodecost[i] = make([]int, n)
		for j := range nodecost[i] {
			nodecost[i][j] = INF
			nodecost[i][i] = 0
		}
	}

	//input
	for i := 0; i < m; i++ {
		var a, b int
		fmt.Scan(&a, &b)
		a--
		b--
		nodecost[a][b] = 1
		nodecost[b][a] = 1
	}

	//warshall_floyd()
	for k := 0; k < n; k++ {
		for i := 0; i < n; i++ {
			for j := 0; j < n; j++ {
				nodecost[i][j] = min(nodecost[i][j], nodecost[i][k]+nodecost[k][j])
			}
		}
	}

	//output
	for i := 0; i < n; i++ {
		var cnt int
		for j := 0; j < n; j++ {
			if nodecost[i][j] == 2 {
				cnt++
			}
		}
		fmt.Println(cnt)
	}
}
