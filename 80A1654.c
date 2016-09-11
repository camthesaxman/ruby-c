int __fastcall sub_80A1654(char a1, unsigned __int8 a2)
{
  char v2; // r6@1
  __int16 v3; // r7@1
  unsigned int v4; // r4@3
  int *v5; // r3@5
  signed __int16 v6; // r0@6
  int *v7; // r0@8
  int v9; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( v201800B == 3 )
    MenuZeroFillWindowRect(0, 0xEu, 9u, 0x13u);
  v4 = (unsigned __int8)FindTaskIdByFunc((int)sub_80A1500);
  if ( v4 == 255 )
    v4 = CreateTask((int)sub_80A1500, 0) & 0xFF;
  v5 = &dword_3004B20[10 * v4];
  *((_WORD *)v5 + 4) = v2;
  if ( v2 >= 0 )
    v6 = 0;
  else
    v6 = 10;
  *((_WORD *)v5 + 5) = v6;
  v7 = &dword_3004B20[10 * v4];
  *((_WORD *)v7 + 6) = 0;
  *((_WORD *)v7 + 7) = v3;
  return v9;
}
