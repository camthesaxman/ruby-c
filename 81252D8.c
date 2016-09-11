int __fastcall sub_81252D8(unsigned __int16 a1, int a2)
{
  unsigned __int16 v2; // r6@1
  unsigned int v3; // r5@1
  int v4; // r0@1
  int v5; // r10@1
  unsigned int v6; // r4@1
  unsigned int v7; // r3@1
  int v8; // r1@3
  unsigned int v9; // r3@3
  unsigned int i; // r5@3
  __int16 v11; // r0@5

  v2 = a1;
  v3 = ((((a1 + (unsigned __int16)word_3005E9C) & 0xFFFFu) % 0xE & 0xFFFF) + 14 * (dword_3005EAC & 1)) & 0xFFFF;
  v4 = 8 * a1 + a2;
  v5 = *(_DWORD *)v4;
  v6 = *(_WORD *)(v4 + 4);
  v7 = 0;
  do
  {
    *(_BYTE *)(dword_3005EB0 + v7) = 0;
    v7 = (v7 + 1) & 0xFFFF;
  }
  while ( v7 <= 0xFFF );
  v8 = dword_3005EB0;
  *(_WORD *)(dword_3005EB0 + 4084) = v2;
  *(_DWORD *)(v8 + 4088) = (char *)&08012024 + 1;
  *(_DWORD *)(v8 + 4092) = dword_3005EAC;
  v9 = 0;
  for ( i = v3 << 24; v9 < v6; v9 = (v9 + 1) & 0xFFFF )
    *(_BYTE *)(dword_3005EB0 + v9) = *(_BYTE *)(v5 + v9);
  v11 = sub_8125C10(v5, v6);
  *(_WORD *)(dword_3005EB0 + 4086) = v11;
  return (unsigned __int8)sub_8125440(i >> 24);
}
