CXX = g++
CXXFLAGS = -fPIC -Wall
BUILD_DIR = bin
SRC_DIR = Tachyon/src
SOURCES = $(shell find $(SRC_DIR) -name '*.cpp')
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = libtachyon.so

$(TARGET): $(OBJECTS)
	$(CXX) -shared $(addprefix $(BUILD_DIR)/, $(notdir $^)) -o $(BUILD_DIR)/$@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $(BUILD_DIR)/$(notdir $@)

.PHONY: clean
clean:
	rm -f $(BUILD_DIR)/$(TARGET) $(addprefix $(BUILD_DIR)/, $(notdir $(OBJECTS)))
