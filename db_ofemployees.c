* data base of employees */

#include<stdio.h>
#include<stdlib.h>

struct data {
     char *name;
     char *designation;
     int date;
     int salary;
     struct data *next;
};

struct data *HEAD = NULL;

void append(struct data *node)
{
     struct data *s1 = NULL;

     s1 = HEAD;

     if (s1 == NULL) {

     HEAD = node;
     }
     else {

       while(s1->next != NULL) {

        s1 = s1->next;
       }
        s1->next = node;
     }
}

void traverse(void)
{
      struct data *s1 = NULL;

      s1 = HEAD;

      while(s1 != NULL) {

        printf("  %s %s %d %d\n",s1->name,s1->designation,s1->date,s1->salary);

        s1 = s1->next;
      }
}
void main()
{
     struct data *s1 = NULL;
     s1 = (struct data *)malloc(sizeof(struct data));
     s1->name ="Suresh";
     s1->designation =" engineer-1";
     s1->date =5;
     s1->salary =20000;
     append(s1);

     s1 = (struct data *)malloc(sizeof(struct data));
     s1->name ="Ramesh";
     s1->designation = "engineer-2";
     s1->date = 12;
     s1->salary =25000;
     append(s1);

     s1 = (struct data *)malloc(sizeof(struct data));
     s1->name ="Somesh";
     s1->designation = "Lead engineer";
     s1->date =25;
     s1->salary =30000;
     append(s1);

     traverse();

}
            
