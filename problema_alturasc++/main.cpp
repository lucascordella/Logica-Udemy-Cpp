#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, nmenores = 0;
    double alturatotal = 0, alturamedia, percentualMenores;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nomes[N];
    int idades[N];
    double alturas[N];

    for (int i=0; i<N; i++)
    {
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    for (int i=0; i<N; i++)
    {
        if (idades[i] < 16)
        {
            nmenores++;
        }
        alturatotal = alturatotal + alturas[i];
    }

    alturamedia = alturatotal / N;
    percentualMenores = ((double)nmenores / N) * 100.0;

    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << alturamedia << endl;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << percentualMenores << "%" << endl;

    for (int i=0; i<N; i++)
    {
        if (idades[i] < 16)
        {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
