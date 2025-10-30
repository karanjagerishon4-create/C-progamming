/* 
Name:Karanja Gerishon
Reg:PA106/G/29211/25
Description:3d array to display hotel revenue for three branches
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms each
    int total_occupied = 0;
    int branch_occupied[3] = {0}; // occupied rooms per branch
    int revenue_per_room = 5000;
    int branch, floor, room;

    srand(time(0));

    for (branch = 0; branch < 3; branch++) {
        printf("\n===== Branch %d =====\n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            printf("Floor %d: ", floor + 1);

            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;

                printf("%d", chain[branch][floor][room]);

                if (chain[branch][floor][room] == 1) {
                    total_occupied++;
                    branch_occupied[branch]++;
                }
            }
            printf("\n");
        }

        int branch_revenue = branch_occupied[branch] * revenue_per_room;
        printf("Occupied rooms in Branch %d: %d\n", branch + 1, branch_occupied[branch]);
        printf("Revenue for Branch %d: KES %d\n", branch + 1, branch_revenue);
    }

    int total_revenue = total_occupied * revenue_per_room;
    printf("\nTotal occupied rooms across all branches: %d\n", total_occupied);
    printf("Total revenue across all branches: KES %d\n", total_revenue);

    return 0;
}