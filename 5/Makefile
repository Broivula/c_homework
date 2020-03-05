HEADERS = travel_card.h strings.h menu.h
OBJECTS = travel_card.o strings.o menu.o

default: travel_card 

travel_card.o: travel_card.c ${HEADERS}
	gcc -c travel_card.c -o travel_card.o

menu.o: menu.c ${HEADERS}
	gcc -c menu.c -o menu.o

strings.o: strings.c strings.h
	gcc -c strings.c -o strings.o

travel_card: ${OBJECTS}
	gcc ${OBJECTS} -o travel_card
	
clean:
	-rm -f ${OBJECTS}
	-rm -f travel_card
