/*
Author: Andreas Weber
Matrikelnummer: 1540399

This is a Demo File to create an own DLL
*/


#include <Windows.h>
#include <iostream>
#include 

//When you create a DLL, you can optionally specify 
//an entry point function. The entry point function is called when processes or 
//threads attach themselves to the DLL or detach themselves from the DLL

BOOL APIENTRY DllMain(
    HANDLE hModule,	        // Handle to DLL module  
    DWORD ul_reason_for_call, 
    LPVOID lpReserved )     // Reserved
{
   HelloWorld();
   return TRUE;
}

void HelloWorld()
{
   MessageBox( NULL, TEXT("Hello World"), 
   TEXT("In a DLL"), MB_OK);
}