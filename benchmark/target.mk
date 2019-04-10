all: lib

lib:
	make -C $(CHISEL_BENCHMARK_HOME)/benchmark/lib

reduce: lib
	cp $(SRC).origin.c $(SRC)
	$(CC) -w $(SRC) -o $(ORIGIN_BIN) $(CFLAGS) $(LFLAGS)
	chisel ./$(ORACLE) $(SRC)
	cp $(SRC).chisel.c $(SRC).reduced.c

$(BIN).reduced.afl.cmd: $(SRC).reduced.c.afl.cmd.c
	afl-$(CC) -w -o $@ $(SRC).reduced.c.afl.cmd.c $(LFLAGS)

afl-cmd-reduced: $(BIN).reduced.afl.cmd
	rm -rf afl_cmd_output_reduced
	mkdir afl_cmd_output_reduced
	export AFL_SKIP_CPUFREQ=1
	unset ASAN_OPTIONS; timeout 259200 afl-fuzz -i afl_input -o afl_cmd_output_reduced ./$(BIN).reduced.afl.cmd

clean:
	rm -f $(NAME).origin $(NAME).reduced $(NAME).c

distclean: clean
	rm -rf chisel-out
