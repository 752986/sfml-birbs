all:
	g++ main.cpp birb.cpp flower.cpp -I include -L lib -l sfml-main -l sfml-graphics -l sfml-window -l sfml-system

run: all
	a.exe