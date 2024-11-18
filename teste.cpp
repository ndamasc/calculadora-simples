#include <iostream>

using namespace std;

void escolhe_nums(float &n1, float &n2) {
    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;

    cout << "Digite o segundo numero: " << endl;
    cin >> n2;
}

float escolhe_operador(float n1, float n2, int operador) {
    float result = 0;  // Inicializa o resultado com 0

    cout << "Escolha a operacao: \n";
    cout << "1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n";
    cin >> operador;

    switch (operador) {
        case 1:
            result = n1 + n2;
            break;
        case 2:
            result = n1 - n2;
            break;
        case 3:
            result = n1 * n2;
            break;
        case 4:
            if (n2 == 0) {
                cout << "Divisao por 0 nao permitida!" << endl;
                return 0;  // Retorna 0 para evitar erro
            }
            result = n1 / n2;
            break;
        default:
            cout << "Operacao invalida!" << endl;
            break;
    }

    return result;
}

int main() {
    int operador, teste = 1;
    float n1, n2, result;

    while (teste) {
        
        escolhe_nums(n1, n2);
        result = escolhe_operador(n1, n2, operador);
        cout << "Resultado: " << result << endl;

    
        cout << "Continua? (pressione 0 para sair): ";
        cin >> teste;
    }

    return 0;
}
