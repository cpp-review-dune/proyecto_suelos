include ../../../make.def
HDNUMPATH  = ../../..

all: Vectores01_10112021 Matriz_Hdnum01 Vectores02_10112021 Vectores03_10112021 

Matriz_01: Matriz_hdnum.cc
	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

 #Vectores01_10112021: Vectores01_10112021.cc
#	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

#Matriz_Hdnum01: Matriz_hdnum.cc
#	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

#Vectores02_10112021: Vectores02_10112021.cc
#	#$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

#Vectores03_10112021: Vectores03_10112021.cc
#	# $(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

# rule to build all programs without GMP support. That is the default
#nogmp: corona lr_opcount matrizen vektoren precision

# rule to build programs with GMP support
#gmp: wurzel wurzelbanach lr integralgleichung

#all: nogmp gmp

#
# Programs reqiring no GMP support
#

#primeros: primeros.cc
#	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

#prueba01: pruebas01.cc
#	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

#lr_opcount: lr_opcount.cc
#	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

#matrizen: matrizen.cc
#	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

#vektoren: vektoren.cc
#	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

#precision: precision.cc
#	$(CC) $(CCFLAGS) -o $@ $^ $(LFLAGS)

#
# Programs reqiring GMP support
#

#wurzel: wurzel.cc
#	$(CC) $(CCFLAGS) $(GMPCCFLAGS) -o $@ $^ $(GMPLFLAGS) $(LFLAGS)

#wurzelbanach: wurzelbanach.cc
#	$(CC) $(CCFLAGS) $(GMPCCFLAGS) -o $@ $^ $(GMPLFLAGS) $(LFLAGS)

#ellipse: ellipse.cc
#	$(CC) $(CCFLAGS) $(GMPCCFLAGS) -o $@ $^ $(GMPLFLAGS) $(LFLAGS)

#lr: lr.cc
#	$(CC) $(CCFLAGS) $(GMPCCFLAGS) -o $@ $^ $(GMPLFLAGS) $(LFLAGS)

#integralgleichung: integralgleichung.cc
#	$(CC) $(CCFLAGS) $(GMPCCFLAGS) -o $@ $^ $(GMPLFLAGS) $(LFLAGS)

# clean up directory
#clean:
#	rm -f *.o corona lr_opcount matrizen vektoren precision wurzel wurzelbanach lr integralgleichung
