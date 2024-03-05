OBJS = 	main.o state_manager.o state.o menu.o about.o \
		search.o search_manager.o linear_search.o binary_search.o \
		sort.o sort_manager.o bubble_sort.o selection_sort.o insertion_sort.o binary_insertion_sort.o
CC = g++

#---------------Executable---------------#
retro: $(OBJS)
	$(CC) -o retro $(OBJS)
	rm -f $(OBJS)	# Remove *.o files

#---------------Object Files---------------#
main.o:	
	$(CC) -c ./main.cpp		# -> main.o

state_manager.o:
	$(CC) -c ./src/state_manager.cpp	# -> state_manager.o

state.o:
	$(CC) -c ./src/state.cpp	# -> state.o

menu.o:
	$(CC) -c ./src/menu.cpp		# -> menu.o

about.o:
	$(CC) -c ./src/about.cpp	# -> about.o

#--------------Searching---------------#
search.o:
	$(CC) -c ./src/searching/search.cpp

search_manager.o:
	$(CC) -c ./src/searching/search_manager.cpp

linear_search.o:
	$(CC) -c ./src/searching/linear_search.cpp

binary_search.o:
	$(CC) -c ./src/searching/binary_search.cpp

#--------------Sorting---------------#
sort.o:
	$(CC) -c ./src/sorting/sort.cpp

sort_manager.o:
	$(CC) -c ./src/sorting/sort_manager.cpp

bubble_sort.o:
	$(CC) -c ./src/sorting/bubble_sort.cpp

selection_sort.o:
	g++ -c ./src/sorting/selection_sort.cpp

insertion_sort.o:
	g++ -c ./src/sorting/insertion_sort.cpp

binary_insertion_sort.o:
	g++ -c ./src/sorting/binary_insertion_sort.cpp

#---------------Commands---------------#
clean:	
	rm -f core retro $(OBJS)		# -> CLEANING

run:
	./retro	# -> RUNNING

rebuild:
	make clean; make	# -> REBUILDING
