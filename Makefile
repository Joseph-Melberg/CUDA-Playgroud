.PHONY = all triangle clean

CC := nvcc
FLAGS := -lGL -lGLU -lglut


triangle:
	@echo "Building Triangle"
	${CC} Triangle.cpp -o Triangle.o ${FLAGS}


clean:
	@echo "Cleaning"
	rm *.o