int __fastcall sub_80C3588(int a1)
{
  int v1; // r3@1
  int v2; // r2@1
  int v3; // r0@1
  signed int v4; // r4@3
  signed int v5; // r5@3
  _WORD *v6; // r2@3
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 58) + *(_WORD *)(a1 + 60);
  v3 = *(_WORD *)(a1 + 32) - (v2 << 16 >> 24);
  *(_WORD *)(v1 + 32) = v3;
  *(_WORD *)(v1 + 60) = (unsigned __int8)v2;
  if ( (signed __int16)v3 < (signed int)*(_WORD *)(v1 + 54) )
    *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 54);
  v4 = 0;
  v5 = 64;
  v6 = (_WORD *)(v1 + 46);
  do
  {
    *(_WORD *)&gSprites[68 * *v6 + 32] = *(_WORD *)(v1 + 36) + *(_WORD *)(v1 + 32) + v5;
    v5 += 64;
    ++v6;
    ++v4;
  }
  while ( v4 <= 2 );
  if ( *(_WORD *)(v1 + 32) == *(_WORD *)(v1 + 54) )
    *(_DWORD *)(v1 + 28) = sub_80C35FC;
  return v8;
}
