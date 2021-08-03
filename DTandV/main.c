#include <stdio.h>
#include <locale.h>


int main(void)
{
  // SET RIGHT LOCALIZATION
  setlocale(LC_ALL, "Ru-RU");
 
  // DEFINE AND INITIALIZE VARIABLES
  int          intVarA;
               intVarA            = 18;
  short        shortVarB          = 6;
  unsigned int intVarC            = intVarA + shortVarB;
  int          e                  = 4;
  long         g                  = 4;
  char         EndLine            = '\n';  
  char         Hworld             = 'H';
  float        flt_pnt            = 4321.1234567;
  double       dbl_pnt            = 34.57748923;
  int          UseIntInsteadFloat = 4321.1234567;
  float        Point_1b           = 54321.1234567;
  float        Point_1c           = 12345.12345 * 5;

  int    d = 3, f, age = 5;
         f = e - d;
 
  printf("\n Öåëî÷èñëåííàÿ ïåðåìåííàÿ À ñîäåðæèò -\t %d", intVarA);
  printf("\n Öåëî÷èñëåííàÿ ïåðåìåííàÿ B òèïà SHORT ñîäåðæèò -\t %hd.\n%c", shortVarB, EndLine);

  printf("Áåççíàêîâàÿ öåëî÷èñëåííàÿ ïåðåìåííàÿ Ñ ñîäåðæèò ñóììó ïðåäûäóùèõ äâóõ ");
  printf("ïåðåìåííûõ A è B - % d\n", intVarC);
  printf("ÑÈ ïîääåðæèâàåò ñëîæåíèå öåëî÷èñëåííûõ ïåðåìåííûõ LONG, SHORT, INT, à òàêæå èõ ");
  printf("áåççíàêîâîå ïðåäñòàâëåíèå UNSIGNED (À - INTEGER è B - SHORT).\n");
  
  printf("Escape-ïîñëåäîâàòåëüíîñòü ïåðåíîñà ñòðîêè (\\n) ïåðåäàåòñÿ íà âûâîä ñ ïîìîùüþ ");
  printf("ïåðåìåííîé òèïà CHAR %c\n", EndLine);

  // CHECK OPERATION MAIN FUNCTION
  return 0;
}
