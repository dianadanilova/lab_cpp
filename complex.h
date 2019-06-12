#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
struct complex
{
double x;
double y;
};

void read_complex(struct complex *a, int size);
#endif