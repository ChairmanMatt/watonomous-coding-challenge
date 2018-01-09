CXX = g++
CXXFLAGS = -std=c++14 -Werror=vla -MMD
EXEC = runner
OBJECTS = runner.o usa.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${OBJECTS} -o ${EXEC} ${CXXFLAGS}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${DEPENDS} ${EXEC}