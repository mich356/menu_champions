#include <stdio.h>
#include <conio.h>

int main()
{
    int p=0;
    int op;

    while(op!=4)
    {
    	printf("champions league\n");
        printf("1.- Octavos\n");
        printf("2.- Cuartos\n");
        printf("3.- Semifinal\n");
        printf("4.- Final\n");
        printf("5.- Campeon\n");
        printf("6.- Marcador de octavos\n");
        printf("7.- Marcador de cuartos\n");
        printf("8.- Marcador de semifinal\n");
        printf("9.- Marcador de final\n");
        printf("Indica la opcion: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1: printf("Barcelona vs O.Lyon\nBayern vs Liverpool\nJuentus vs Atletico\nManchester vs Schalke\nOporto vs roma\nPSG vs Manchester utd\nBorussia vs Totthenhan\nReal madrid vs Ajax\n\n");break;
            case 2: printf("Manchester vs Tottenhan\nOporto vs Liverpool\nBarcelona vs Manchester utd\nJuventus vs Ajax\n\n");break;
            case 3: printf("Ajax vs Tottenhan\nLiverpool vs Barcelona\n\n");break;
            case 4: printf("Tottenhan vs liverpool");break;
            case 5: printf("LIVERPOOL\n\n");break;
            case 6: printf("Barcelona 5-1 O.Lyon\nBayern 1-3 Liverpool\nJuentus 3-0 Atletico\nManchester 7-0 Schalke\nOporto 3-1 roma\nPSG 1-3 Manchester utd\nBorussia 0-1 Totthenhan\nReal madrid 1-4 Ajax\n\n");break;
            case 7: printf("Manchester 4-3 Tottenhan\nOporto 1-4 Liverpool\nBarcelona 3-0 Manchester utd\nJuventus 1-2 Ajax\n\n");break;
            case 8: printf("Ajax 2-3 Tottenhan\nLiverpool 4-0 Barcelona\n\n");break;
            case 9: printf("Tottenhan 0-2 liverpool\n\n");break;
            
            
        }
    }
}
