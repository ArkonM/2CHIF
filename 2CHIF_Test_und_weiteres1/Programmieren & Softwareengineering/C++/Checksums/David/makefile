CFLAGS = -std=c++11
BIN = xyz
DATA = checksums.cpp
execute: $(BIN)
	./$(BIN)
rmv: $(BIN)
	rm $(BIN)
xyz: checksums.cpp
	g++ -o $(BIN) $(DATA) $(CFLAGS)

