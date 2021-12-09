 set ticslevel 0  
 set dgrid3d 6,5  
 set palette defined (0 "blue", 0.75 "white", 1.4 "red")  
 set style lines 100 lt 5 lw 0.5  
 set pm3d hidden3d 100  
 set grid  
 set view 74,216  
 unset key  
 splot 'poisson01.dat' using 1:2:3 with pm3d
 #splot 'final.dat' using 1:2:3 with pm3d
