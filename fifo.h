#ifndef __FIFO_H
#define __FIFO_H

#define FIFO_BUFFER_SIZE 32

// FIFO struct
typedef struct 
{
  volatile unsigned char data[FIFO_BUFFER_SIZE];
  volatile unsigned char raddr;
  volatile unsigned char waddr;
} fifo;

// FIFO access routines
int fifo_getchar(fifo *_fifo); 
int fifo_putchar(fifo *_fifo, int c);
unsigned char fifo_size(fifo *_fifo);

#endif 
