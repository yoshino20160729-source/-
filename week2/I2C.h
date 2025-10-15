#pragma once
#ifndef I2C_H
#define I2C_H

void Start(void);
void Stop(void);
void SendByte(unsigned int byte);
unsigned int ReceiveAck(void);
void SendData(unsigned int byte);
#endif