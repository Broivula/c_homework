HEADERS = travel_card.h stamper.h
OBJECTS = main.o stamper.o travel_card.o
COMPILER = g++

default: travel_card

travel_card.o: travel_card.cpp ${HEADERS}
	${COMPILER} -c travel_card.cpp -o travel_card.o

stamper.o: stamper.cpp ${HEADERS}
	${COMPILER} -c stamper.cpp -o stamper.o

main.o: main.o ${HEADERS}
	${COMPILER} -c main.cpp -o main.o

travel_card: ${OBJECTS}
	${COMPILER} ${OBJECTS} -o travel_card

clean:
	-rm -f ${OBJECTS}
	-rm -f travel_card
