#!/bin/sh

g++ -c -fPIC bpasApplication.cpp
g++ -c -fPIC bpasButton.cpp
g++ -c -fPIC bpasMessage.cpp
g++ -c -fPIC bpasRect.cpp
g++ -c -fPIC bpasStringView.cpp
g++ -c -fPIC bpasTextControl.cpp
g++ -c -fPIC bpasView.cpp
g++ -c -fPIC bpasWindow.cpp
g++ -c -fPIC bpasInterfaceDefs.cpp


g++ -shared  -fPIC -o ./../lib/libhaiku4pas.so -lroot -lbe bpasApplication.o bpasButton.o bpasMessage.o bpasRect.o bpasStringView.o bpasTextControl.o bpasView.o bpasWindow.o bpasInterfaceDefs.o 

