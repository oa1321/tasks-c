CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB_R = advancedClassificationRecursion.o basicClassification.o
OBJECTS_LIB_L = advancedClassificationLoop.o basicClassification.o
FLAGS = -Wall -g

all: libclassrec.a libclassloops.a libclassrec.so libclassloops.so maindrec maindloop mains

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(flags)  -o mains $(OBJECTS_MAIN) libclassrec.a
mainsloop: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(flags)  -o mainsloop $(OBJECTS_MAIN) libclassloops.a

maindloop: $(OBJECTS_MAIN) 
	$(CC) $(flags)  -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
	
maindrec: $(OBJECTS_MAIN) 
	$(CC) $(flags)  -o maindrec $(OBJECTS_MAIN) ./libclassrec.so

libclassloops.so: $(OBJECTS_LIB_L)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIB_L)
	
libclassrec.so: $(OBJECTS_LIB_R)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_R)

libclassloops.a: $(OBJECTS_LIB_L)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB_L)
	
libclassrec.a: $(OBJECTS_LIB_R)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_R)
	
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(flags)  -c advancedClassificationRecursion.c
	
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(flags)  -c advancedClassificationLoop.c

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(flags)  -c basicClassification.c
	
main.o: main.c NumClass.h
	$(CC) $(flags)  -c main.c
	
.PHONY: clean all

clean:
	rm -f *.o *.a *.so maindrec maindloop mains
