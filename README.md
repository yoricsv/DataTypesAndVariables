# DataTypesAndVariables
Must be edit!

<!--
/*
  *****************************************************************************************
  *                                    It's C Code                                        *
  *****************************************************************************************
*/
// INCLUDES CODE BEGIN //
#include <stdio.h>
#include <locale.h>
// INCLUDES CODE END //

// MAIN FUNCTION BEGIN //
int main(void)
{
  // CODE/INSTRUCTIONS BEGIN //

  // SET RIGHT LOCALIZATION BEGIN //
  setlocale(LC_ALL, "Ru-RU");
  // SET RIGHT LOCALIZATION END //
/*
  *****************************************************************************************************
  *                                         DATA TYPES                                                *
  *****************************************************************************************************
  
  *****************************************************************************************************
  * - FLOATING POINT NUMBERS -                                                                        *
  *****************************************************************************************************
  * float              (4 Bytes) Min: [up 0.00001]                - single precision real types       *
  *                              Max: [to 9999.9]                   [%f - Output form]                *
  *---------------------------------------------------------------------------------------------------*
  * double             (8 Bytes) Min: [up 0.00000001]             - double precision real types       *
  *                              Max: [to 99999999.9]               [%lf - Output form]               *
  *****************************************************************************************************
  
  *****************************************************************************************************
  * - INTEGER NUMBERS -                                                                               *
  *****************************************************************************************************
  * short              (2 Bytes) Min: [up -32768]                 - short integer numbers             *
  *                              Max: [to  32767]                   [%hd - Output form]               *
  *---------------------------------------------------------------------------------------------------*
  * unsigned short     (2 Bytes) Min: [up 0]                      - positive short integer numbers    *
  *                              Max: [to 65535]                    [%hu - Output form]               *
  *---------------------------------------------------------------------------------------------------*
  * int                (4 Bytes) Min: [up -2147483648]            - integer numbers                   *
  * (long)                       Max: [to  2147483647]              [%d (%ld) - Output form]          *
  *---------------------------------------------------------------------------------------------------*
  * unsigned int       (4 Bytes) Min: [up 0]                      - positive integer numbers          *
  * (unsigned long)              Max: [to 4294967295]               [%u (%lu)- Output form]           *
  *---------------------------------------------------------------------------------------------------*
  * long long int      (8 Bytes) Min: [up -9223372036854775808]   - long integer numbers              *
  *                              Max: [to  9223372036854775807]                                       *
  *****************************************************************************************************
  
  *****************************************************************************************************
  * - CHARACTER TYPES -                                                                               *
  *****************************************************************************************************
  * char               (1 Bytes) Min: [up -128]                   - characters                        *
  *                              Max: [to  127]                     (%c - Output form)                *
  *---------------------------------------------------------------------------------------------------*
  * unsigned char      (1 Bytes) Min: [up 0]                      - characters                        *
  *                              Max: [to 255]                      (%c - Output form)                *
  *****************************************************************************************************
  
  *****************************************************************************************************
  * - BOOLEAN TYPES -      ATTENTION! The C doesn't have a BOOLean type!                              *
  *****************************************************************************************************
*/
/*
  *****************************************************************************************
  *                                    OUTPUT FORMATS                                     *
  *****************************************************************************************
  *  MAIN FORMATS                                                                         *
  *  %d - output INT type with sing                [in DECIMAL system]                    *
  *  %u - output UNSIGNED INT type WITHOUT sing    [in DECIMAL system]                    *
  *  %x - output INT type with sing                [in HEXADECIMAL system]                *
  *  %o - output INT type with sing                [in OCTAL system]                      *
  *                                                                                       *
  *  %hd - output SHORT type with sing             [in DECIMAL system]                    *
  *  %hu - output UNSIGNED SHORT type WITHOUT sing [in DECIMAL system]                    *
  *  %hx - output SHORT type with sing             [in HEXADECIMAL system]                *
  *                                                                                       *
  *  %ld - output LONG type with sing              [in DECIMAL system]                    *
  *  %lu - output UNSIGNED LONG type with sing     [in DECIMAL system]                    *
  *  %lx - output LONG type with sing              [in HEXADECIMAL system]                *
  *                                                                                       *
  *  %f - output FLOAT type with sing (single precision)                                  *
  *  %e — output FLOAT type with sing              [in EXPONENTIAL form]                  *
  *  %lf — output DOUBLE type with sing (double precision)                                *
  *                                                                                       *
  *  %c — output CHAR type                                                                *
  *                                                                                       *
  *  %s — output a STRING                                                                 *
  *****************************************************************************************
*/
/*
  *****************************************************************************************
  *                         DEFINE TYPES and INITIALIZE VARIABLES                         *
  *****************************************************************************************
  *                                                                                       *
  * FOR DEFINE OF VARIABLES WE MUST POINT A TYPE AND NAME OUT                             *
  *                                                                                       *
  *  int a; - define type variable A like INTEGER                                         *
  *           value range of -2147483648 up to 2147483647                                 *
  *                                                                                       *
  *  a = 18; - initialize variable A by assigning her a value (Exp.: 18)                  *
  *            sign equal [=] - means assign                                              *
  *                                                                                       *
  * DEFINE AND INITIALIZE VARIABE WE CAN USE ONE EXPRESSION                               *
  *                                                                                       *
  *  short b = 6; - define and assign variable B                                          *
  *                 short - define type variable B like SHORT                             *
  *                 value range of -32768 up to 32767                                     *
  *                 B - define variable name like B                                       *
  *                 = - assigning (initialize variable)                                   *
  *                 6 - assign a value  for variable B equal 6                            *
  *                                                                                       *
  * WHILE DEFINING AND INITIALIZE VARIABE WE CAN DO ARYTHMETIC OPERATIONS                 *
  *                                                                                       *
  *  int c = a + b; - define variable Ñ which we assign the result of summation           *
  *                 values A and B (There is we don't need to use several                 *
  *                 expression, everything are work in one)                               *
  *                                                                                       *
  * THE SAME AS PREVIOUS EXAMPLE WE CAN DO DEFINE AND INITIALIZE SEVERAL VARIABLES WITH   *
  * THE SAME TYPE IN ONE EXPRESSION, DEVIDE THEM BY COMMA [,]                             *
  *                                                                                       *
  *  int d = 3, f, age = 5; - define variables AGE, D and F in one expression             *
  *                         above that we assign the values for AGE and D                 *
  *                                                                                       *
  * IF WE WANNA ASSIGN AND DEFINE VARIABLE WITH MATHEMATIC EXPRESSION, WE SHOULD MAKE     *
  * SURE THAT BEFORE THIS WERE DEFINE ALL THE VARIABLES                                   *
  *                                                                                       *
  * (exp. f = e - d; int e = 4; - there is a mistake because variable E must be define    *
  * before assign of variable F)                                                         *
  *                                                                                       *
  * IF WE DEFINE CHAR TYPE VARIABLE (NOT ARRAY) WE CAN USE MORE THAN ONE SYMBOL WHILE     *
  * ASSIGNING. ORDINARY, THIS TYPE COULD HAVE ONLY ONE SYMBOL, BUT AS AN EXCEPTION MIGHT  *
  * APPLY TWO SYMBOLS FOR ESCAPE CONSEQUENCES. IN OTHER CASE IT MIGHT BE ONLY ARRAY       *
  * WARNING! The assigned symbols must be contained between single quotes ['']!!!!        *
  *                                                                                       *
  * (exp. char EndLine = '\n';)                                                           *
  *****************************************************************************************
*/
  // DEFINE AND INITIALIZE VARIABLES BEGIN //

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
  // DEFINE AND INITIALIZE VARIABLES END //


  // OUTPUT VALUE OF VARIABLES BEGIN //
  printf("\n Öåëî÷èñëåííàÿ ïåðåìåííàÿ À ñîäåðæèò -\t %d", intVarA);
  printf("\n Öåëî÷èñëåííàÿ ïåðåìåííàÿ B òèïà SHORT ñîäåðæèò -\t %hd.\n%c", shortVarB, EndLine);

  printf("Áåççíàêîâàÿ öåëî÷èñëåííàÿ ïåðåìåííàÿ Ñ ñîäåðæèò ñóììó ïðåäûäóùèõ äâóõ ");
  printf("ïåðåìåííûõ A è B - % d\n", intVarC);
  printf("ÑÈ ïîääåðæèâàåò ñëîæåíèå öåëî÷èñëåííûõ ïåðåìåííûõ LONG, SHORT, INT, à òàêæå èõ ");
  printf("áåççíàêîâîå ïðåäñòàâëåíèå UNSIGNED (À - INTEGER è B - SHORT).\n");





 // printf("Â ïåðåìåííîé F ñîäåðæèòñÿ ðàçíèöà ïåðåìåííûõ E è D (ñ ðàçíûìè òèïàìè) - %d\n", f);
 // printf("Â äàííîì ñëó÷àå áûëî âû÷èòàíèå ïåðåìåííûõ (E - LONG è D - INTEGER).\n");
 // printf("Íî ïîñêîëüêó LONG ÿâëÿåòñÿ îäíîé èç ðàçíîâèäíîñòåé INTEGER òî äàííàÿ îïåðàöèÿ ñìîãëà îñóùåñòâèòüñÿ%c\n", EndLine);

 // printf("Âàñå\t %d ëåò (òèï INTEGER).%c\n", age, EndLine);

 // printf("Äðîáíàÿ ïåðåìåííàÿ -\t %lf (òèï DOUBLE). Ïðèñâîèëè çíà÷åíèå 34.57748923.\n", flt_pnt);

 // printf("Äðîáíàÿ ïåðåìåííàÿ -\t %f (òèï FLOAT). Ïðèñâîèëè çíà÷åíèå 4321.1234567.%c", dbl_pnt, EndLine);

  
 // printf("Òà æå äðîáíàÿ ïåðåìåííàÿ, íî îïðåäåëåííàÿ êàê öåëûé òèï -\t %d (òèï INTEGER).\n", dbl_pnt);
 // printf("Äðîáíàÿ ÷àñòü îòáðîøåíà ò.ê. äëÿ âûâîäà äðîáíûõ ÷èñåë íåîáõîäèìî èñïîëüçîâàòü äðóãîé òèï äàííûõ!%c%c", EndLine, EndLine);

 // printf("Äðîáíàÿ ïåðåìåííàÿ -\t %f (òèï FLOAT). Ïðèñâîèëè çíà÷åíèå 54321.1234567.%c", Point_1b, EndLine);
 // printf("Äðîáíàÿ ïåðåìåííàÿ áûëà óìíîæåíà íà 5 -\t %f (òèï FLOAT). Ïðèñâîèëè çíà÷åíèå 61725,6175.%c%c", Point_1c, EndLine, EndLine);

 // printf("Âûâîä ïåðåìåííîé ñ òèïîì CHAR ñîäåðæàùåé ñèìâîë Í - %c%c", Hworld, EndLine);
 // printf("Ïåðåä ýòîé ñòðîêîé áûë îñóùåñòâëåí ïåðåõîä ïðè ïîìîùè ïåðåìåííîé ñ òèïîì CHAR ñîäåðæàùåé %c", EndLine);
 
  
  
  
  
  
  printf("Escape-ïîñëåäîâàòåëüíîñòü ïåðåíîñà ñòðîêè (\\n) ïåðåäàåòñÿ íà âûâîä ñ ïîìîùüþ ");
  printf("ïåðåìåííîé òèïà CHAR %c\n", EndLine);
  // OUTPUT VALUE OF VARIABLES END //

/*
  static const unsigned int decoder[] = {
    0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6f
  };
//  int max_num = sizeof(decoder) / sizeof(unsigned int);
//  printf("Çíà÷åíèå ìàññèâà deñoder - %d\n", max_num);
//  printf("Íîëåâîå çíà÷åíèå ìàññèâà deñoder = %d\n", decoder[0]);

  int number = 4;
  int max_number = 2;

  int res = (number % max_number);
//  printf("Îñòàòîê îò äåëåíèÿ ðàâåí - %d%c\n", res, EndLine);

  int read_buttons_state  = 0b000000000000000;
  int read_buttons_state2 = 0b000000000000000;
//  int button_minus_mask = 0x4000UL;
//  int button_plus_mask = 0x8000UL;
//  int logic = READ_BUTTONS_STATE & button_plus_mask;

  if (read_buttons_state | read_buttons_state2)
  {
    printf("Áèò ÂÊËÞ×ÅÍ! %c\n", EndLine);
  }
  else
  {
    printf("Áèò âûêëþ÷åí.   %c\n", EndLine);
  }
*/




  //We will look Mix & Max values of Types
  //  printf("INT_MIN = %d    \n", INT_MAX);
  //  printf("INT_MIN = %d    \n", INT_MAX);
  

  // CHECK OPERATION MAIN FUNCTION BEGIN //
  return 0;
  // CHECK OPERATION MAIN FUNCTION END //

  // CODE/INSTRUCTIONS END //
}
// MAIN FUNCTION END //
-->
