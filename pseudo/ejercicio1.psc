Proceso sumarHastaN
	definir x, num, suma como entero;
	escribir "hasta que numero quiere sumar?";
	leer num;
	suma <- 0;
	x <- 0;
	
	si (num < 1) Entonces
		escribir "error: el numero ingresado no es un numero natural";
	SiNo
		Mientras x <= num Hacer
			suma <- suma + x;
			x <- x + 1;
		FinMientras
	FinSi
	
	escribir "la suma de los numeros naturales desde 1 hasta ", num, " es: ", suma;
FinProceso