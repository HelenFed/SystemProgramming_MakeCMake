CXX = g++
CXXFLAGS = -std=c++11
SRC_DIR = ~/Documents/Lab4/calculator
BUILD_DIR = build
TARGET = calculator

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
HEADERS = $(wildcard $(SRC_DIR)/*.h)

OBJECTS = $(patsubst $(SRC_DIR)%.cpp, $(BUILD_DIR).%.o, $(SOURCES))

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
