CXX = g++
CXXFLAGS = -fPIC -Wall
BUILD_DIR = bin
SRC_DIR = TachyonEngine/src
INC_DIR = TachyonEngine/vendor/spdlog/include
SOURCES = $(shell find $(SRC_DIR) -name '*.cpp')
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = libtachyonengine.so

$(TARGET): $(OBJECTS)
	$(CXX) -shared $(addprefix $(BUILD_DIR)/, $(notdir $^)) -o $(BUILD_DIR)/$@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I $(INC_DIR)/ -c $< -o $(BUILD_DIR)/$(notdir $@)

.PHONY: clean
clean:
	rm -f $(BUILD_DIR)/$(TARGET) $(addprefix $(BUILD_DIR)/, $(notdir $(OBJECTS)))
