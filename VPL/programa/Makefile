CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=vpl_execution

BUILD_DIR = /home/gus/Atom/VPL/programa/build
SRC_DIR = /home/gus/Atom/VPL/programa/src
INCLUDE_DIR = /home/gus/Atom/VPL/programa/include
ROOT_DIR = /home/gus/Atom/VPL/programa

#vpl_execution

${ROOT_DIR}/${TARGET} : ${BUILD_DIR}/Pessoa.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Professor.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${ROOT_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Pessoa.o : ${INCLUDE_DIR}/Pessoa.hpp ${SRC_DIR}/entidades/Pessoa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Pessoa.cpp -o ${BUILD_DIR}/Pessoa.o

${BUILD_DIR}/Funcionario.o : ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/entidades/Funcionario.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Professor.o : ${INCLUDE_DIR}/Professor.hpp ${SRC_DIR}/entidades/Professor.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Professor.cpp -o ${BUILD_DIR}/Professor.o

${BUILD_DIR}/main.o : ${INCLUDE_DIR}/Pessoa.hpp ${INCLUDE_DIR}/Funcionario.hpp ${INCLUDE_DIR}/Professor.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

#use 'make clean' para usar a função de limpeza
clean: 
	rm -f ${BUILD_DIR}/*