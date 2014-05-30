#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>
#define MAXVALSIZ 25
inline int e_strcmp(char const p[], char const q[]);
int main(int argc, char *argv[])
{
   /* Declarations for the program */ 
    int i;
    FILE *pint;
    int no_of_compulsory_arguments=3;
    char oparg01[3]="-a", /* Optional Arguments                                                   */
         oparg02[3]="-b", /* Boolean value argument                                               */
         oparg03[3]="-c", /* Text Processing argument                                             */
         oparg04[3]="-d", /* Input for the argument from File                                     */
         oparg05[3]="-e", /* for other options                                                    */
         oparg06[3]="-f", 
         oparg07[3]="-g", 
         oparg08[3]="-h", 
         oparg09[3]="-i", 
         oparg10[3]="-j";
    char comparg01[100],  /* Compulsory arguments for jobs like editing a file                  */
         comparg02[100],  /* or for searching or manipulating a file whose addr                 */
                           /* sent through the arguments                                        */
         comparg03[10][100]; /* This one is for getting multiple compulsory arguments of similar type*/
                             /* like processing multiple files                                  */ 
    int  oparg01va01=0, /* Boolean Values are for trigerring some events               */
                        /* or for activating features in the program                   */
         oparg02va01=0; /* Default value for these type arguments will be 0 */
    char *oparg03va01,/* For just storing or tweaking of information purposes             */

         oparg04va01[1000],/* File location                                                     */

         oparg05va01[MAXVALSIZ]="val1",
         oparg05va02[MAXVALSIZ]="val2",
         oparg05va03[MAXVALSIZ]="val3",

         oparg06va01[MAXVALSIZ]="val2",
         oparg06va02[MAXVALSIZ]="val2",
         oparg06va03[MAXVALSIZ]="val2",

         oparg07va01[MAXVALSIZ]="val2",
         oparg07va02[MAXVALSIZ]="val2",
         oparg07va03[MAXVALSIZ]="val2",

         oparg08va01[MAXVALSIZ]="val2",
         oparg08va02[MAXVALSIZ]="val2",
         oparg08va03[MAXVALSIZ]="val2",

         oparg09va01[MAXVALSIZ]="val2",
         oparg09va02[MAXVALSIZ]="val2",
         oparg09va03[MAXVALSIZ]="val2",

         oparg10va01[MAXVALSIZ]="val2",
         oparg10va02[MAXVALSIZ]="val2",
         oparg10va03[MAXVALSIZ]="val2";
    if(argc < no_of_compulsory_arguments)
    {
        printf("Very few arguments\nsee       -help\n");
        exit(1);
    }
    for(i=1; i < argc; ++i)
    {
        if(!e_strcmp(argv[i], "-help"))
        {
            printf("This is help info");/*We have to write the help information*/
        }
        if((*argv[0]+0)=='-')/* Trigerring the optional arguments        */
        {
            switch(e_strcmp(argv[i], "-a"))/*You can change the case number according to your need*/
            {
                case 0:
                    /* Statements to be executed for -a optional argument */
                    /*as -a optional argument is booleanvalue argument*/
                    oparg01va01=1;
                    break;
                case 1:
                    /* Statements to be executed for -b optional argument */
                    oparg02va01=1;
                    break;
                case 2:
                    /* Statements to be executed for -c optional argument */
                    oparg03va01=argv[++i];
                    break;
                case 3:
                    /* Statements to be executed for -d optional argument */
                    pint=fopen(oparg04va01, "w"); /* we have to implement if(*pint) in the program or assign */
                                                  /* another boolean value variable here                     */
                    break;
                case 4:
                    /* Statements to be executed for -e optional argument */
                    /**/
                    break;
                case 5:
                    /* Statements to be executed for -f optional argument */
                    /**/
                    break;
                case 6:
                    /* Statements to be executed for -g optional argument */
                    /**/
                    break;
                case 7:
                    /* Statements to be executed for -h optional argument */
                    /**/
                    break;
                case 8:
                    /* Statements to be executed for -i optional argument */
                    /**/
                    break;
                case 9:
                    /* Statements to be executed for -j optional argument */
                    /**/
                    break;
                default:
                    printf("Dude there's no argument like %s\n How about trying -help  ?? \n", argv[i]);
                    exit(1);
                    break;
            }
        }
        else                /*either compulsory arguments or other things*/
        {
            /*same techniques are used for compulsory arguments also*/
        }

    }
    return 0;

}
inline int e_strcmp(char const p[], char const q[])
{
    int qqiii=0;
    while(p[qqiii])
    {
        if(q[qqiii]=='\0')
            return p[qqiii]-q[qqiii];
        if(p[qqiii] > q[qqiii])
            return p[qqiii]-q[qqiii];
        if(p[qqiii] < q[qqiii])
            return p[qqiii]-q[qqiii];
        qqiii++;
    }
    if(q[qqiii])
        return p[qqiii]-q[qqiii];
    return 0;
}