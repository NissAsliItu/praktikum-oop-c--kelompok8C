CXX = g++
CXXFLAGS = -Wall -std=c++17 -Isrc
OBJ = main.o AlatLaboratorium.o
TARGET = inventaris

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

main.o: src/main.cpp src/AlatLaboratorium.hpp
	$(CXX) $(CXXFLAGS) -c src/main.cpp

AlatLaboratorium.o: src/AlatLaboratorium.cpp src/AlatLaboratorium.hpp
	$(CXX) $(CXXFLAGS) -c src/AlatLaboratorium.cpp

clean:
	rm -f $(OBJ) $(TARGET) $(TARGET).exe
