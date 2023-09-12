//Atividade 07: Na declara��o de imposto de renda devem constar os dados: nome do contribuinte, CPF, renda anual e n�mero de dependentes. Os c�lculos s�o feitos da forma a seguir. � Desconto de R$ 110,00 por dependente. � Com base na renda l�quida (renda anual menos descontos) � calculada a al�quota de contribui��o de acordo com a tabela: 
 
#include <stdio.h>

int main() {
    char nome[100], cpf[12];
    float rendaAnual, rendaLiquida, aliquota, valorImposto;
    int numDependentes;

    printf("Informe o nome do contribuinte: ");
    scanf("%[^\n]s", nome);
    getchar(); // limpa o buffer de entrada

    printf("Informe o CPF do contribuinte (sem pontos ou tra�os): ");
    scanf("%s", cpf);

    printf("Informe a renda anual do contribuinte: ");
    scanf("%f", &rendaAnual);

    printf("Informe o n�mero de dependentes do contribuinte: ");
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
    printf("N�mero de Dependentes: %d\n", numDependentes);
    printf("\n\n=== Resultado do C�lculo ===\n");
    printf("Renda L�quida: R$ %.2f\n", rendaLiquida);
    printf("Al�quota: %.2f%%\n", aliquota * 100.0);
    printf("Valor do Imposto: R$ %.2f\n", valorImposto);

    return 0;
}

