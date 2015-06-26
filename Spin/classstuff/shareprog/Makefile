
# Shared resource example from class.

all: deadlock mutex live


# trying to figure out how to say: ignore all claims
deadlock: share.prom
	spin -a share.prom
	cc -o pan pan.c
	./pan

mutex: share.prom
	spin -a share.prom
	cc -o pan pan.c
	./pan -a -N mutex

live: share.prom
	spin -a share.prom
	cc -o pan pan.c
	./pan -a -N live
	./pan -r -g -N live > share-live-trace.txt

clean:
	rm -f *trace.txt pan* *.trail *.tmp *~
