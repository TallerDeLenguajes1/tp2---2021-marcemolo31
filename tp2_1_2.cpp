#include <stdio.h>
#include <conio.h>
#define N 4
#define M 5

int main(){

    int f,c;
    double mt[N][M];
    double *puntMT = &mt[0][0];

    //Lleno la matriz de numeros
    for(f = 0;f<N; f++){
        
        for(c = 0;c<M; c++){
            mt[f][c] = f*M+c;
        }
    }
    
    //muestro por pantalla la matriz usando punteros
    for(f = 0;f<N; f++){
        
        for(c = 0;c<M; c++){
            printf("%.0lf ", *(puntMT + (f * M + c)));
        }
        printf("  \n");
    }
    
    return 0;
}