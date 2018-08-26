package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func setScSplit() { sc.Split(bufio.ScanWords) }

func readStr() string {
	sc.Scan()
	return sc.Text()
}

func readInt() int {
	i, e := strconv.Atoi(readStr())
	if e != nil {
		panic(e)
	}
	return i
}

func readFloat() float64 {
	f, e := strconv.ParseFloat(readStr(), 64)
	if e != nil {
		panic(e)
	}
	return f
}

func main() {
	setScSplit()

	var N, M int

	ans := 1 << 30
	total := 0

	N = readInt()
	M = readInt()

	jewel := make([]int, M+2)

	for i := 0; i < N; i++ {
		l := readInt()
		r := readInt()
		s := readInt()
		jewel[l] += s
		jewel[r+1] -= s
		total += s
	}

	for i := 0; i < M; i++ {
		jewel[i+1] += jewel[i]
	}

	/*debug code
	for i := range jewel {
		fmt.Println(jewel[i])
	}*/

	for i := 1; i <= M; i++ {
		if jewel[i] < ans {
			ans = jewel[i]
		}
	}

	fmt.Println(total - ans)
}
