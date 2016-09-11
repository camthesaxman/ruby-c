signed int __fastcall sub_8078B5C(int a1)
{
  int v1; // r2@1
  signed int result; // r0@2
  int v3; // r1@3
  int v4; // r4@3
  unsigned int v5; // r3@3
  int v6; // r6@3
  unsigned int v7; // r5@3
  int v8; // r0@4
  int v9; // r0@7

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    v3 = *(_WORD *)(a1 + 48);
    v4 = *(_WORD *)(a1 + 50);
    v5 = (*(_WORD *)(a1 + 52) + v3) << 16;
    v6 = (*(_WORD *)(a1 + 52) + v3) & 0xFFFF;
    v7 = (*(_WORD *)(a1 + 54) + v4) & 0xFFFF;
    if ( v3 & 1 )
      v8 = -(v5 >> 24);
    else
      v8 = v5 >> 24;
    *(_WORD *)(v1 + 36) = v8;
    if ( v4 & 1 )
      v9 = -(v7 >> 8);
    else
      v9 = v7 >> 8;
    *(_WORD *)(v1 + 38) = v9;
    *(_WORD *)(v1 + 52) = v6;
    *(_WORD *)(v1 + 54) = v7;
    --*(_WORD *)(v1 + 46);
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}
