#include <stdio.h>

int main(void)
{
    for (int i = 0; i <5; i++)
    {
        char candidate_name[100];
        printf("Candidate Name :");
        scanf("%s", &candidate_name);

        int age;
        printf("Age :");
        scanf("%i", &age);

        char dob[10];
        printf("\nDOB :");
        scanf("%s", &dob);

        char address[1000];
        printf("Address :");
        scanf("%s", &address);

        getchar();
        if (age >= 18 )
        {
            // vaccination details
            char dose_;
            printf("\nDid You take covid vaccination [y/n] :");
            scanf("%c", &dose_);

            getchar();

            if (dose_ == 'y')
            {
                int no_doses;
                printf("\nNo of doses taken :");
                scanf("%i", &no_doses);

                getchar();

                switch (no_doses)
                {
                    case 0:
                    printf("Please take vaccination\n And take vaccination after 30 days\n");
                    break;

                    case 1:
                    printf("take vaccine within 30 days of first vaccination\n");
                    break;

                    case 2:
                    printf("you are all done.\n");
                    break;
                }
            }
        }
        else 
        {
            break;
        }

    }

}

