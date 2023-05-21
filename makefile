all:
	g++ src/main.cpp -std=c++23 -o build/gcm.exe

debug:
	g++ src/main.cpp -std=c++23 -g -o build/gcm.exe

run:
	./build/gcm.exe

clean: 
	rm build/gcm.exe
	rm gcm.exe.stackdump