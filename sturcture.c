#include <stdio.h>

struct Student {
    int id;
    int sub[3];
};

int main()
{
    freopen("student.txt","r",stdin);

    struct Student s[5];
    int i,j;
    for(i=0; i<5;i++) {
        scanf("%d",&s[i].id);
        for(j=0;j<3;j++) {
            scanf("%d",&s[i].sub[j]);
        }
    }

    // find highest number in each subject and the student who obtained it
    int highest_by_subject[3],highest_obs[3];

    for(i=0;i<3;i++) {
        highest_by_subject[i]=0;
        for(j=0; j<5;j++) {
            if(s[j].sub[i] > highest_by_subject[i]) {
                highest_by_subject[i] = s[j].sub[i];
                highest_obs[i] = s[j].id;
            }
        }
    }

    for(i=0; i<3; i++) {
        printf("subject %d: highest: %d paise: %d\n",i,highest_by_subject[i],highest_obs[i]);
    }

    //* find each student's highest mark
    int highest_mark[5],highest_sub[5];

    for(i=0;i<5;i++) {
        highest_mark[i]=0;
        for(j=0; j<3;j++) {
            if(s[i].sub[j] > highest_mark[i]) {
                highest_mark[i] = s[i].sub[j];
                highest_sub[i] = j;
            }
        }
    }

    for(i=0; i<5; i++) {
        if(highest_sub[i]==0) printf("Bangla ");
        else if(highest_sub[i]==1) printf("English ");
        else printf("Math ");
        printf(" highest paise student %d paise: %d\n",s[i].id,highest_mark[i]);
    }



}
