# ***
# *** You can modify this file. You do not (should not) submit this file
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

TESTFALGS = -DTEST_SWAP -DTEST_SORT

SRCS = main.c sort.c
OBJS = $(SRCS:%.c=%.o)

sort: $(OBJS) 
	$(GCC) $(TESTFALGS) $(OBJS) -o sort

.c.o: 
	$(GCC) $(TESTFALGS) -c $*.c 

testall: test1 test2 test3

test1: sort
	./sort inputs/test1 > output1
	diff output1 expected/expected1

test2: sort
	./sort inputs/test2 > output2
	diff output2 expected/expected2

test3: sort
	./sort inputs/test3 > output3
	diff output3 expected/expected3

testgradeall: testgrade1 testgrade2 testgrade3

testgrade1: sort
	./sort Grading/inputs/test1 > output1
	# diff output1 Grading/expected/expected1

testgrade2: sort
	./sort Grading/inputs/test2 > output2
	# diff output2 Grading/expected/expected2

testgrade3: sort
	./sort Grading/inputs/test3 > output3
	# diff output3 Grading/expected/expected3

clean: # remove all machine generated files
	rm -f sort *.o output?


