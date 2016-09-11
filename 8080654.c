int __fastcall unc_0807DAB4(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  __int16 v3; // r0@3
  int v4; // r0@5
  __int16 v5; // r0@7
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 2;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 8 )
  {
    *(_WORD *)(v1 + 46) = 0;
    if ( *(_WORD *)(v1 + 48) )
    {
      v4 = *(_WORD *)(v1 + 36) - 1;
      *(_WORD *)(v1 + 36) = v4;
      if ( v4 << 16 <= 0 )
        *(_WORD *)(v1 + 48) = 0;
    }
    else
    {
      v3 = *(_WORD *)(v1 + 36) + 1;
      *(_WORD *)(v1 + 36) = v3;
      if ( v3 > 4 )
        *(_WORD *)(v1 + 48) = 1;
    }
  }
  *(_WORD *)(v1 + 34) -= 3;
  v5 = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v5;
  if ( v5 > 119 )
    DestroySprite(v1);
  return v7;
}
