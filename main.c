#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;


    printf("\n");
    printf("\n");
    printf("\n");
    printf("-------------------------------------------------------------------------------------");
    printf("\n");
    printf("\n");
    printf("\n");
     // Capturando os valores dos coeficientes
    printf("       Digite os coeficientes da equacao quadratica (a   b   c): \n" );
    printf("\n");
    printf("\n");


    printf("                            Digite o VALOR A:  ");
    scanf("%f", &a);
    printf("\n");

    printf("                            Digite o VALOR B:  ");
    scanf("%f", &b);
    printf("\n");


    printf("                            Digite o VALOR C:  ");
    scanf("%f", &c);
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------------------------------------------");
    printf("\n");
    printf("\n");




    // Calculando o delta
    delta = b * b - 4 * a * c;
    printf("          Calculando o DELTA  :   DELTA = B^2 - 4.A.C\n");
    printf("\n");
    printf("                                  DELTA = %.0f^2 - 4 X %.0f X %.0f\n", b, a, c);
    printf("\n");
    printf("                                  DELTA = %.0f\n", delta);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("---------------------------------------------------------------------------------------");
    printf("\n");

    // Verificando o tipo de raiz
    if (delta > 0) {
        // Duas raízes reais e diferentes
        printf("  -------- DELTA e positivo, entao temos duas raizes reais e diferentes -------------\n");
        printf("---------------------------------------------------------------------------------------");
        printf("\n");
        printf("\n");
        printf("\n");
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("\n");
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\n");
        printf("            Calculando x1: x1 = (-B + ^(delta)) / (2 X A)\n");
        printf("\n");
        printf("                           x1 = (%.0f + ^(%.0f)) / (2 X %.0f)\n", -b, delta, a);
        printf("\n");
        printf("                           x1 = %.0f\n", x1);
        printf("\n");
        printf("\n");


        printf("            Calculando x2: x2 = (-b - ^(delta)) / (2 X A)\n");
        printf("\n");
        printf("                           x2 = (%.0f - ^(%.0f)) / (2 X %.0f)\n", -b, delta, a);
        printf("\n");
        printf("                           x2 = %.0f\n", x2);
        printf("\n");
        printf("\n");

        printf("           As RAIZES sao x1 = %.0f e x2 = %.0f\n", x1, x2);
        printf("\n");
        printf("---------------------------------------------------------------------------------------");
        printf("\n");
        printf("\n");
        printf("\n");
    } else if (delta == 0) {
        // Duas raízes reais e iguais
        printf("--------------- DELTA e zero, entao temos duas raizes reais e iguais ------------------\n");
        printf("---------------------------------------------------------------------------------------");
        x1 = -b / (2 * a);
        printf("\n");
        printf("\n");
        printf("\n");

        printf("          Calculando x: x = -B / (2 X A)\n");
        printf("                        x = %.0f / (2 X %.0f)\n", -b, a);
        printf("                        x = %.0f\n", x1);
        printf("\n");
        printf("          A raiz dupla e x = %.0f\n", x1);
        printf("\n");
        printf("\n");
    } else {
        // Raízes complexas
        printf("  -------------- DELTA e negativo, entao temos raizes complexas ---------------------\n");
        printf("---------------------------------------------------------------------------------------");
        printf("\n");
        printf("\n");
        printf("\n");
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-delta) / (2 * a);
        printf("          Calculando a PARTE REAL: PARTE REAL = -B / (2 X A)\n");
        printf("\n");
        printf("                                   PARTE REAL = %.0f / (2 X %.0f)\n", -b, a);
        printf("\n");

        printf("                                   PARTE REAL = %.0f\n", realPart);
        printf("\n");
        printf("\n");

        printf("          Calc a PARTE IMAGINARIA: PARTE IMAGINARIA = ^(-DELTA) / (2 X A)\n");
        printf("\n");
        printf("                                   PARTE IMAGINARIA = ^(%.0f) / (2 X %.0f)\n", -delta, a);
        printf("\n");
        printf("                                   PARTE IMAGINARIA = %.0fi\n", imaginaryPart);

        printf("\n");
        printf("\n");

        printf("          As RAIZES complexas sao x1 = %.0f + %.0fi e x2 = %.0f - %.0fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        printf("\n");
        printf("\n");
        printf("-------------------------------------------------------------------------------------");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    }

    return 0;
}
