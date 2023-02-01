CC = gcc

default: run-tests

run-tests: build-tests
	./build/tests

build-tests: tests.c
	$(CC) $(CFLAGS) tests.c -o build/tests

clean:
	rm -r build/*
