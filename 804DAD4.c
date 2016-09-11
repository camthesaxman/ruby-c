int __fastcall sub_804DAD4(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  char *v4; // r2@1
  _WORD *v5; // r1@1
  signed int v6; // r3@1
  unsigned int v7; // r1@3
  int v9; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (char *)&gIngameTradeMail + 20 * *(_BYTE *)(a2 + 42);
  v5 = (_WORD *)a1;
  v6 = 8;
  do
  {
    *v5 = *(_WORD *)v4;
    v4 += 2;
    ++v5;
    --v6;
  }
  while ( v6 >= 0 );
  StringCopy((_BYTE *)(a1 + 18), (_BYTE *)(v3 + 43));
  v7 = *(_DWORD *)(v3 + 24);
  *(_BYTE *)(v2 + 26) = BYTE3(v7);
  *(_BYTE *)(v2 + 27) = v7 >> 16;
  *(_BYTE *)(v2 + 28) = BYTE1(v7);
  *(_BYTE *)(v2 + 29) = v7;
  *(_WORD *)(v2 + 30) = *(_WORD *)(v3 + 12);
  *(_WORD *)(v2 + 32) = *(_WORD *)(v3 + 40);
  return v9;
}
