all: testa_romanos.cpp   src/romanos.cpp include/romanos.hpp romanos.o
	g++ -std=c++11 -Wall -Iinclude romanos.o testa_romanos.cpp -o testa_romanos
	./testa_romanos
	#use comentario se necessario

compile: testa_romanos.cpp   src/romanos.cpp include/romanos.hpp romanos.o
	g++ -std=c++11 -Wall -Iinclude romanos.o testa_romanos.cpp -o testa_romanos
	
test: testa_romanos	
	./testa_romanos
	
cpplint: testa_romanos.cpp   src/romanos.cpp include/romanos.hpp
	cpplint  --filter=-readability/check --exclude=catch.hpp  *.*
	
gcov: testa_romanos.cpp   src/romanos.cpp include/romanos.hpp 
	g++ -std=c++11 -Wall -Wall -Iinclude -fprofile-arcs -ftest-coverage -c src/romanos.cpp
	g++ -std=c++11 -Wall -Iinclude -fprofile-arcs -ftest-coverage romanos.o testa_romanos.cpp -o testa_romanos
	./testa_romanos
	gcov *.cpp	
	
debug: testa_romanos.cpp   src/romanos.cpp include/romanos.hpp 
	g++ -std=c++11 -Wall -Iinclude -g -c src/romanos.cpp
	g++ -std=c++11 -Wall -Iinclude  -g romanos.o testa_romanos.cpp -o testa_romanos
	gdb testa_romanos
	
	
cppcheck:
	cppcheck --enable=warning \
	--suppress=missingIncludeSystem \
	--suppress=*:include/catch.hpp \
	src/*.cpp testa_romanos.cpp

valgrind: testa_romanos
	valgrind --leak-check=yes --log-file=valgrind.rpt ./testa_romanos

romanos.o : src/romanos.cpp include/romanos.hpp
	g++ -std=c++11 -Wall -Iinclude -c src/romanos.cpp
	
testa_romanos: 	testa_romanos.cpp   src/romanos.cpp include/romanos.hpp romanos.o
	g++ -std=c++11 -Wall -Iinclude romanos.o testa_romanos.cpp -o testa_romanos

clean:
	rm -rf *.o *.exe *.gc* 
	
	
