#include "Lexer.h"
#include "Parse.h"

int main() {
    try {
        Lexer* lex = new Lexer();
        list<string> flyList = lex->lexer();
        Parse* parser = new Parse(flyList);
        parser->parse();
        delete lex;
        delete parser;
    } catch (exception e) {
        cout << e.what() << endl;
    }




    return 0;
}