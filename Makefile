run: main.exe
	./main.exe

main.exe: main.cc src/calculadora.cc
	g++ main.cc src/calculadora.cc -o main.exe

clean: 
	rm -f main.exe

.PHONY: run clean