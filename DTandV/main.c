/*
  *****************************************************************************************
  *                                    It's C Code                                        *
  *****************************************************************************************
  *****************************************************************************************
  *                            The PREPROCESSOR DIRECTIVEs                                *
  *****************************************************************************************
  *****************************************************************************************
  *       #include (the preprocessor directive) - addict a code from other file;          *
  *****************************************************************************************
  *  <STDIO.H> - standard library of Input/Output function on C                           *
  *  <LOCALE.H> - standard library contain of different language symbols                  *
  *  <LINITS.H> - contain MAX / MIN values of C variable types                            *
  *****************************************************************************************
*/
// INCLUDES CODE BEGIN //

#include <stdio.h>
#include <locale.h>

// INCLUDES CODE END //

/*
  *****************************************************************************************
  *                                 The MAIN function                                     *
  *****************************************************************************************
  *  int - function type must returned some integer value after operated;                 *
  *  MAIN - function name;                                                                *
  *  void - variable type (don't get/return any values)                                   *
  *  ( ... ) - there is write everything we wanna take to the function                    *
  *  { ... } - function body. There is contained all instructions.                        *
  *****************************************************************************************
*/
// MAIN FUNCTION BEGIN //

int main(void)
{
  // CODE/INSTRUCTIONS BEGIN //

/*
  *****************************************************************************************
  *                CHANGE LOCALIZATION for right display local SYMBOLS                    *
  *****************************************************************************************
  *  SETLOCALE - function allow to use difference local symbols                           *
  *  LC_ALL (Locate Categories) - point out to switch all localization functions on       *
  *  Ru-RU - switch on all localization function on for Russian (ru-RU by list of LCID)   *
  *****************************************************************************************
*/
  // SET RIGHT LOCALIZATION BEGIN //

  setlocale(LC_ALL, "Ru-RU");

  // SET RIGHT LOCALIZATION END //

/*
  *****************************************************************************************
  *                              DATA TYPES and VARIABLES                                 *
  *****************************************************************************************
  *  FLOATING POINT NUMBERS                                                               *
  *  Float (4 bytes)          - single precision real types                               *
  *                           [6 sings precision]                                         *
  *                           (EXP: up 0.00001 to 9999.9)                                 *
  *                           (%f - Output form)                                          *
  *  Double (8 bytes)         - double precision real types                               *
  *                           [10 sings precision]                                        *
  *                           (EXP: up 0.00000001 to 99999999.9)                          *
  *                           (%lf - Output form)                                         *
  * ------------------------------------------------------------------------------------- *
  *  INTEGER NUMBERS                                                                      *
  *  Int (4 bytes)            - describes integer numbers                                 *
  *                           [up -2147483648 to 2147483647]                              *
  *                           (%d - Output form)                                          *
  *  Unsigned Int (4 bytes)   - integer numbers without sign                              *
  *                           [up 0 to 4294967295]                                        *
  *                           (%u - Output form)                                          *
  *  Short (2 bytes)          - describes short integer numbers                           *
  *                           [up -32768 to 32767]                                        *
  *                           (%hd - Output form)                                         *
  *  Unsigned Short (2 bytes) - describes short integer numbers without sign              *
  *                           [up 0 to 65535]                                             *
  *                           (%hu - Output form)                                         *
  *  Long (4 bytes)           -  describes long integer numbers                           *
  *                           [up -2147483648 to 2147483647]                              *
  *                           (%ld - Output form)                                         *
  *  Unsigned Long (4 bytes)  - describes long integer numbers without sign               *
  *                           [up 0 to 4294967295]                                        *
  *                           (%lu - Output form)                                         *
  * ------------------------------------------------------------------------------------- *
  *  CHARACTER TYPE                                                                       *
  *  Char (1 byte)            -  describes characters                                     *
  *                           [up -128 to 127]                                            *
  *                           (%c - Output form)                                          *
  *  Unsigned Char (1 byte)   - describes characters                                      *
  *                           [up 0 to 255]                                               *
  *                           (%c - Output form)                                          *
  *                                                                                       *
  * ------------------------------------------------------------------------------------- *
  *  ATTENTION! The C doesn't have a BOOLean type!                                        *
  *                                                                                       *
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
  *  %e � output FLOAT type with sing              [in EXPONENTIAL form]                  *
  *  %lf � output DOUBLE type with sing (double precision)                                *
  *                                                                                       *
  *  %c � output CHAR type                                                                *
  *                                                                                       *
  *  %s � output a STRING                                                                 *
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
  *         value range of -2147483648 up to 2147483647                                   *
  *                                                                                       *
  *  a = 18; - initialize variable A by assigning her a value (Exp.: 18)                  *
  *          sign equal [=] - means assign                                                *
  *                                                                                       *
  * DEFINE AND INITIALIZE VARIABE WE CAN USE ONE EXPRESSION                               *
  *                                                                                       *
  *  short b = 6; - define and assign variable B                                          *
  *               short - define type variable B like SHORT                               *
  *               value range of -32768 up to 32767                                       *
  *               B - define variable name like B                                         *
  *               = - assigning (initialize variable)                                     *
  *               6 - assign a value  for variable B equal 6                              *
  *                                                                                       *
  * WHILE DEFINING AND INITIALIZE VARIABE WE CAN DO ARYTHMETIC OPERATIONS                 *
  *                                                                                       *
  *  int c = a + b; - define variable � which we assign the result of summation           *
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
  printf("\n ������������� ���������� � �������� -\t %d", intVarA);
  printf("\n ������������� ���������� B ���� SHORT �������� -\t %hd.\n%c", shortVarB, EndLine);

  printf("����������� ������������� ���������� � �������� ����� ���������� ���� ");
  printf("���������� A � B - % d\n", intVarC);
  printf("�� ������������ �������� ������������� ���������� LONG, SHORT, INT, � ����� �� ");
  printf("����������� ������������� UNSIGNED (� - INTEGER � B - SHORT).\n");





 // printf("� ���������� F ���������� ������� ���������� E � D (� ������� ������) - %d\n", f);
 // printf("� ������ ������ ���� ��������� ���������� (E - LONG � D - INTEGER).\n");
 // printf("�� ��������� LONG �������� ����� �� �������������� INTEGER �� ������ �������� ������ �������������%c\n", EndLine);

 // printf("����\t %d ��� (��� INTEGER).%c\n", age, EndLine);

 // printf("������� ���������� -\t %lf (��� DOUBLE). ��������� �������� 34.57748923.\n", flt_pnt);

 // printf("������� ���������� -\t %f (��� FLOAT). ��������� �������� 4321.1234567.%c", dbl_pnt, EndLine);

  
 // printf("�� �� ������� ����������, �� ������������ ��� ����� ��� -\t %d (��� INTEGER).\n", dbl_pnt);
 // printf("������� ����� ��������� �.�. ��� ������ ������� ����� ���������� ������������ ������ ��� ������!%c%c", EndLine, EndLine);

 // printf("������� ���������� -\t %f (��� FLOAT). ��������� �������� 54321.1234567.%c", Point_1b, EndLine);
 // printf("������� ���������� ���� �������� �� 5 -\t %f (��� FLOAT). ��������� �������� 61725,6175.%c%c", Point_1c, EndLine, EndLine);

 // printf("����� ���������� � ����� CHAR ���������� ������ � - %c%c", Hworld, EndLine);
 // printf("����� ���� ������� ��� ����������� ������� ��� ������ ���������� � ����� CHAR ���������� %c", EndLine);
 
  
  
  
  
  
  printf("Escape-������������������ �������� ������ (\\n) ���������� �� ����� � ������� ");
  printf("���������� ���� CHAR %c\n", EndLine);
  // OUTPUT VALUE OF VARIABLES END //

/*
  static const unsigned int decoder[] = {
    0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6f
  };
//  int max_num = sizeof(decoder) / sizeof(unsigned int);
//  printf("�������� ������� de�oder - %d\n", max_num);
//  printf("������� �������� ������� de�oder = %d\n", decoder[0]);

  int number = 4;
  int max_number = 2;

  int res = (number % max_number);
//  printf("������� �� ������� ����� - %d%c\n", res, EndLine);

  int read_buttons_state  = 0b000000000000000;
  int read_buttons_state2 = 0b000000000000000;
//  int button_minus_mask = 0x4000UL;
//  int button_plus_mask = 0x8000UL;
//  int logic = READ_BUTTONS_STATE & button_plus_mask;

  if (read_buttons_state | read_buttons_state2)
  {
    printf("��� �������! %c\n", EndLine);
  }
  else
  {
    printf("��� ��������.   %c\n", EndLine);
  }
*/




  //We will look Mix & Max values of Types
  //  printf("INT_MIN = %d    \n", INT_MAX);
  //  printf("INT_MIN = %d    \n", INT_MAX);
  

/*
  *****************************************************************************************
  *              CHECK OPERATION MAIN FUNCTION                *
  *****************************************************************************************
  *  RETURN - it function show all instructions of the main function are operated    *
  *  0 - good, other - somewhere have a trouble                      *
  *****************************************************************************************
*/
  // CHECK OPERATION MAIN FUNCTION BEGIN //

  return 0;

  // CHECK OPERATION MAIN FUNCTION END //

  // CODE/INSTRUCTIONS END //
}

// MAIN FUNCTION END //