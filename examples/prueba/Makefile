include ../../make.def
HDNUMPATH  = ../..

all: gnuplot vectores01 vectores02 vectores03

gnuplot: prueba_gnuplot.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)
#rk4: rk4_uni.cc 
#	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)
vectores01: vectores01.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)
vectores02: vectores02.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)
vectores03: vectores03.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)