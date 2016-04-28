# from https://stackoverflow.com/a/12959694/342329
rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

INC =-I"C:\Users\smart\school\V100PC-school\Catch\include"

all: week1 week2

week1: bin/week1/opdracht1 bin/week1/opdracht2

week2: bin/week2/opdracht1-2 bin/week2/opdracht3

bin/week1/opdracht1: $(call rwildcard,./week1/opdracht1,*.cpp)
	g++ -g -O0 -std=c++11 $^ -o $@ -lgdi32

bin/week1/opdracht2: $(call rwildcard,./week1/opdracht2,*.cpp)
	g++ -g -O0 -std=c++11 $^ -o $@ -lgdi32

bin/week2/opdracht1-2: $(call rwildcard,./week2/opdracht1-2,*.cpp)
	g++ -g -O0 -std=c++11 $^ -o $@ -lgdi32 -DESRI_WINDOWS $(INC)

bin/week2/opdracht3: $(call rwildcard,./week2/opdracht3,*.cpp)
    g++ -g -O0 -std=c++11 $^ -o $@ -lgdi32 -DESRI_WINDOWS $(INC)





run: bin/week1/opdracht1
	 ./bin/week1/opdracht1.exe