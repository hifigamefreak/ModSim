.PHONY:	clean default all

all:
	make stats
	make sum
	make operations

stats: main.c
	gcc main.c -o stats -lm

sum: sum.c
	gcc sum.c -o sum -lm

operations: operations.c
	gcc operations.c -o operations -lm

clean:
	rm -f speed stats sum operations

default:
	all
