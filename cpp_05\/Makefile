# Nom de l'exécutable
TARGET = Materia

# Compilateur
CXX = c++

# Options de compilation
CXXFLAGS = -Wall -Wextra -std=c++98 -g3

# Fichiers source
SRCS = AMateria.cpp \
Character.cpp \
Cure.cpp \
Ice.cpp \
main.cpp \

# Fichiers objets
OBJS = $(SRCS:.cpp=.o)

# Règle par défaut
all: $(TARGET)

# Règle pour créer l'exécutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Règle pour créer les fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
	rm -f $(OBJS) $(TARGET)

# Règle pour nettoyer les fichiers objets
fclean: clean

# Règle pour recompiler tout
re: fclean all

.PHONY: all clean fclean re