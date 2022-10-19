package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for z := 0; z < t; z++ {
		var n int
		fmt.Scan(&n)
		var sum int = 0
		var x int
		for i := 0; i < n; i++ {
			fmt.Scan(&x)
			sum += x
		}
		fmt.Println(sum)
	}
}
