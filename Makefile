run: main.exe
	./main.exe

main.exe: main.cc src/calculadora.cc
	g++ main.cc src/calculadora.cc -o main.exe

.PHONY: main