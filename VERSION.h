/*
Author: Andreas Weber
Matrikelnummer: 1540399

This is a Demo File to create an own DLL
*/

#ifndef INDLL_H
#define INDLL_H

#ifdef EXPORTING_DLL
extern __declspec(dllexport) void HelloWorld();
#else
extern __declspec(dllimport) void HelloWorld();
#endif

#endif