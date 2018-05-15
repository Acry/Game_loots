define colorecho
      @tput setaf 2
      @echo $1
      @tput sgr0
endef

CFLAGS        = -Wall -g -Wextra -mtune=native

LDFLAGS       = -lm

TARGETS = 0 1 2 3 4 5 6


.PHONY: all
all: $(TARGETS)

dummy: dummy.c 
	@cc $(CFLAGS) -o $@ $< $(LDFLAGS)
	$(call colorecho,"$@ success. ./\"$@\" to execute.")

0:   0.c
	@cc $(CFLAGS) -o $@ $+ $(LDFLAGS)
	$(call colorecho,"$@ success. ./\"$@\" to execute.")
1:   1.c
	@cc $(CFLAGS) -o $@ $+ $(LDFLAGS)
	$(call colorecho,"$@ success. ./\"$@\" to execute.")

2:   2.c
	@cc $(CFLAGS) -o $@ $+ $(LDFLAGS)
	$(call colorecho,"$@ success. ./\"$@\" to execute.")

3:   3.c
	@cc $(CFLAGS) -o $@ $+ $(LDFLAGS)
	$(call colorecho,"$@ success. ./\"$@\" to execute.")

4:   4.c
	@cc $(CFLAGS) -o $@ $+ $(LDFLAGS)
	$(call colorecho,"$@ success. ./\"$@\" to execute.")

5:   5.c
	@cc $(CFLAGS) -o $@ $+ $(LDFLAGS)
	$(call colorecho,"$@ success. ./\"$@\" to execute.")

6:   6.c
	@cc $(CFLAGS) -o $@ $+ $(LDFLAGS)
	$(call colorecho,"$@ success. ./\"$@\" to execute.")

.PHONY: clean
clean:
	@rm $(TARGETS) 2>/dev/null || true
	$(call colorecho,"It is clean now.")

#$<	first depend
#$@	target name
#$+	all depend
#$^	all depend but eleminating duplicates

# while inotifywait -e close_write ./anim.c; do date +%X; make > /dev/null; done
