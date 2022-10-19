package main

import "fmt"

func main() {
	for {
		var n int
		_, err := fmt.Scan(&n)
		if err != nil {
			break
		}
		var sum, x int
		sum = 0
		for i := 0; i < n; i++ {
			fmt.Scan(&x)
			sum += x
		}
		fmt.Println(sum)
	}
}
