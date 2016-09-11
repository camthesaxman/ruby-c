int __fastcall sub_812E0F8(int a1)
{
  int v1; // r3@1
  _BYTE *v2; // r12@1
  int v3; // r2@2
  __int16 v4; // r0@2
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = (_BYTE *)(a1 + 62);
  if ( !(*(_BYTE *)(a1 + 62) & 4) )
  {
    v3 = *(_WORD *)(a1 + 50) + *(_WORD *)(a1 + 52);
    *(_WORD *)(a1 + 38) -= v3 << 16 >> 24;
    *(_WORD *)(a1 + 52) = (unsigned __int8)v3;
    v4 = *(_WORD *)(a1 + 48) - 1;
    *(_WORD *)(v1 + 48) = v4;
    if ( v4 == -1 )
    {
      *v2 |= 4u;
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
    }
  }
  return v6;
}
