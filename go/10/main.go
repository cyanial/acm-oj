package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	for {
		data, err := reader.ReadString('\n')
		if err != nil {
			break
		}
		data = data[:len(data)-1]
		vs := strings.Split(data, ",")
		sort.Strings(vs)
		fmt.Println(strings.Join(vs, ","))
	}
}
