package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)
	for z := 0; z < t; z++ {
		var a, b int
		fmt.Scan(&a, &b)
		fmt.Println(a + b)
	}
}
