// --------------------------------------------------------------------------------
/// <summary>
/// Learning C++
/// --Programming needs patience and practical practice--
/// </summary>
/// <created>ʆϒʅ,11.04.2018</created>
/// <changed>ʆϒʅ,17.01.2019</changed>
// --------------------------------------------------------------------------------

// The reference used for this tutorial: http://www.cplusplus.com/doc/
// C++ reference: http://www.cplusplus.com/reference/

#include "pch.h"
#include "ConsoleAdjustments.h"
#include "_1_Introduction.h"
#include "_2_BasicsOfCplusPlus.h"
#include "_3_ProgramStructure.h"
#include "_4_CompoundDataTypes.h"
#include "_5_Classes.h"




int main ()
{
#pragma region ConsoleAdjustments
    // font
    COORD fontS { 10,20 };
    ConsoleFont ( L"Consolas" );
    ConsoleFontSize ( fontS );
    ConsoleFontColour ( F_WHITE );
    // screen
    COORD leftANDtop { 15,15 };
    COORD widthANDheight { 110,32 };
    COLORREF backColour { RGB ( 50,50,50 ) };
    ConsoleScreenPosition ( leftANDtop );
    ConsoleScreenSize ( widthANDheight );
    ConsoleScreenColour ( backColour );

    //// cursor
    //ConsoleCursorState ( false );

    //// codec
    //UINT consoleOutputCPstorage;
    //consoleOutputCPstorage = GetConsoleOutputCP ();
    //SetConsoleOutputCP ( CP_UTF8 );

    //// back to default codec
    //SetConsoleOutputCP ( consoleOutputCPstorage );
#pragma endregion

    try
    {
        //! ..................................:: Introduction ::..................................
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        ColourCouter ( ".:: Introduction ::.\n", F_bBLUE );
        //std::cout << "\n\n..........................:: Introduction ::..........................\n\n";
        _1_1_Introduction ();


        //! .................................:: BASICS OF C++ ::.................................
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        ColourCouter ( ".:: BASICS OF C++ ::.\n", F_bBLUE );
        //std::cout << "\n\n..........................:: BASICS OF C++ ::..........................\n\n";
        _2_1_StructureOfaProgram ();
        _2_2_VariablesTypesAndIdentifiers ();
        //_2_3_FundamentalTypesAndDeduction ();
        //_2_4_ConstantNumerals ();
        //_2_5_ConstantLiterals ();
        //_2_6_OtherConstantLiterals ();
        //_2_7_ArithmeticOperators ();
        //_2_8_LagicalOperators ();
        //_2_9_OtherOperators ();
        //_2_10_PrecedenceOfOperators ();
        //_2_11_BasicInputOutput ();


        //! ...............................:: PROGRAM STRUCTURE ::...............................
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        std::cout << ".:: PROGRAM STRUCTURE ::.\n";
        //ControlStructures ();
        //Functions ();
        //OverloadsAndTemplates ();
        //NameVisibility ();


        //! ..............................:: COMPOUND DATA TYPES ::..............................
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        std::cout << ".:: COMPOUND DATA TYPES ::.\n";
        //Arrays ();
        //CharacterSequences ();
        //Pointers ();
        //DynamicMemory ();
        //DataStructures ();
        //OtherDataTypes ();


        //! ....................................:: CLASSES ::....................................
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        std::cout << ".:: CLASSES ::.\n";
        //ClassesI ();
        //ClassesII ();



    }
    catch ( const std::exception& )
    {

    }

    //TODO add alternatives for the next expression
    system ( "PAUSE" );
    // return 0;
    return EXIT_SUCCESS; // see the tutorials > functions section > the return value of main
}