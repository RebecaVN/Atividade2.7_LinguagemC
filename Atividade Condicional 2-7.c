//Atividade 07: Na declaração de imposto de renda devem constar os dados: nome do contribuinte, CPF, renda anual e número de dependentes. Os cálculos são feitos da forma a seguir. • Desconto de R$ 110,00 por dependente. • Com base na renda líquida (renda anual menos descontos) é calculada a alíquota de contribuição de acordo com a tabela: 
 
#include <stdio.h>

int main() {
    char nome[100], cpf[12];
    float rendaAnual, rendaLiquida, aliquota, valorImposto;
    int numDependentes;

    printf("Informe o nome do contribuinte: ");
    scanf("%[^\n]s", nome);
    getchar(); // limpa o buffer de entrada

    printf("Informe o CPF do contribuinte (sem pontos ou traços): ");
    scanf("%s", cpf);

    printf("Informe a renda anual do contribuinte: ");
    scanf("%f", &rendaAnual);

    printf("Informe o número de dependentes do contribuinte: ");
    scanf("%d", &numDependentes);

    rendaLiquida = rendaAnual - (numDependentes * 110.0);

    if (rendaLiquida <= 800.0) {
        aliquota = 0.0;
    } else if (rendaLiquida <= 4000.0) {
        aliquota = 0.025;
    } else if (rendaLiquida <= 9000.0) {
        aliquota = 0.05;
    } else {
        aliquota = 0.1;
    }

    valorImposto = rendaLiquida * aliquota;

    printf("\n\n=== Dados do contribuinte ===\n");
    printf("Nome: %s\n", nome);
    printf("CPF: %s\n", cpf);
    printf("Renda Anual: R$ %.2f\n", rendaAnual);
    printf("Número de Dependentes: %d\n", numDependentes);
    printf("\n\n=== Resultado do Cálculo ===\n");
    printf("Renda Líquida: R$ %.2f\n", rendaLiquida);
    printf("Alíquota: %.2f%%\n", aliquota * 100.0);
    printf("Valor do Imposto: R$ %.2f\n", valorImposto);

    return 0;
}

