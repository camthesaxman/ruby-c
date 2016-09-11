int __fastcall sub_80803BC(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  int v3; // r1@3
  unsigned int v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 34) - 1;
  *(_WORD *)(v1 + 34) = v2;
  if ( v2 < -48 )
  {
    *(_WORD *)(v1 + 34) = 208;
    *(_WORD *)(v1 + 46) = 4;
  }
  v3 = *(_WORD *)(v1 + 48);
  v4 = gSineTable[v3 + 64] * *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 36) = (unsigned int)(*(_WORD *)(v1 + 46) * gSineTable[v3]) >> 8;
  *(_WORD *)(v1 + 38) = v4 >> 8;
  *(_WORD *)(v1 + 48) = (*(_WORD *)(v1 + 48) + 10) & 0xFF;
  LOWORD(v4) = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v4;
  if ( (signed __int16)v4 > 8 )
  {
    *(_WORD *)(v1 + 50) = 0;
    ++*(_WORD *)(v1 + 46);
  }
  return v6;
}
