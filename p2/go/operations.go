package main

import "fmt"

// Lang struct esta hecho como con propiedades vacias porque solo quiero darle un nombre a este tipo de maps, no necesito que tenga propiedades cada struct, como un alias
type Lang map[string]struct{}

// Union al estar como un map cada Lenguaje, se agregan sin repetir las cadenas, lado malo, estan en orden alfabetico por definicion de un map de go
func Union(fl, sl Lang) Lang {
	res := make(Lang)
	for v := range fl {
		res[v] = struct{}{}
	}
	for v := range sl {
		res[v] = struct{}{}
	}
	return res
}

func Concatenacion(fl, sl Lang) Lang {
	res := make(Lang)
	for v := range fl {
		for k := range sl {
			res[v+k] = struct{}{}
		}
	}
	return res
}

func invertirCadena(cadena string) string {
	len := len(cadena)
	invertido := make([]byte, len)
	for i := range len {
		invertido[i] = cadena[len-1-i]
	}
	return string(invertido)
}

func Reflexion(fl Lang) Lang {
	res := make(Lang, len(fl))
	for v := range fl {
		res[invertirCadena(v)] = struct{}{}
	}
	return res
}

func Potencia(fl Lang, pow int) Lang {
	// res := make(Lang, len(fl))
	if pow > 8 && pow < -5 {
		fmt.Println("Escoja una potencia valida entre -5 y 8")
		return nil
	}
	if pow < 0 {
	}
	return nil
}
