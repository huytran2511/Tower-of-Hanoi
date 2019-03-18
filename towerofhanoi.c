#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void HanoiTower3(int nDisk, char StartTower, char TempTower, char DestTower)
{
    if (nDisk == 1)
    {
        printf("\n Move disk 1 from tower %c to tower %c", StartTower, DestTower);
        return;
    }
    HanoiTower3(nDisk - 1, StartTower, DestTower, TempTower);
    printf("\n Move disk %d from tower %c to tower %c", nDisk, StartTower, DestTower);
    HanoiTower3(nDisk - 1, TempTower, StartTower, DestTower);
}

/*I figured out the code for the recursive method for Tower of Hanoi with 3 towers but not with 4 towers.
Therefore I borrowed the code for 4 towers from a website.
Borrow code starts here*/
void HanoiTower4(int nDisk, char StartTower, char TempTower1, char TempTower2, char DestTower)
{
    if (nDisk == 1)
    {
        printf("\n Move disk 1 from tower %c to tower %c", StartTower, DestTower);
        return;
    }
    else if (nDisk == 2)
    {
        printf("\n Move disk 1 from tower %c to tower %c", StartTower, TempTower1);
        printf("\n Move disk 2 from tower %c to tower %c", StartTower, DestTower);
        printf("\n Move disk 1 from tower %c to tower %c", TempTower1, DestTower);
        return;
    }
    else
    {
        HanoiTower4(nDisk - 2, StartTower, TempTower2, DestTower, TempTower1);
        printf("\n Move disk %d from tower %c to tower %c", nDisk - 1, StartTower, TempTower2);
        printf("\n Move disk %d from tower %c to tower %c", nDisk, StartTower, DestTower);
        printf("\n Move disk %d from tower %c to tower %c", nDisk - 1, TempTower2, DestTower);
        HanoiTower4(nDisk - 2, TempTower1, StartTower, TempTower2, DestTower);
    }
}//borrow code ends here. I borrowed the code from http://stackoverflow.com/questions/3607161/towers-of-hanoi-with-k-pegs

