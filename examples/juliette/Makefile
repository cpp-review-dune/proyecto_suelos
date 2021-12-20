include ../../make.def
HDNUMPATH  = ../..
all: prueba01 prueba02 parabolica
parabolica: parabolica.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)
prueba01: hola.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)
prueba02: euler.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)
