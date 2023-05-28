#include <stdio.h>
int main()
{
    float sa, aumento, ns;
    printf("Digite seu salario atual\n\n");
      scanf("%f", &sa);
      if (sa<250)
      {
       aumento = 0.2*sa;
       ns = sa + aumento;
       printf("A porcentagem de aumento e 20 por cento\n\n");
        printf("Seu aumento e de %.2f\n\n", aumento);
        printf("Seu novo salario e de %.2f", ns);
       
      }
      else if (sa>=250 && sa<900)
      {
      aumento = 0.15*sa;
       ns = sa + aumento;
       printf("A porcentagem de aumento e 15 por cento\n\n");
        printf("Seu aumento e de %.2f\n\n", aumento);
        printf("Seu novo salario e de %.2f", ns);

      }
       else if (sa>=900 && sa<1500)
      {
      aumento = 0.10*sa;
      ns = sa + aumento;
       printf("A porcentagem de aumento e 10 por cento\n\n");
        printf("Seu aumento e de %.2f\n\n", aumento);
        printf("Seu novo salario e de %.2f", ns);
    
      }
      else
      {
        aumento = 0.05*sa;
        ns = sa + aumento;

        printf("A porcentagem de aumento e 5 por cento\n\n");
        printf("Seu aumento e de %.2f\n\n", aumento);
        printf("Seu novo salario e de %.2f", ns);
    
      }
}
