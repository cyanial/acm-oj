package main

import (
	"fmt"
	"sort"
	"strings"
)

func main() {
	var n int
	fmt.Scan(&n)
	vs := make([]string, n)
	for i := range vs {
		fmt.Scan(&vs[i])
	}
	sort.Strings(vs)
	fmt.Println(strings.Join(vs, " "))
}
