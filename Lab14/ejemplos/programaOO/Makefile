# VENTAJAS
# Solo recompila lo necesario
# Automatiza el proceso
# facil de extender

# Nombre del compilador
CXX = c++

# Flags de compilación
CXXFLAGS  = -Wall -std=c++17

# Archivos fuente y objetos
SRC = circulo.cpp aplicacion.cpp
OBJ = $(SRC:.cpp=.o)

# Nombre del ejecutable
TARGET = main

# Regla por defecto
all: $(TARGET)

# Cómo construir el ejecutable
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Regla para compilar archivos .cpp a .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos intermedios
clean:
	rm -f $(OBJ) $(TARGET)

