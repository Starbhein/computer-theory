package main

import (
	"bufio"
	"os"
)

func check(e error) {
	if e != nil {
		panic(e)
	}
}

func Leer(path string) Lang {
	f, err := os.Open(path)
	defer f.Close()

	check(err)
	lang := make(Lang)
	scanner := bufio.NewScanner(f)
	scanner.Split(bufio.ScanWords)
	for scanner.Scan() {
		cadena := scanner.Text()
		lang[cadena] = struct{}{}
	}
	if err := scanner.Err(); err != nil {
		return nil
	}
	return lang
}
