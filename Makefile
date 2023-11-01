bin/ejecutable : src/main.cpp include/*.hpp
	c++ src/main.cpp -o bin/ejecutable -I include -l curses

run : bin/ejecutable
	./bin/ejecutable
	