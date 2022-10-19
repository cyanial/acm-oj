package main

import "fmt"

func main() {
	for {
		var n int
		fmt.Scan(&n)
		if n == 0 {
			break
		}
		var sum int = 0
		for i := 0; i < n; i++ {
			var x int
			fmt.Scan(&x)
			sum += x
		}
		fmt.Println(sum)
	}
}
