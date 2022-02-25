#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_
void LCD_Init(void);
void LCD_SendCommand(u8 CmdCpy);
void LCD_WriteChar(u8 DataCpy);
void LCD_WriteString(u8 *StrCpy);
void Gotoyx(u8 Y,u8 X);
void LCD_CLR();
void LCD_WriteExtraChar(u8 Y,u8 X);


#endif /* LCD_INTERFACE_H_ */