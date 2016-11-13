INC_DIR=/home/arembedded/Projects/seg_fault

seg: seg_fault.c
	gcc seg_fault.c -I$(INC_DIR) -o seg_fault.o

all: seg

clean:
	rm -rf *.o	
