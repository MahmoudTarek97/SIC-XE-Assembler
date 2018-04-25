#include <iostream>

#include "SymbolTable.h"
#include "OpCodeTable.h"

using namespace std;

int main()
{
    // testing symbol table
    /*SymbolTable symtab;
    symtab.insert("var1", 1000);
    symtab.insert("var2", 1003);
    cout << "var1 = " << symtab.search("var1") << endl;
    cout << "var2 = " << symtab.search("var2") << endl;
    cout << "var3 = " << symtab.search("var3") << endl;*/
    OpCodeTable* opTable = OpCodeTable::getOpTable();
    OpInfo info =  opTable->getInfo("LOL");
    if(info.getOpCode() == info.NOT_FOUND)
        cout << "Not found" << "\n";
    info = opTable->getInfo("LDA");
    cout << info.getOpCode() << " " << info.getFormateBytes();
    return 0;
}
