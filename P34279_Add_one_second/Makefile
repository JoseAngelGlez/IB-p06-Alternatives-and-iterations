#Makefile Jose Angel Gonzalez Alamo 13/12/2022

CXX = g++
CXXFLAGS = -Wall -std=c++17 -pedantic
######################################
DEPS = # .h
OBJ = P34279_Add_one_second.o
######################################

%.o: %.cc $(DEPS)
		@echo "🚧  Compilando programa..."
	$(CXX) -c -o $@ $< $(CXXFLAGS) 

######################################
P34279_Add_one_second: $(OBJ) # Programa = Nombre del ejecutable
	$(CXX) -o $@ $^ $(CXXFLAGS)
	@rm *.o
	@echo "✅  Programa listo para ejecución!"

######################################
.PHONY: clean
######################################
clean:
	@echo "🧹 Limpiando el directorio..."
	@rm -rf *.o *.out *.cc.swp P34279_Add_one_second
######################################
