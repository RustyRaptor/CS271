//  CS278 - Lab Assignment: #
//  Program name: progname
//  Purpose of program: progpurpose
//  written by: Ziad Arafat
//  Date Written: 2020-02-24

#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

void fillInteger( int a[], int length, int min, int max );

void fillCharacter( char c[], int length, char start, char end );

void findConsecutive( int array[], int length );

void findTriples( char c[], int length );

void findWords( char *c[], int length, char letter );

void fillFloat( float a[], int length, float min, float max );

float floatMean( float array[], int length );

float floatMin( float array[], int length );

float floatMax( float array[], int length );

#endif