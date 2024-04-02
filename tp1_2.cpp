#include <stdio.h>

int cuadrado(int numero){
    return (numero*numero);
}

void cuadrado_void(int numero, int *resultado){
    *resultado = numero * numero;
}

void mostrar_direccion_contenido(int &valor){
    printf("\nEl valor es %d", valor);
    printf("\nEL valor esta almacenado en la direccion de memoria %p", &valor);
}

void invertir(int *valor1, int *valor2){ //Estos punt. apuntan a las dir de mem. de las var.
    int aux;
    aux = *valor1;//Asigno a aux el valor que se encuentra en la dirección de memoria apuntada por valor1
    *valor1=*valor2;
    *valor2=aux;
}

void ordenar(int *valor1, int *valor2){
    if(*valor1>*valor2){ //Comparo los valores a los que apuntan 
                        //Si estarian sin los * estaria comparando las direcciones de memoria
        printf("\n\nDireccion de memoria de v1:%p y de v2:%p", valor1, valor2);
        invertir(valor1, valor2);
    /*Cuando llamamos a invertir desde ordenar, no necesitamos usar el operador & porque 
    valor1 y valor2 ya son punteros que contienen las direcciones de memoria de las variables */
    }
}

int main(){
    int numero = 4;
    int resultado;
    int valor1, valor2;
    
    //a) Haga una función que devuelva el cuadrado de un número
    printf("\nEl cuadrado de %d es %d", numero, cuadrado(numero));
    
    //b) Haga una función que devuelva el cuadrado de un número con void
    cuadrado_void(numero, &resultado);
    printf("\nEl cuadrado de %d con void es %d", numero, resultado);
    printf("\n\n");
    
    /* c) Al recibir una variable muestre por pantalla la dirección y el contenido de
    la variable*/
    printf("\nEL valor %d esta almacenado en la direccion de memoria %p",numero, &numero);
    mostrar_direccion_contenido(numero);
    printf("\n\n");

    //f) Cargar valores y probar las funciones
    printf("\nIngresar valor 1: ");
    scanf("%d",&valor1);
    getchar();
    printf("\nIngresar valor 2: ");
    scanf("%d",&valor2);
    getchar();

    /* d) Dado dos parámetros de entrada, deberá invertir los valores entre     
    ambos. */   
    printf("\nvalor1=%d, valor2=%d",valor1,valor2);
    printf("\nInvierto valores");
    invertir(&valor1, &valor2); //Notar que aqui x e y no fueron declarados como punteros por eso usamos &
    printf("\nvalor1=%d, valor2=%d",valor1,valor2);
    printf("\n");
    /*  Para pasar las direcciones de memoria de num1 y num2 a la función invertir, 
    se utilizan los operadores & (que obtiene la dirección de memoria de una variable) 
    en la llamada invertir(&num1, &num2). Esto permite a la función invertir acceder 
    y modificar directamente los valores de num1 y num2 */

    /* e) Dado dos parámetros de entrada, deberá devolverlos de forma
    ordenada, en el primer parámetro el menor y en el segundo el mayor. */
    printf("\nvalor1=%d, valor2=%d",valor1,valor2);
    printf("\nOrdeno valores");
    ordenar(&valor1,&valor2);
    printf("\nvalor1=%d, valor2=%d",valor1,valor2);
    return 0;
}