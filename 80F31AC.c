int __fastcall sub_80F31AC(int a1)
{
  int v1; // r3@1
  char v2; // r2@4
  _BYTE *v3; // r0@6
  _BYTE *v4; // r12@6
  char v5; // r2@6
  char v6; // r4@7
  __int16 v7; // r0@11
  __int16 v8; // r0@12
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( v20087C9 )
  {
    if ( *(_WORD *)(a1 + 54) )
    {
      if ( *(_WORD *)(a1 + 52) )
      {
        v6 = 0;
        if ( v2008772 == v2008774 )
          v6 = 1;
        v3 = (_BYTE *)(a1 + 62);
        v4 = (_BYTE *)(v1 + 62);
        v5 = 4 * v6;
      }
      else
      {
        v2 = 0;
        if ( !v2008770 )
          v2 = 1;
        v3 = (_BYTE *)(a1 + 62);
        v4 = (_BYTE *)(v1 + 62);
        v5 = 4 * v2;
      }
      *v4 = *v3 & 0xFB | v5;
      *(_WORD *)(v1 + 54) = 0;
    }
    v7 = *(_WORD *)(v1 + 46) + 1;
    *(_WORD *)(v1 + 46) = v7;
    if ( v7 > 4 )
    {
      *(_WORD *)(v1 + 46) = 0;
      v8 = *(_WORD *)(v1 + 48) + 1;
      *(_WORD *)(v1 + 48) = v8;
      if ( v8 > 4 )
      {
        *(_WORD *)(v1 + 48) = 0;
        *(_WORD *)(v1 + 38) = 0;
      }
      else
      {
        *(_WORD *)(v1 + 38) += *(_WORD *)(v1 + 50);
      }
    }
  }
  return v10;
}
