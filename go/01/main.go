package main

import "fmt"

func main() {
	var a, b int
	for {
		_, err := fmt.Scan(&a, &b)
		if err != nil {
			break
		}
		fmt.Println(a + b)
	}
}