void print3(int nDisk, int A[nDisk], int B[nDisk], int C[nDisk])
{
    int i, j;
    for(i = 0; i < nDisk; i++)
    {
        if (A[i] == 0)
        {
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
            printf("|");
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (j = 1; j <= nDisk - A[i]; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= A[i]; j++)
            {
                printf("-");
            }
            printf("|");
            for (j = 1; j <= A[i]; j++)
            {
                printf("-");
            }
            for (j = 1; j <= nDisk - A[i]; j++)
            {
                printf(" ");
            }
        }
        if (B[i] == 0)
        {
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
            printf("|");
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (j = 1; j <= nDisk - B[i]; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= B[i]; j++)
            {
                printf("-");
            }
            printf("|");
            for (j = 1; j <= B[i]; j++)
            {
                printf("-");
            }
            for (j = 1; j <= nDisk - B[i]; j++)
            {
                printf(" ");
            }
        }
        if (C[i] == 0)
        {
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
            printf("|");
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (j = 1; j <= nDisk - C[i]; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= C[i]; j++)
            {
                printf("-");
            }
            printf("|");
            for (j = 1; j <= C[i]; j++)
            {
                printf("-");
            }
            for (j = 1; j <= nDisk - C[i]; j++)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    printf("A");
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    printf("B");
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    printf("C");
}

void print4(int nDisk, int A[nDisk], int B[nDisk], int C[nDisk], int D[nDisk])
{
    int i, j;
    for(i = 0; i < nDisk; i++)
    {
        if (A[i] == 0)
        {
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
            printf("|");
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (j = 1; j <= nDisk - A[i]; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= A[i]; j++)
            {
                printf("-");
            }
            printf("|");
            for (j = 1; j <= A[i]; j++)
            {
                printf("-");
            }
            for (j = 1; j <= nDisk - A[i]; j++)
            {
                printf(" ");
            }
        }
        if (B[i] == 0)
        {
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
            printf("|");
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (j = 1; j <= nDisk - B[i]; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= B[i]; j++)
            {
                printf("-");
            }
            printf("|");
            for (j = 1; j <= B[i]; j++)
            {
                printf("-");
            }
            for (j = 1; j <= nDisk - B[i]; j++)
            {
                printf(" ");
            }
        }
        if (C[i] == 0)
        {
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
            printf("|");
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (j = 1; j <= nDisk - C[i]; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= C[i]; j++)
            {
                printf("-");
            }
            printf("|");
            for (j = 1; j <= C[i]; j++)
            {
                printf("-");
            }
            for (j = 1; j <= nDisk - C[i]; j++)
            {
                printf(" ");
            }
        }
        if (D[i] == 0)
        {
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
            printf("|");
            for (j = 1; j <= nDisk; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (j = 1; j <= nDisk - D[i]; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= D[i]; j++)
            {
                printf("-");
            }
            printf("|");
            for (j = 1; j <= D[i]; j++)
            {
                printf("-");
            }
            for (j = 1; j <= nDisk - D[i]; j++)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    printf("A");
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    printf("B");
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    printf("C");
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    for(j = 1; j <= nDisk; j++)
    {
        printf(" ");
    }
    printf("D");
}

void move(int nDisk, int nthDisk, int from[nDisk], int to[nDisk])
{
    int i, j, temp = 0;
    for(i = 0; i < nDisk; i++)
    {
        if (from[i] == nthDisk)
        {
            temp = from[i];
            from[i] = 0;
            break;
        }
    }
    for (j = nDisk - 1; j >= 0; j--)
    {
        if (to[j] == 0)
        {
            to[j] = temp;
            break;
        }
    }
}

int compare(int nDisk, int nthDisk, int to[nDisk])
{
    int i;
    for (i = nDisk - 1; i >= 0; i--)
    {
        if (to[i] == 0)
        {
            if (nthDisk < to[i+1])
            {
                return 1;
            }
            else
                return 0;
        }
    }
}

int play3(int nDisk, int A[nDisk], int B[nDisk], int C[nDisk])
{
    int i, j, nthDisk, from[nDisk], to[nDisk];
    char pfrom, pto;
    for(j = 1;; j++)
    {
    if (C[0] != 0 || B[0] != 0)
        break;
    else
    {
        printf("\nMove disk from tower: ");
        scanf(" %c",&pfrom);
        printf("To tower: ");
        scanf(" %c",&pto);
        if (pfrom == 'A' || pfrom == 'a')
        {
            if (A[0] != 0)
            {
                nthDisk = A[0];
            }
            else
            {
                for (i = nDisk - 1; i >= 0; i--)
                {
                    if (A[i] == 0)
                    {
                        nthDisk = A[i+1];
                        break;
                    }
                }
            }
            for (i = 0; i < nDisk; i++)
            {
                from[i] = A[i];
            }
        }
        else if (pfrom =='B' || pfrom == 'b')
        {
            if (B[0] != 0)
            {
                nthDisk = B[0];
            }
            else
            {
                for (i = nDisk - 1; i >= 0; i--)
                {
                    if (B[i] == 0)
                    {
                        nthDisk = B[i+1];
                        break;
                    }
                }
            }
            for (i = 0; i < nDisk; i++)
            {
                from[i] = B[i];
            }
        }
        else if (pfrom == 'C' || pfrom == 'c')
        {
            if (C[0] != 0)
            {
                nthDisk = C[0];
            }
            else
            {
                for (i = nDisk - 1; i >= 0; i--)
                {
                    if (C[i] == 0)
                    {
                        nthDisk = C[i+1];
                        break;
                    }
                }
            }
            for (i = 0; i < nDisk; i++)
            {
                from[i] = C[i];
            }
        }
        if (pto == 'A' || pto == 'a')
        {
            for (i = 0; i < nDisk; i++)
            {
                to[i] = A[i];
            }
        }
        else if (pto == 'B' || pto == 'b')
        {
            for (i = 0; i < nDisk; i++)
            {
                to[i] = B[i];
            }
        }
        else if (pto == 'C' || pto == 'c')
        {
            for (i = 0; i < nDisk; i++)
            {
                to[i] = C[i];
            }
        }
        if (compare(nDisk, nthDisk, to) == 1)
            move(nDisk, nthDisk, from, to);
        else
        {
            printf("\nInvalid move. Try again.\n");
            j -= 1;
        }
        if (pfrom == 'A' || pfrom == 'a')
        {
            for (i = 0; i < nDisk; i++)
            {
                A[i] = from[i];
            }
        }
        else if (pfrom == 'B' || pfrom == 'b')
        {
            for (i = 0; i < nDisk; i++)
            {
                 B[i] = from[i];
            }
        }
        else if (pfrom == 'C' || pfrom == 'c')
        {
            for (i = 0; i < nDisk; i++)
            {
                C[i] = from[i];
            }
        }
        if (pto == 'A' || pto == 'a')
        {
            for (i = 0; i < nDisk; i++)
            {
                A[i] = to[i];
            }
        }
        else if (pto == 'B' || pto == 'b')
        {
            for (i = 0; i < nDisk; i++)
            {
                B[i] = to[i];
            }
        }
        else if (pto == 'C' || pto == 'c')
        {
            for (i = 0; i < nDisk; i++)
            {
                C[i] = to[i];
            }
        }
        printf("\n");
        print3(nDisk, A, B, C);
        printf("\n");
        }
    }
    return j - 1;
}

int play4(int nDisk, int A[nDisk], int B[nDisk], int C[nDisk], int D[nDisk])
{
    int i, j, nthDisk, from[nDisk], to[nDisk];
    char pfrom, pto;
    for(j = 1;; j++)
    {
    if (D[0] != 0 || B[0] != 0 || C[0] != 0)
        break;
    else
    {
        printf("\nMove disk from tower: ");
        scanf(" %c",&pfrom);
        printf("To tower: ");
        scanf(" %c",&pto);
        if (pfrom == 'A' || pfrom == 'a')
        {
            if (A[0] != 0)
            {
                nthDisk = A[0];
            }
            else
            {
                for (i = nDisk - 1; i >= 0; i--)
                {
                    if (A[i] == 0)
                    {
                        nthDisk = A[i+1];
                        break;
                    }
                }
            }
            for (i = 0; i < nDisk; i++)
            {
                from[i] = A[i];
            }
        }
        else if (pfrom == 'B' || pfrom == 'b')
        {
            if (B[0] != 0)
            {
                nthDisk = B[0];
            }
            else
            {
                for (i = nDisk - 1; i >= 0; i--)
                {
                    if (B[i] == 0)
                    {
                        nthDisk = B[i+1];
                        break;
                    }
                }
            }
            for (i = 0; i < nDisk; i++)
            {
                from[i] = B[i];
            }
        }
        else if (pfrom == 'C' || pfrom == 'c')
        {
            if (C[0] != 0)
            {
                nthDisk = C[0];
            }
            else
            {
                for (i = nDisk - 1; i >= 0; i--)
                {
                    if (C[i] == 0)
                    {
                        nthDisk = C[i+1];
                        break;
                    }
                }
            }
            for (i = 0; i < nDisk; i++)
            {
                from[i] = C[i];
            }
        }
        else if (pfrom == 'D' || pfrom == 'd')
        {
            if (D[0] != 0)
            {
                nthDisk = D[0];
            }
            else
            {
                for (i = nDisk - 1; i >= 0; i--)
                {
                    if (D[i] == 0)
                    {
                        nthDisk = D[i+1];
                        break;
                    }
                }
            }
            for (i = 0; i < nDisk; i++)
            {
                from[i] = D[i];
            }
        }
        if (pto == 'A' || pto == 'a')
        {
            for (i = 0; i < nDisk; i++)
            {
                to[i] = A[i];
            }
        }
        else if (pto == 'B' || pto == 'b')
        {
            for (i = 0; i < nDisk; i++)
            {
                to[i] = B[i];
            }
        }
        else if (pto == 'C' || pto == 'c')
        {
            for (i = 0; i < nDisk; i++)
            {
                to[i] = C[i];
            }
        }
        else if (pto == 'D' || pto == 'd')
        {
            for (i = 0; i < nDisk; i++)
            {
                to[i] = D[i];
            }
        }
        if (compare(nDisk, nthDisk, to) == 1)
            move(nDisk, nthDisk, from, to);
        else
        {
            printf("\nInvalid move. Try again.");
            j -= 1;
        }
        if (pfrom == 'A' || pfrom == 'a')
        {
            for (i = 0; i < nDisk; i++)
            {
                A[i] = from[i];
            }
        }
        else if (pfrom == 'B' || pfrom == 'b')
        {
            for (i = 0; i < nDisk; i++)
            {
                 B[i] = from[i];
            }
        }
        else if (pfrom == 'C' || pfrom == 'c')
        {
            for (i = 0; i < nDisk; i++)
            {
                C[i] = from[i];
            }
        }
        else if (pfrom == 'D' || pfrom == 'd')
        {
            for (i = 0; i < nDisk; i++)
            {
                D[i] = from[i];
            }
        }
        if (pto == 'A' || pto == 'a')
        {
            for (i = 0; i < nDisk; i++)
            {
                A[i] = to[i];
            }
        }
        else if (pto == 'B' || pto == 'b')
        {
            for (i = 0; i < nDisk; i++)
            {
                B[i] = to[i];
            }
        }
        else if (pto == 'C' || pto == 'c')
        {
            for (i = 0; i < nDisk; i++)
            {
                C[i] = to[i];
            }
        }
        else if (pto == 'D' || pto == 'd')
        {
            for (i = 0; i < nDisk; i++)
            {
                D[i] = to[i];
            }
        }
        printf("\n");
        print4(nDisk, A, B, C, D);
        printf("\n");
        }
    }
    return j - 1;
}

int main()
{
    int i, nTower, nDisk, nMove = 0;
    char instr, play;
    printf("Welcome to the Tower of Hanoi puzzle!\n");
    printf("\nWould you like to see the instruction (Y/N)? ");
    scanf(" %c", &instr);
    if (instr == 'Y' || instr == 'y')
    {
        printf("\nThe puzzle would look something like this:\n");
        printf("\n    -|-       |        |        |\n");
        printf("   --|--      |        |        |\n");
        printf("  ---|---     |        |        |\n");
        printf(" ----|----    |        |        |\n");
        printf("\n     A        B        C        D\n");
        printf("\n  - The '----' represent the disks\n  - A, B, C, D represent the towers\n  - The GOAL is to move all the disks from tower A to another tower\n");
        printf("");
        printf("\nThe rules are:\n");
        printf("  - Only one disk can be moved at a time\n");
        printf("  - Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack\n");
        printf("  - Larger disks cannot be placed on top of smaller disks\n");
    }
    printf("\nAre you ready to play (Y/N)? If not, the game will exit: ");
    scanf(" %c", &play);
    if (play == 'N' || play == 'n')
    {
        printf("\nThank you and goodbye!\n");
        return 0;
    }
    printf("\nEnter the number of towers (3 or 4): ");
    scanf("%d",&nTower);
    while (nTower != 3 && nTower!= 4)
    {
        printf("Invalid. Enter the number of towers again (3 or 4): ");
        scanf("%d",&nTower);
    }
    printf("\nEnter the number of disks you want: ");
    scanf("%d", &nDisk);
    printf("\n");
    if (nTower == 3)
    {
        int A[nDisk], B[nDisk], C[nDisk];
        for(i = 0; i < nDisk; i++)
        {
            A[i] = i+1;
            B[i] = 0;
            C[i] = 0;
        }
        print3(nDisk, A, B, C);
        printf("\n");
        nMove = play3(nDisk, A, B, C);
        printf("\nCongratulation! You've completed the game.\nNumber of moves: %d\n", nMove);
        printf("\nWould you like to see the optimal solution.\n**Note** the solution will only show the steps to move from tower A to tower C (Y/N)? ");
        char ans;
        scanf(" %c", &ans);
        if (ans == 'Y' || ans =='y')
        {
            nMove = pow(2,nDisk) - 1;
            printf("\nThe minimum number of moves required to complete: %d\n",nMove);
            printf("\nThe moves are:\n");
            HanoiTower3(nDisk, 'A', 'B', 'C');
            printf("\n\nThank you for playing the game! Goodbye!\n");
            return 0;
        }
        else
        {
            printf("\nThank you for playing the game! Goodbye!\n");
            return 0;
        }
    }
    else
    {
        int A[nDisk], B[nDisk], C[nDisk], D[nDisk];
        for(i = 0; i < nDisk; i++)
        {
            A[i] = i+1;
            B[i] = 0;
            C[i] = 0;
            D[i] = 0;
        }
        print4(nDisk, A, B, C, D);
        printf("\n");
        nMove = play4(nDisk, A, B, C, D);
        printf("\nCongratulation! You've completed the game.\nNumber of moves: %d\n", nMove);
        printf("\nWould you like to see the optimal solution.\n**Note** the solution will only show the steps to move from tower A to tower D (Y/N)? ");
        char ans;
        scanf(" %c", &ans);
        if (ans == 'Y' || ans =='y')
        {
            printf("\nThe optimal moves are:\n");
            HanoiTower4(nDisk, 'A', 'B', 'C', 'D');
            printf("\n\nThank you for playing the game! Goodbye!\n");
            return 0;
        }
        else
        {
            printf("\nThank you for playing the game! Goodbye!\n");
            return 0;
        }
    }
    return 0;
}
