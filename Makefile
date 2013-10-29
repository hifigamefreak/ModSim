.PHONY:	clean default all

all:
	make stats
	make sum
	make operations

speed:
	gcc speedtest.c -o speed -lm

stats:
	gcc main.c -o stats

sum:
	gcc sum.c -o sum

precision:
	gcc operations.c -o operations -lm

clean:
	rm -f speed stats sum precision

default:
	all
