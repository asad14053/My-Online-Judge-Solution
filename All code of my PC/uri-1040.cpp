#include<bits/stdc++.h>
using namespace std;
int main()
{

    double a,b,c,d,e,media;

    cin >> a >> b >> c >> d;

    media = (a*2 + b*3 + c*4 + d*1)/(10.0);
    printf("Media: %.1f\n", media);

    if(media >= 7.0)
        cout << "Aluno aprovado."<<endl;
    if(media < 5.0)
        cout << "Aluno reprovado."<<endl;
    if(media >= 5.0 && media < 7.0)
    {
        cout << "Aluno em exame."<<endl;
        cin >> e;
        printf("Nota do exame: %.1f\n", e);
        if((media + e)/2.0 >= 5.0)
            cout << "Aluno aprovado."<<endl;
        else
            cout << "Aluno reprovado."<<endl;
        printf("Media final: %.1f\n", (media + e)/2.0);
    }
    return 0;
}
