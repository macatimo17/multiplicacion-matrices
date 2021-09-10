#!/usr/bin/perl

#Fichero para automatización de ejecución por lotes de un ejecutable
#dado parametros de entrada

$repeticiones = 30;
@ejecutables = ("matricesApp");
@matrizSize = ("50","100","200","300","400","500","600","700","800");
$path = "/home/maria/matrices_03/";

foreach $exe (@ejecutables) {
	foreach $size (@matrizSize) {
		$fichero = "$path"."Soluciones/"."$exe"."-size"."$size";
		#print("$fichero \n");
		for($i =0; $i<$repeticiones; $i++) {
			#print("$path$exe $size \n");
			system("$path$exe $size >> $fichero");
		}
	}
}

exit(1);
