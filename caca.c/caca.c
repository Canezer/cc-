#include <stdio.h>
#include <time.h>
struct Human
{
    int stealth;
    int iq;
    int health;
    int attackPower;
    int defence;
};

struct Human generateHuman()
{
    struct Human human;
    human.stealth = 0;
    human.iq = 0;
    human.health = 0;
    human.attackPower = 0;
    human.defence = 0;
    int max = 100;
    int totalSayi = 200;
    for (int i = 0; i < 200; i++)
    {
        switch (rand() % 5)
        {
        case 0:
            if (human.iq > max)
            {
                i--;
                break;
            }
            human.iq++;
            break;
        case 1:
            if (human.health > max)
            {
                i--;
                break;
            }
            human.health++;
            break;
        case 2:
            if (human.stealth > max)
            {
                i--;
                break;
            }
            human.stealth++;
            break;
        case 3:
            if (human.attackPower > max)
            {
                i--;
                break;
            }
            human.attackPower++;
            break;
        case 4:
            if (human.defence > max)
            {
                i--;
                break;
            }
            human.defence++;
            break;
        }
    }
    return human;
};
int main()
{
    srand(time(NULL));
    struct Human human2 = generateHuman();
    struct Human human = generateHuman();
     printf ("human 1 , stealth%d, iq %d,health%d, attackPower %d,defence%d", human.stealth, human.iq, human.health, human.attackPower, human.defence)
        ;
         printf ("human 2 ,stealth%d, iq %d,health%d, attackPower %d,defence%d", human2.stealth, human2.iq, human2.health, human2.attackPower, human2.defence)
        ;
    if (human2.attackPower > human.defence && human.attackPower < human2.defence)
    {
        printf("human2 win");
    }
       if (human.attackPower > human2.defence && human2.attackPower < human.defence)
    {
        printf("human1 win");
    }
    else {
printf("draw");
    }

    
}