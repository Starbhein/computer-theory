package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewScanner(os.Stdin)

	fmt.Printf("De la ruta del lenguaje")
	reader.Scan()
	// p, err :=
	check(reader.Err())
	data := Leer(reader.Text())
	fmt.Println(data)
	// data2 := Leer("l2.txt")
	// fmt.Println(Union(data, data2))
	// fmt.Println(Concatenacion(data, data2))
	fmt.Println(Reflexion(data))
}
