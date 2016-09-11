signed int __fastcall sub_8101200(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r6@1
  int *v4; // r2@1
  int v5; // r7@1
  int v6; // r8@1
  unsigned int v7; // r0@1
  unsigned int v8; // r4@1
  unsigned int v9; // r5@1
  int v10; // r1@5
  signed int result; // r0@8

  v3 = a3;
  v4 = &dword_3004B20[10 * a1];
  v5 = (*((_BYTE *)v4 + 8) - 7) & 0xFF;
  v6 = (*((_BYTE *)v4 + 10) - 7) & 0xFF;
  v7 = *(_BYTE *)(v201F004 + a2);
  v8 = v7 >> 4;
  v9 = v7 & 0xF;
  if ( *(_BYTE *)(v201F000 + a2) == 41 && MapGridGetMetatileIdAt(v8 + 7, v9 + 7) == 652 )
    --*(_BYTE *)(v3 + 2);
  if ( v5 < v8
    || (v10 = *(_BYTE *)(v3 + 1), v5 >= (signed int)(v8 + v10))
    || v6 <= (signed int)(v9 - *(_BYTE *)(v3 + 2))
    || v6 > v9 )
  {
    result = 0;
  }
  else
  {
    sub_8101198((v10 - (v5 - v8 + 1)) & 0xFF, (v9 - v6) & 0xFF);
    result = 1;
  }
  return result;
}
