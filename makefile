all:
	em++ --std=c++11 testa.cpp -o test.js -Oz  -s DISABLE_EXCEPTION_CATCHING=0 --profiling