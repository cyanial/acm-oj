package main

import "fmt"

func main() {
	var a, b int64

	for {
		_, err := fmt.Scan(&a, &b)
		if err != nil {
			break
		}
		fmt.Println(a + b)
	}

}
