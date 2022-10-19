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
    float vtotal, vparcela, comissao;
    int qparc;
    printf("Digite o valor total do produto: ");
    scanf("%f", &vtotal);
    printf("Quantas parcelas foi dividido? ");
    scanf("%d", &qparc);
    if (qparc > 1) {
      printf("Voce parcelou o valor de %.2f em %d vezes.\n", vtotal, qparc);
      vparcela = vtotal/qparc;
      printf("Sendo assim, cada parcela valerah %.2f por mes.\n", vparcela);
      comissao = vtotal*0.05;
      printf("O vendedor ganha de comissao %.2f.", comissao);
    } else {
      vtotal *= 0.90;
      comissao = vtotal*0.05;
      printf("Com o desconto de dez porcento, o valor total a pagar sera: %.2f. O vendedor ganha de comissao %.2f.", vtotal, comissao);
    }
  */

  /*EX044
    float hDegrau, hTotal;
    int hDegrauInt, hTotalInt, qDegraus;
    printf("Qual a altura em centimetros de cada degrau da escada? ");
    scanf("%f", &hDegrau);
    printf("Qual altura em centimetros voce quer chegar na escada? ");
    scanf("%f", &hTotal);
    //Vou transformar os valores float em inteiro para verificar se é uma divisão exata.
    hDegrauInt = hDegrau;
    hTotalInt = hTotal;
    //Se a divisão em float for maior que a divisão inteira, ou seja, não for uma divisão exata, o usuário vai precisar subir um degrau a mais para alcançar a altura que ele quer. Caso contrário, ele ficará um degrau abaixo da altura que deseja.
    if((hDegrau/hTotal) > (hDegrauInt/hTotalInt))
      qDegraus = (hTotal/hDegrau) + 1;
    else
      qDegraus = (hDegrauInt/hTotalInt);

    printf("Sendo a altura de cada degrau %.2fcm e a altura pedida %.2fcm, voce deve subir %d degraus.", hDegrau, hTotal, qDegraus);
  */

  /*EX045
  char upper;
  int lower;
  printf("Digite uma letra maiuscula: ");
  upper = getchar();
  lower = upper + 32;
  printf("O caractere digitado foi %c. Em letra minuscula, fica: %c", upper, lower);
  */

  /*EX046
  int num, a, b,c;
  printf("Digite um numero inteiro entre 100 e 999: ");
  scanf("%d", &num);
  if((num >= 100) && (num <= 999)){
    a = num/100;
    b = (num%100)/10;
    c = (num%100)%10;
    printf("O numero digitado foi %d. Ao contrario, fica: %d%d%d.", num, c, b, a);
  } else
    printf("O numero digitado eh invalido. FIM.");
  */

  /*EX047
  int num, u, d, c, m;
  printf("Digite um numero inteiro entre 1000 e 9999: ");
  scanf("%d", &num);
  if((num >= 1000) && (num <= 9999)){
    m = num/1000;
    c = (num%1000)/100;
    d = ((num%1000)%100)/10;
    u = ((num%100)%100)%10;
    printf("O numero digitado foi %d. Digitado em separadament, fica:\n%d\n%d\n%d\n%d", num, m, c, d, u);
  } else
    printf("O numero digitado eh invalido. FIM.");
  */

  /*EX048
  int seg, h, m, ss;

  printf("Digite uma quantidade de segundos: ");
  scanf("%d", &seg);
  if (seg > 60)
  {
    if ((seg > 60) && (seg <= 3600))
    {
      m = seg / 60;
      ss = seg % 60;
      printf("O valor digitado foi %d segundos, o que corresponde a %d minutos e %d segundos.", seg, m, ss);
    }
    else
    {
      h = seg / 3600;
      m = (seg - (h * 3600)) / 60;
      ss = (seg - (h * 3600)) % 60;
      printf("O valor digitado foi %d segundos, o que corresponde a %d horas, %d minutos e %d segundos.", seg, h, m, ss);
    }
  }
  else
    printf("O valor digitado foi %d segundos.", seg);
  */

  /*EX049

  int h, m, s, totSeg, exp, d, nh, nm, ns;
  printf("Digite o horario de inicio (HH:MM:SS): ");
  scanf("%d:%d:%d", &h, &m, &s);
  printf("Digite a duracao da experiencia em segundos: ");
  scanf("%d", &exp);

  //Se o valor digitado foi inválido, será avisado ao usuário e o programa interrompido.
  //Valores inválidos:
  //  -Horas menor que 0 ou maior que 23;
  //  -Minutos menor que 0 ou maior de 59;
  //  -Segundos menor que 0 ou maior que 59;
  //  -Tempo de experiência menor que 0;

  if ((h < 0) || (h > 23) || (m < 0) || (m > 59) || (s < 0) || (s > 59) || (exp < 0))
  {
    printf("Valor digitado invalido. Siga as especificacoes informadas no enunciado.");
  }
  else
  {
    // Total de segundos que tem o horario de início
    totSeg = (h * 3600) + (m * 60) + s;
    // Horario de início(em segundos) + tempo de experiência
    totSeg += exp;

    // Se o total de segundos for menor que 24 horas, não precisamos dizer a quantidade de dias
    if (totSeg < 86400)
    {
      nh = totSeg / 3600;

      nm = (totSeg - (h * 3600)) / 60;
      if (nm == 60)
        nm = 0;

      ns = (totSeg - (h * 3600)) % 60;
      printf("A experiencia tem duracao de %d segundos.\nSendo o inicio da execucao %d:%d:%d, o programa acaba as %d:%d:%d do mesmo dia.", exp, h, m, s, nh, nm, ns);
    }
    // Se o total de segundos for maior que 24 horas, informamos quantos dias após a execução o programa estará concluído
    else
    {
      d = totSeg / 86400;
      totSeg -= d * 86400;
      nh = totSeg / 3600;
      nm = (totSeg - (nh * 3600)) / 60;
      if (nm == 60)
        nm = 0;

      ns = (totSeg - (nh * 3600)) % 60;
      printf("A experiencia tem duracao de %d segundos.\nSendo o inicio da execucao %d:%d:%d, o programa acaba %d dia(s) apos a data inicial, no horario de %d:%d:%d.", exp, h, m, s, d, nh, nm, ns);
    }
  }
  */

  /*EX050
  int idade, mes, ano;
  const int anoAtual = 2022;
  const int mesAtual = 10;
  printf("Qual a sua idade? ");
  scanf("%d", &idade);
  printf("Qual mes(numero) voce faz aniversario? ");
  scanf("%d", &mes);
  if((idade < 0) || (idade > 2022) || (mes <= 0)) {
    printf("A idade ou mes que você digitou nao eh valido. FIM DO PROGRAMA.");
  } else {
    ano = (((anoAtual*12) + mesAtual) - ((idade*12) + mes))/12;
    printf("Voce nasceu no ano de %d.", ano);
  }
  */

  /*EX051
  float x, y, dist;

  printf("Digite a coordenada de x: ");
  scanf("%f", &x);
  printf("Digite a coordenada de y: ");
  scanf("%f", &y);
  dist = sqrt((x * x) + (y * y));

  printf("A distancia de (%.1f,%.1f) da origem eh: %.1f", x, y, dist);
  */

  /*EX052
  float totP, a, b, c, totAm, pa, pb, pc;
  printf("Qual o valor do premio? ");
  scanf("%f", &totP);
  printf("Digite a quantidade que o amigo A investiu: ");
  scanf("%f", &a);
  printf("Digite a quantidade que o amigo B investiu: ");
  scanf("%f", &b);
  printf("Digite a quantidade que o amigo C investiu: ");
  scanf("%f", &c);
  //Calcular quanto todos doaram
  totAm = a + b + c;
  pa = (totP * a) / totAm;
  pb = (totP * b) / totAm;
  pc = (totP * c) / totAm;

  printf("Sendo o premio %.2f:\n  O amigo A recebe: %.2f\n  O amigo B recebe: %.2f\n O amigo C recebe: %.2f", totAm, pa, pb, pc);
  */

  /*EX053
  float comp, larg, custo;
  const float pmTela = 70.00;
  printf("Qual o comprimento do terreno em metros? ");
  scanf("%f", &comp);
  printf("Qual a largura do terreno em metros? ");
  scanf("%f", &larg);
  custo = (comp*2 + larg*2)*pmTela;
  
  printf("O metro da tela eh R$%.2f. Para cercar o terreno de %.2fm de comprimento e %.2fm de largura, o preco total sera: R$%.2f.", pmTela, comp, larg, custo);
  */
  return 0;
}