#include <stdio.h>

#include "ast.h"
#include "parser.tab.h"
#include "codegen.h"

extern FILE *yyout;
extern int yylex (void);

extern T_statement_list ast;

int main(int argc, char **argv) {
    /* while (1) { */
        /* yylex(); */
    /* } */

    yyout = stderr;
    yyparse();

    gencode_statement_list(ast);
    return 0;
}
