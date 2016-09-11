int __fastcall sub_80FBEA4(int a1)
{
  int v1; // r3@1
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r2@1
  __int16 v7; // r0@4
  int v9; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = v20388CC;
  v3 = -2 * *(_WORD *)(v20388CC + 92);
  *(_WORD *)(a1 + 36) = v3;
  v4 = -2 * *(_WORD *)(v2 + 94);
  *(_WORD *)(v1 + 38) = v4;
  v5 = *(_BYTE *)(v1 + 41) + *(_WORD *)(v1 + 34) + v4;
  *(_WORD *)(v1 + 46) = v5;
  v6 = *(_BYTE *)(v1 + 40) + *(_WORD *)(v1 + 32) + v3;
  *(_WORD *)(v1 + 48) = v6;
  v7 = 0;
  if ( ((v5 + 8) & 0xFFFFu) <= 0xB0 )
  {
    v6 = (signed __int16)v6;
    if ( (signed __int16)v6 >= -8 && v6 <= 248 )
      v7 = 1;
  }
  *(_WORD *)(v1 + 50) = v7;
  if ( *(_WORD *)(v1 + 50) == 1 )
    sub_80FBF40(v1);
  else
    *(_BYTE *)(v1 + 62) |= 4u;
  return v9;
}
