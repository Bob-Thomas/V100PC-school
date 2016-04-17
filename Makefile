# from https://stackoverflow.com/a/12959694/342329
rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

bin/week1/opdracht1: $(call rwildcard,./week1/opdracht1,*.cpp)
	g++ -g -O0 -std=c++11 $^ -o $@ -lgdi32

run: bin/week1/opdracht1
	 ./bin/week1/opdracht1.exe