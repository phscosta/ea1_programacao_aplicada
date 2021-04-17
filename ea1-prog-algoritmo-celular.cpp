#include <iostream>
#include <string>
#include <tuple>

using namespace std;

bool VerificaPalavra (int tam,string palavra)
{
    if (palavra.size() <= tam) 
    {

    }
    else
    {
        return false;
    }
}

tuple <int, int> RetornaTecla (string palavra, int n)
{
    int teclado[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int tecla, n_pressao;

    if (palavra[n] == 'a')
    {
        tecla = teclado[0];
        n_pressao = 1;

        terminate;
    }
    else
    {
        if (palavra[n] = 'b')
        {
            tecla = teclado[0];
            n_pressao = 2;
            
            terminate;
        }
        else
        {
            if (palavra[n] = 'c')
            {
                tecla = teclado[0];
                n_pressao = 3;

                terminate;
            }
            else
            {
                if (palavra[n] = 'd')
                {
                    tecla = teclado[1];
                    n_pressao = 1;

                    terminate;
                }
                else
                {
                    if (palavra[n] = 'e')
                    {
                        tecla = teclado[1];
                        n_pressao = 2;

                        terminate;
                    }
                    else
                    {
                        if (palavra[n] = 'f')
                        {
                            tecla = teclado[1];
                            n_pressao = 3;

                            terminate;
                        }
                        else
                        {
                            if (palavra[n] = 'g')
                            {
                                tecla = teclado[2];
                                n_pressao = 1;

                                terminate;
                            }
                            else
                            {
                                if (palavra[n] = 'h')
                                {
                                    tecla = teclado[2];
                                    n_pressao = 2;

                                    terminate;
                                }
                                else
                                {
                                    if (palavra[n] = 'i')
                                    {
                                        tecla = teclado[2];
                                        n_pressao = 3;

                                        terminate;
                                    }
                                    else
                                    {
                                        if (palavra[n] = 'j')
                                        {
                                            tecla = teclado[3];
                                            n_pressao = 1;

                                            terminate;
                                        }
                                        else
                                        {
                                            if (palavra[n] = 'k')
                                            {
                                                tecla = teclado[3];
                                                n_pressao = 2;

                                                terminate;
                                            }
                                            else
                                            {
                                                if (palavra[n] = 'l')
                                                {
                                                    tecla = teclado[3];
                                                    n_pressao = 3;

                                                    terminate;
                                                }
                                                else
                                                {
                                                    if (palavra[n] = 'm')
                                                    {
                                                        tecla = teclado[4];
                                                        n_pressao = 1;

                                                        terminate;
                                                    }
                                                    else
                                                    {
                                                        if (palavra[n] = 'n')
                                                        {
                                                            tecla = teclado[4];
                                                            n_pressao = 2;

                                                            terminate;
                                                        }
                                                        else
                                                        {
                                                            if (palavra[n] = 'o')
                                                            {
                                                                tecla = teclado[4];
                                                                n_pressao = 3;

                                                                terminate;
                                                            }
                                                            else
                                                            {
                                                                if (palavra[n] = 'p')
                                                                {
                                                                    tecla = teclado[5];
                                                                    n_pressao = 1;

                                                                    terminate;
                                                                }
                                                                else
                                                                {
                                                                    if (palavra[n] = 'q')
                                                                    {
                                                                        tecla = teclado[5];
                                                                        n_pressao = 2;

                                                                        terminate;
                                                                    }
                                                                    else
                                                                    {
                                                                        if (palavra[n] = 'r')
                                                                        {
                                                                            tecla = teclado[5];
                                                                            n_pressao = 3;

                                                                            terminate;
                                                                        }
                                                                        else
                                                                        {
                                                                            if (palavra[n] = 's')
                                                                            {
                                                                                tecla = teclado[5];
                                                                                n_pressao = 4;

                                                                                terminate;
                                                                            }
                                                                            else
                                                                            {
                                                                                if (palavra[n] = 't')
                                                                                {
                                                                                    tecla = teclado[6];
                                                                                    n_pressao = 1;

                                                                                    terminate;
                                                                                }
                                                                                else
                                                                                {
                                                                                    if (palavra[n] = 'u')
                                                                                    {
                                                                                        tecla = teclado[6];
                                                                                        n_pressao = 2;

                                                                                        terminate;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        if (palavra[n] = 'v')
                                                                                        {
                                                                                            tecla = teclado[6];
                                                                                            n_pressao = 3;

                                                                                            terminate;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            if (palavra[n] = 'w')
                                                                                            {
                                                                                                tecla = teclado[7];
                                                                                                n_pressao = 1;

                                                                                                terminate;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                if (palavra[n] = 'x')
                                                                                                {
                                                                                                    tecla = teclado[7];
                                                                                                    n_pressao = 2;

                                                                                                    terminate;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    if (palavra[n] = 'y')
                                                                                                    {
                                                                                                        tecla = teclado[7];
                                                                                                        n_pressao = 3;

                                                                                                        terminate;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        tecla = teclado[7];
                                                                                                        n_pressao = 4; 

                                                                                                        terminate;  
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
            
    }

    return make_tuple(tecla, n_pressao);
}


int main () {
    string palavra;
    int tam = 50;
    bool result;
    int tecla, pressao;
    tuple <int, int> dados(tecla, pressao);

    cout << "Informe o que deseja pesquisar: ";
    cin >> palavra;

    result = VerificaPalavra(tam, palavra);

    do
    {
        cout << "Informe o que deseja pesquisar: ";
        cin >> palavra;
        result = VerificaPalavra(tam, palavra);
    } while (result != true);
    
    for (int n = 0; n < palavra.size(); n++)
    {
        tie(tecla, pressao) = RetornaTecla(palavra, n);

        cout << '#' << tecla << '=' << pressao << endl;
    }

    return 0;
}
