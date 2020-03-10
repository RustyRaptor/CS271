//  CS278 - Lab Assignment: 6
//  Program name: C Strings
//  Purpose of program: Does Stringy Things
//  written by: Ziad Arafat
//  Date Written: 2020-03-09

#ifndef TEXTFUNCTIONS_H
#define TEXTFUNCTIONS_H

void blockPrint( const char *c );
void wordPrint( const char *c );
void removePunctuation( char *c );
void swap( char *aPtr, char *bPtr ); // for selection sort algorithm
void stringSort( char *c );

#endif