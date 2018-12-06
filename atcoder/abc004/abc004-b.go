package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

const (
	COL = 4
	ROW = 4
)

var sc = bufio.NewScanner(os.Stdin)

func nextStr() string {
	sc.Scan()
	return sc.Text()
}

func main() {
	mapp := make([][]string, ROW)
	ansmap := make([][]string, ROW)
	sc.Split(bufio.ScanWords)
	for i := 0; i < ROW; i++ {
		ansmap[i] = make([]string, COL)
		mapp[i] = make([]string, COL)
		for j := 0; j < COL; j++ {
			mapp[i][j] = nextStr()
		}
	}
	for i := 0; i < ROW; i++ {
		for j := 0; j < COL; j++ {
			x := int(math.Abs(float64(3 - i)))
			y := int(math.Abs(float64(3 - j)))
			ansmap[x][y] = mapp[i][j]
		}
	}

	for i := 0; i < ROW; i++ {
		fmt.Printf("%s %s %s %s\n", ansmap[i][0], ansmap[i][1], ansmap[i][2], ansmap[i][3])
	}

}
