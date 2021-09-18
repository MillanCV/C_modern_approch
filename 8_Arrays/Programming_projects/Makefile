CC			:=gcc
CCFLAGS		:= -Wall -pedantic
SRC_FILES	:= $(wildcard *.c)
PROGRAMS	:= $(patsubst %.c, %, $(SRC_FILES))
MKDIR		:= mkdir -p

all: $(PROGRAMS)

%: %.c 
	$(CC) $(CCFLAGS) -o $@ $^

clean:
	rm -f $(PROGRAMS)