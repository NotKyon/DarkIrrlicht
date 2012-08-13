/*
            File : Support/SimpleHelp.hpp
   DBPro release : 6.7
*/

#ifndef INCLUDE_GUARD_Support_SimpleHelp_hpp
#define INCLUDE_GUARD_Support_SimpleHelp_hpp

#include <Support\Core.hpp>
#include <cstring>

namespace DBPro
{
    inline void DeleteString(LPCSTR OldStr)
    {
        if (OldStr)
        {
            GetCore()->CreateDeleteString( (DWORD *)&OldStr, 0);
        }
    }

    inline LPSTR CreateString(int Size)
    {
        LPSTR NewString=NULL;
        GetCore()->CreateDeleteString( (DWORD *)&NewString, Size);
        return NewString;
    }

    inline LPSTR CreateString(LPCSTR Source)
    {
        int Size = (int)std::strlen(Source)+1;
        LPSTR NewString = CreateString( Size );
        CopyMemory( NewString, Source, Size );
        return NewString;
    }

    inline void Print(LPSTR Source)
    {
        GetCore()->PrintStringFunction(Source, false);
    }

    inline void PrintLn(LPSTR Source = 0)
    {
        GetCore()->PrintStringFunction(Source, true);
    }

    inline DWORD CastToFloat(const float &V)
    {
        return *(DWORD*)(&V);
    }

    class StringDeleter
    {
    public:
        StringDeleter(LPCSTR Str) : OldString(Str) {}
        ~StringDeleter() { if (OldString) DBPro::DeleteString(OldString); }
        void Abort() { OldString = 0; }
    private:
        LPCSTR OldString;

        /* Declared but not defined - will cause a linker error if attempting to copy the class */
        StringDeleter& operator=(const StringDeleter&);
        StringDeleter(const StringDeleter&);
    };
}

#endif

