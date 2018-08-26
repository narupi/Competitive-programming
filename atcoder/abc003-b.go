package main

import (
	"fmt"
	"strings"
)

func main() {
	var s, t string
	fmt.Scan(&s, &t)

	preset := "atcoder@"

	for i := 0; i < len(s); i++ {
		if s[i] == '@' {
			if !strings.Contains(preset, string(t[i])) {
				fmt.Println("You will lose")
				return
			}
		} else if t[i] == '@' {
			if !strings.Contains(preset, string(s[i])) {
				fmt.Println("You will lose")
				return
			}
		} else if s[i] != t[i] {
			fmt.Println("You will lose")
			return
		}
	}
	fmt.Println("You can win")
}
