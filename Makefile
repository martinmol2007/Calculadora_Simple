run: main
	./main

main: main.cc include/calculadora.cc
	g++ main.cc include/calculadora.cc -o main

.PHONY: main