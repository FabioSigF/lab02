#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  
  /* EX001
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    printf( "O numero inteiro digitado foi: %d", num );
  */

  /* EX002
    float num;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    printf("O numero que voce digitou foi: %f", num);
  */

  /* EX003
    int n1, n2, n3, soma;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite mais um numero inteiro: ");
    scanf("%d", &n3);
    soma = n1 + n2 + n3;
    printf("A soma dos seus tres numeros foi: %d", soma);
  */

  /* EX004
    float num, quadrado;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    quadrado = num * num;
    printf("O quadrado de %f eh %f", num, quadrado);
  */

  /* EX005
    float num, quinta;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    quinta = num/5;
    printf("A quinta parte do seu numero real eh: %f", quinta);
  */

  /* EX006
    float celsius, fahrenheint;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheint = celsius*(9.0/5.0)+32;
    printf("A temperatura convertida para graus Fahrenheit eh %f .", fahrenheint);
  */

  /* EX007 
    float c, f;
    printf("Digite a temperatura em graus fahrenheint: ");
    scanf("%f", &f);
    c= 5.0 * (f - 32.0) / 9.0;
    printf("A temperatura convertida para graus celsius eh: %f", c);
  */

  /* EX008
    float k, c;
    printf("Digite uma temperatura em graus Kelvin: ");
    scanf("%f", &k);
    c = k-273.15;
    printf("A temperatura em graus Celsius eh: %f", c);
  */

  /* EX009
    float celsius, kelvin;
    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("A temperatura convertida para kelvin eh: %f", kelvin);

  */

  /* EX010
    float km, ms;
    printf("Digite a sua velocidade em KM/h: ");
    scanf("%f", &km);
    ms=km/3.6;
    printf("A velocidade convertida para m/s eh: %f", ms);
  */

  /* EX011
    float km, ms;
    printf("Digite a sua velocidade em m/s: ");
    scanf("%f", &ms);
    km= ms * 3.6;
    printf("Sua velocidade em KM/h eh: %f", km);
  */

  /* EX012 
    float milhas, km;
    printf("Digite a sua distancia em milhas: ");
    scanf("%f", &milhas);
    km = 1.61*milhas;
    printf("A sua distancia em Km/h eh: %f", km);
  */
  
  /*EX013
    float km, milhas;
    printf("Digite a sua distancia em quilometros: ");
    scanf("%f", &km);
    milhas = km/1.61;
    printf("A sua distancia em milhas/h eh: %f", milhas);
  */

  /*EX014
    float grau, rad; 
    const float pi= 3.141592;
    printf("Digite o valor de um angulo em graus: ");
    scanf("%f", &grau);
    rad = grau*pi/180;
    printf("Ao converter o angulo em graus para radianos, temos: %f", rad);
  */

  /*EX015
    float rad, grau;
    const float pi= 3.141592;
    printf("Digite o valor do angulo em radianos: ");
    scanf("%f", &rad);
    grau = rad*180/pi;
    printf("Ao converter o angulo em radianos para graus, temos: %f", grau);
  */
  
  /*EX016
    float pol, cm;
    printf("Digite um valor de comprimento em polegadas: ");
    scanf("%f", &pol);
    cm = pol*2.54;
    printf("Ao converter o valor de polegadas para centimetros, temos: %f", cm);
  */

  /*EX017
    float pol, cm;
    printf("Digite um valor de comprimento em centimetros: ");
    scanf("%f", &cm);
    pol = cm/2.54;
    printf("Ao converter o valor de centimetros para polegadas, temos: %f", pol);
  */

  /*EX018
    float mc, li;
    printf("Digite um valor de volume em metros cubicos: ");
    scanf("%f", &mc);
    li = 1000*mc;
    printf("Ao converter o valor de volume em metros cubicos para litros, temos: %f", li);
  */

  /*EX019
    float li, mc;
    printf("Digite um valor de volume em litros: ");
    scanf("%f", &li);
    mc = li/1000;
    printf("Ao converter o valor de volume em litros para metros cubicos, temos: %f", mc);
  */

  /*EX020
    float kg, lib;
    printf("Digite um valor em quilogramas: ");
    scanf("%f", &kg);
    lib = kg/0.45;
    printf("Ao converter o valor de quilogramas para libras, temos: %f", lib);
  */

  /*EX021
    float kg, lib;
    printf("Digite um valor em libras: ");
    scanf("%f", &lib);
    kg = lib*0.45;
    printf("Ao converter o valor de libras para quilogramas, temos: %f", kg);
  */

  /*EX022
    float jard, m;
    printf("Digite um valor em jardas: ");
    scanf("%f", &jard);
    m = 0.91*jard;
    printf("Ao converter o valor de jardas para metros, temos: %f", m);
  */

  /*EX023
    float jard, m;
    printf("Digite um valor em metros: ");
    scanf("%f", &m);
    jard = m/0.91;
    printf("Ao converter o valor de metros para jardas, temos: %f", jard);
  */

  /*EX024
    float m2, ac;
    printf("Digite um valor de area em metros quadrados: ");
    scanf("%f", &m2);
    ac = m2*0.000247;
    printf("Ao converter o valor de area em metros quadrados para acres, temos: %f", ac);
  */

  /*EX025
    float m2, ac;
    printf("Digite um valor de area em acres: ");
    scanf("%f", &ac);
    m2 = ac*4048.58;
    printf("Ao converter o valor de area em acres para metros quadrados, temos: %f", m2);
  */

  /*EX026
    float m2, hec;
    printf("Digite um valor de area em metros quadrados: ");
    scanf("%f", &m2);
    hec = m2*0.0001;
    printf("Ao converter o valor de area em metros quadrados para hectares, temos: %f", hec);
  */

  /*EX027
    float m2, hec;
    printf("Digite um valor de area em hectares: ");
    scanf("%f", &hec);
    m2 = hec*10000;
    printf("Ao converter o valor de area em hectares para metros quadrados, temos: %f", m2);
  */

  /*EX028
    int n1, n2, n3, soma;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);
    soma = (n1*n1) + (n2*n2) + (n3*n3);
    printf("Ao somar os tres valores ao quadrado, temos: %d", soma);
  */

  /*EX029
    float n1, n2, n3, n4, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    media = (n1+n2+n3+n4)/4;
    printf("Ao calcular a media das quatro notas inseridas, temos: %.2f", media);
  */

  /*EX030
    float real, dolar;
    printf("Digite um valor em real: ");
    scanf("%f", &real);
    dolar = real/5.31; //cotacao 14/10, as 14:35
    printf("Ao converter o valor em real para dolar, temos: $%.2f", dolar);
  */

  /*EX031
    int num, ant, suc;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    ant = num-1;
    suc = num+1;
    printf("O numero digitado foi %d, o seu antecessor eh %d e o seu sucessor %d.", num, ant, suc);
  */

  /*EX032
    int num, suc3, ant2, soma;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    suc3 = num*3+1;
    ant2 = num*2-1;
    soma = suc3 + ant2;
    printf("O numero digitado foi %d, a soma do sucessor de seu triplo (%d) com o antecessor de seu dobro (%d) foi: %d", num, suc3, ant2, soma);
  */

  /*EX033
    float l1, l2, area;
    printf("Digite o tamanho do primeiro lado do quadrado: ");
    scanf("%f", &l1);
    printf("Digite o tamanho do segundo lado do quadrado: ");
    scanf("%f", &l2);
    area = l1*l2;
    printf("Sendo a medida do primeiro lado do quadrado %.1f e o segundo lado %.1f, a area do quadrado eh: %.1f", l1, l2, area);
  */

  /*EX034
    float raio, area;
    const float pi = 3.141592;

    printf("Digite o valor do raio de um circulo: ");
    scanf("%f", &raio);
    area = pi*(raio*raio);
    printf("A area do circulo corresponde a: %.1f", area);
  */

  /*EX035
    float a, b, hipotenusa;
    printf("Digite o valor do cateto A(maior): ");
    scanf("%f", &a);
    printf("Digite o valor do cateto B(menor): ");
    scanf("%f", &b);
    hipotenusa = sqrt((a*a) + (b*b));
    printf("Sendo o cateto A=%.1f e o cateto B=%.1f, a hipotenusa do triangulo eh: %.2f", a, b, hipotenusa);
  */

  /*EX036
    float h, r, vol;
    const float pi = 3.141592;
    printf("Digite o valor da altura do cilindro circular: ");
    scanf("%f", &h);
    printf("Digite o valor do raio do cilindro circular: ");
    scanf("%f", &r);
    vol = pi*(r*r)*h;
    printf("Seja %.1f a altura do cilindro e %.1f o raio, o volume do cilindro circular eh: %.1f .", h, r, vol);
  */

  /*EX037
    float preco, pdesconto;
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    pdesconto = preco*0.88;
    printf("O produto tem o valor de %.1f, mas com o desconto de doze porcento, fica: %.2f .", preco, pdesconto);
  */

  /*EX038
    float sal, nsal;
    printf("Digite o valor do seu salario: ");
    scanf("%f", &sal);
    nsal = sal*1.25;
    printf("Dia de sorte! O seu salario de %.1f sofreu um aumento de 25 porcento e agora vale: %.1f", sal, nsal);
  */

  /*EX039
  float g1, g2, g3;
  const int p = 780000;
  g1 = p*0.46;
  g2 = p*0.32;
  g3 = p - (g1 + g2);
  printf("Sobre o premio de R$%d, o primeiro ganhador tera R$%.2f, o segundo ganhara R$%.2f e o terceiro ganhara R$%.2f.", p, g1, g2, g3);
  */

  /*EX040
  const int diaria = 30;
  int dias;
  float sal;
  printf("Digite a quantidade de dias voce trabalhou: ");
  scanf("%d", &dias);
  sal = (diaria * dias)*0.92;
  printf("Voce recebera um salario liquido de R$%.2f.", sal);
  */

  /*EX041
  float vhora, nhoras, sal;
  printf("Digite quanto vale a sua hora trabalhada: ");
  scanf("%f", &vhora);
  printf("Digite quantas horas voce trabalhou: ");
  scanf("%f", &nhoras);
  sal = (vhora*nhoras)*1.10;
  printf("Voce recebera o valor de %.2f, contando com o adicional de 10 porcento. Aproveite!", sal);
  */

  /*EX042
    float salbase, grat, imp, salfinal;
    printf("Digite qual o seu salario base: ");
    scanf("%f", &salbase);
    grat = salbase*0.05;
    imp = salbase*0.07;
    salfinal = salbase + grat - imp;
    printf("Sendo o seu salario base R$%.2f, voce recebeu R$%.2f de gratificacao e foi descontado R$%.2f de impostos. Dessa forma, o seu salario final foi %.2f.", salbase, grat, imp, salfinal);
  */

  /*EX043
  */
    float vtotal, vparcela, comissao;
    int qparc;
    printf("Digite o valor total do produto: ");
    scanf("%f", &vtotal);
    printf("Quantas parcelas foi dividido? ");
    scanf("%d", &qparc);
    if (qparc > 1) {
      printf("Voce parcelou o valor de %.2f em %d vezes.\n", vtotal, qparc);
      vparcela = vtotal/qparc;
      printf("Sendo assim, cada parcela valerah %.2f por mes.", vparcela);
      comissao = vtotal*0.05;
      printf("O vendedor ganha de comissao %.2f.", comissao);
    } else
      vtotal *= 0.90;
      comissao = vtotal*0.05;
      printf("Com o desconto de dez porcento, o valor total a pagar sera: %.2f. O vendedor ganha de comissao %.2f.", vtotal, comissao);

  return 0;
}