package main

import "fmt"

func stringSlice(a string, list []string) bool {
	for _, b := range list {
		if b == a {
			return true
		}
	}
	return false
}

func main() {
	var w string
	fmt.Scan(&w)

	aiueo := []string{"a", "i", "u", "e", "o"}

	for _, c := range w {
		if stringSlice(string(c), aiueo) != true {
			fmt.Print(string(c))
		}
	}
	fmt.Print("\n")
}
