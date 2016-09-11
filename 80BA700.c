int __fastcall sub_80BA700(unsigned __int16 a1, char a2, unsigned __int8 a3)
{
  char v3; // r6@1
  unsigned int v4; // r1@1
  signed int v5; // r4@3
  char v7; // [sp+0h] [bp-1Ch]@2
  char v8; // [sp+1h] [bp-1Bh]@7
  char v9; // [sp+2h] [bp-1Ah]@8
  char v10; // [sp+3h] [bp-19h]@3
  char v11; // [sp+4h] [bp-18h]@3
  int v12; // [sp+18h] [bp-4h]@8

  v3 = a2;
  v4 = 0;
  do
  {
    *(&v7 + v4) = 0;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 2 );
  v10 = -80;
  v11 = -1;
  v5 = 0;
  if ( a1 / 0x64u & 0xFF )
  {
    v7 = a1 / 0x64u - 95;
    v5 = 1;
  }
  if ( (a1 % 0x64u & 0xFFFF) / 0xA & 0xFF || v5 )
    v8 = (a1 % 0x64u & 0xFFFF) / 0xA - 95;
  v9 = (a1 % 0x64u & 0xFFFF) % 0xA - 95;
  MenuPrint((int)&v7, v3, a3);
  return v12;
}
