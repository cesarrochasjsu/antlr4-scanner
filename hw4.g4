grammar hw4;

prog : (factor NEWLINE)* ;

program           :'.' ;

factor 
    : variable            
    | number               
    | characterConstant     
    | stringConstant       
    | NOT factor            
    ;

variable : IDENTIFIER ;
     
number          : unsignedNumber ;
unsignedNumber  : integerConstant | realConstant ;
integerConstant : INTEGER ;
realConstant    : REAL;

characterConstant : CHARACTER ;
stringConstant    : STRING ;



fragment A : ('a' | 'A') ;
fragment B : ('b' | 'B') ;
fragment C : ('c' | 'C') ;
fragment D : ('d' | 'D') ;
fragment E : ('e' | 'E') ;
fragment F : ('f' | 'F') ;
fragment G : ('g' | 'G') ;
fragment H : ('h' | 'H') ;
fragment I : ('i' | 'I') ;
fragment J : ('j' | 'J') ;
fragment K : ('k' | 'K') ;
fragment L : ('l' | 'L') ;
fragment M : ('m' | 'M') ;
fragment N : ('n' | 'N') ;
fragment O : ('o' | 'O') ;
fragment P : ('p' | 'P') ;
fragment Q : ('q' | 'Q') ;
fragment R : ('r' | 'R') ;
fragment S : ('s' | 'S') ;
fragment T : ('t' | 'T') ;
fragment U : ('u' | 'U') ;
fragment V : ('v' | 'V') ;
fragment W : ('w' | 'W') ;
fragment X : ('x' | 'X') ;
fragment Y : ('y' | 'Y') ;
fragment Z : ('z' | 'Z') ;


QUOTEMARK : ':';
QMARK : '?';
EXMARK : '!';
NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 
AND   :     A N D;
ARRAY :     A R R A Y;
ASM   :     A S M;
BEGIN :     B E G I N;
BREAK :     B R E A K;
CASE  :     C A S E;
CONST :     C O N S T;
CONSTRUCTOR: C O N S T R U C T O R;
CONTINUE:   C O N T I N U E;
DESTRUCTOR: D E S T R U C T O R; 
DIV   :     D I V;
DO    :     D O;
DOWNTO:     D O W N T O;
ELSE  :  E L S E;
END : E N D;
FALSE : F A L S E;
FILE : F I L E;
FOR : F O R;
FUNCTION : F U N C T I O N;
GOTO : G O T O;
IF : I F;
IMPLEMENTATION : I M P L E M E N T A T I O N;
IN : I N;
INLINE : I N L I N E;
INTERFACE : I N T E R F A C E;
LABEL : L A B E L;
MOD : M O D;
NIL   :  N I L; 
NOT :  N O T; 
OBJECT : O B J E C T; 
OF : O F; 
ON : O N; 
OPERATOR : O P E R A T O R; 
OR : O R; 
PACKED :  P A C K E D; 
PROCEDURE :  P R O C E D U R E; 
PROGRAM : P R O G R A M; 
RECORD : R E C O R D; 
REPEAT : R E P E A T; 
SET : S E T; 
SHL : S H L; 
SHR : S H R;
QUOTE     : '\'' ;
CHARACTER : QUOTE CHARACTER_CHAR QUOTE ; 
STRING    : QUOTE STRING_CHAR* QUOTE ;
THEN : T H E N; 
TO : T O; 
TRUE : T R U E; 
TYPE : T Y P E; 
UNIT : U N I T; 
UNTIL : U N T I L; 
USES : U S E S; 
VAR : V A R; 
WHILE : W H I L E; 
WITH : W I T H; 
XOR : X O R; 
INTEGER    : [0-9]+ ;
REAL       : INTEGER '.' INTEGER
           | INTEGER ('e' | 'E') ('+' | '-')? INTEGER
           | INTEGER '.' INTEGER ('e' | 'E') ('+' | '-')? INTEGER
           ;
IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
PLUSOP : '+';
MINUSOP : '-';
DIVOP : '/';
MULTOP : '*';
ASSIGN : ':=';
EQUAL : '=';
NE : '<>';
LTEQ : '<=';
GTEQ : '>=';
LT : '<';
GT : '>';
PLUSEQUAL : '+=';
MINUSEQUAL : '-=';
MULTEQUAL : '*=';
DIVEQUAL : '/=';
CARAT : '^';
SEMICOLOR : ';';
COMMA : ',';
LPAREN : '(';
RPAREN : ')';
LBRACKET : '[';
RBRACKET : ']';
LBRACE : '{';
RBRACE : '}';
LCOMMENT : '(*';
RCOMMENT : '*)';

fragment CHARACTER_CHAR : ~('\'')   // any non-quote character
                        ;

fragment STRING_CHAR : QUOTE QUOTE  // two consecutive quotes
                     | ~('\'')      // any non-quote character
                     ;
                     
