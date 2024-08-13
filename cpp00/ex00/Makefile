# Variáveis
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = megaphone

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ) 

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean
