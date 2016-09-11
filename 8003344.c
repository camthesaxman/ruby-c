int __fastcall sub_8003344(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  unsigned int v3; // r5@1
  char v4; // r6@1
  int v5; // r1@1
  int v7; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = *(_BYTE *)(a1 + 14);
  v5 = *(_BYTE *)(a1 + 16);
  LOBYTE(a1) = v3 - v5;
  if ( (signed int)(v3 - v5) <= 8 )
    goto LABEL_5;
  *(_BYTE *)(v2 + 14) = 8 - ((*(_BYTE *)(v2 + 18) + v5) & 7);
  while ( *(_BYTE *)(v2 + 16) < v3 )
  {
    DrawSpace(v2);
    a1 = v3 - *(_BYTE *)(v2 + 16);
    if ( a1 > 7 )
      LOBYTE(a1) = 8;
LABEL_5:
    *(_BYTE *)(v2 + 14) = a1;
  }
  *(_BYTE *)(v2 + 14) = v4;
  return v7;
}
