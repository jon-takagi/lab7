%.wc : %.txt
	wc $< > $*-stats.wc
clean:
	rm *.wc
