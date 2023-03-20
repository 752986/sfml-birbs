all:
	g++ main.cpp birb.cpp -I include -L lib -l sfml-main -l sfml-graphics -l sfml-window -l sfml-system

run: all
	a.exe