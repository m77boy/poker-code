///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2009 James Devlin
//
// DISCLAIMER OF WARRANTY
//
// This source code is provided "as is" and without warranties as to performance
// or merchantability. The author and/or distributors of this source code may 
// have made statements about this source code. Any such statements do not 
// constitute warranties and shall not be relied on by the user in deciding 
// whether to use this source code.
//
// This source code is provided without any express or implied warranties 
// whatsoever. Because of the diversity of conditions and hardware under which
// this source code may be used, no warranty of fitness for a particular purpose
// is offered. The user is advised to test the source code thoroughly before 
// relying on it. The user must assume the entire risk of using the source code.
//
///////////////////////////////////////////////////////////////////////////////

#include "StdAfx.h"
#include "Card.h"

const char* Card::m_rankChars = "23456789TJQKA";
const char* Card::m_suitChars = "hdcs";

Card::Card(void)
{
}

Card::~Card(void)
{
}

int Card::CharToRank(TCHAR c)
{
	switch (c)
	{
		case 'A':	return 12;
		case 'K':	return 11;
		case 'Q':	return 10;
		case 'J':	return 9;
		case 'T':	return 8;
		case '9':	return 7;
		case '8':	return 6;
		case '7':	return 5;
		case '6':	return 4;
		case '5':	return 3;
		case '4':	return 2;
		case '3':	return 1;
		case '2':	return 0;
	};

	return -1;
}


int Card::CharToSuit(TCHAR s)
{
	switch (s)
	{
		case 's':	return 3;
		case 'c':	return 2;
		case 'd':	return 1;
		case 'h':	return 0;
	};

	return -1;
}

TCHAR Card::RankToChar(int rank)
{
	return m_rankChars[rank];
}

TCHAR Card::SuitToChar(int suit)
{
	return m_suitChars[suit];
}