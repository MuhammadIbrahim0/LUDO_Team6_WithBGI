#include"box.h"

Piece* Box::getpiece(LUDOCOLORS C) 
{
	if (no_of_pieces == 0 || m_piece == nullptr)return nullptr;
	for (int i = 0; i < no_of_pieces; i++)
	{
		if(m_piece[i]->m_color == C)return m_piece[i];
	}
	return nullptr;
}

bool Box::hasAnyPiece() 
{
	return (no_of_pieces != 0);
}

int Box::howManyOfThisColor(LUDOCOLORS C) 
{
	if (no_of_pieces == 0 || m_piece == nullptr)return 0;
	int count = 0;
	for (int i = 0; i < no_of_pieces; i++)
	{
		if (m_piece[i]->m_color == C)count++;
	}
	return count;
}

bool Box::hasPiece(LUDOCOLORS C) 
{
	if (no_of_pieces == 0 || m_piece == nullptr)return false;
	for (int i = 0; i < no_of_pieces; i++)
	{
		if (m_piece[i]->m_color == C)return true;
	}
	return false;
}

void Box::placePiece(Piece* p)
{
	Piece** newPs= new Piece * [no_of_pieces + 1];
	for (int i = 0; i < no_of_pieces; i++)
	{
		newPs[i] = m_piece[i];
	}
	newPs[no_of_pieces] = p;
	delete[] m_piece;
	m_piece = newPs;
	no_of_pieces++;
}

void Box::removePiece(Piece* C)
{
	int i = 0;
	Piece** newPs = new Piece * [no_of_pieces - 1];
	for (i; m_piece[i] != C; i++)
	{
		newPs[i] = m_piece[i];
	}
	i++;
	for (i; i < no_of_pieces; i++)
	{
		newPs[i-1] = m_piece[i];
	}
	delete[] m_piece;
	m_piece = newPs;
	no_of_pieces--;
}
