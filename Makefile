TARGETS=osero

all: $(TARGETS)

osero: osero.o board.o player.o cell.o
	g++ -o osero osero.o board.o player.o cell.o
.cpp.o:
	g++ -c $<
board.o: board.hpp
player.o: player.hpp
cell.o: cell.hpp
clean:
	rm *.o
allclean:
	rm *.o osero
