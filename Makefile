CC = gcc
CFLAGS = -Wall -Wextra

# Task 1 files
TASK1_SRC=calc/sum.c calc/difference.c calc/product.c calc/fraction.c calc/factorial.c calc/square_root.c
TASK1_OBJ=$(TASK1_SRC:.c=.o) 
TASK1_LIB=libcalc.a
TASK1_LIB_NAME=calc

# TASK 2 files
TASK2_SRC=trans/low.c trans/upper.c
TASK2_OBJ=$(TASK2_SRC:.c=.o)
TASK2_LIB=libconverter.so
TASK2_LIB_NAME=converter

all: calc converter

calc: $(TASK1_LIB)
	$(CC) $(CFLAGS) -o calculator calc/main.c -L. -l$(TASK1_LIB_NAME) -lm

converter: $(TASK2_LIB)
	$(CC) $(CFLAGS) -o converter trans/main.c -l$(TASK2_LIB_NAME) 	

$(TASK1_LIB): $(TASK1_OBJ)
	ar rcs $(TASK1_LIB) $(TASK1_OBJ)

$(TASK2_LIB): $(TASK2_OBJ)
	gcc -shared -o $(TASK2_LIB) $(TASK2_OBJ)
	cp $(TASK2_LIB) /usr/lib/
	chmod 0755 /usr/lib/$(TASK2_LIB)
	ldconfig
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean-all: clean-calc clean-converter

clean-calc:
	find calc -name "*.o" | xargs rm -f
	rm -fr $(TASK1_LIB)
	rm calculator
	
clean-converter:
	find trans -name "*.o" | xargs rm -f
	rm -fr /usr/lib/$(TASK2_LIB)
	rm -fr $(TASK2_LIB)
	rm converter
