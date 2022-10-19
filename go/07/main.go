package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
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
		vstr := strings.Fields(data)
		sum := 0
		for _, v := range vstr {
			vi, _ := strconv.Atoi(v)
			sum += vi
		}
		fmt.Println(sum)
	}
}
