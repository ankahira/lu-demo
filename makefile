main: main.cpp lu.cpp common.hpp
	c++ -o main main.cpp lu.cpp -g -O0 -fsanitize=address

clean: main
		rm main
