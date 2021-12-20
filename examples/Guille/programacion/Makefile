include ../../../make.def
HDNUMPATH  = ../../..

# rule to build all programs without GMP support. That is the default
#nogmp: Hola.cc ensayo.cc #corona lr_opcount matrizen vektoren precision

# rule to build programs with GMP support
#gmp: wurzel wurzelbanach lr integralgleichung

#all: nogmp gmp

all: holamundo condicional Hiperbolica

Hiperbolica: Hiperbolica.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

holamundo: holamundo.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

condicional: condicional.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)