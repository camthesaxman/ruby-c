int __fastcall sub_80F2BBC(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  __int16 v3; // r3@1
  signed int v4; // r1@1
  void (*v5)(); // r0@7
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 32);
  v3 = v2 + *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 32) = v3;
  v4 = *(_WORD *)(v1 + 48);
  if ( v2 > v4 )
  {
_080F2BE0:
    if ( v3 > v4 )
      return v7;
    goto _080F2BE8;
  }
  if ( v3 < v4 )
  {
    if ( v2 < v4 )
      return v7;
    goto _080F2BE0;
  }
_080F2BE8:
  *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 48);
  if ( *(_WORD *)(v1 + 52) != 4 || *(_WORD *)(v1 + 50) != 1 )
    v5 = SpriteCallbackDummy;
  else
    v5 = (void (*)())sub_80F2C58;
  *(_DWORD *)(v1 + 28) = v5;
  return v7;
}
