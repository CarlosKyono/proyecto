bin/ejecutable : src/main.cpp include/*.hpp
	c++ src/main.cpp -o bin/ejecutable -I include

run : bin/ejecutable
	./bin/ejecutable
	