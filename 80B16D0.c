int __fastcall sub_80B16D0(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  *(_WORD *)(v1 + 48) = v2 + 1;
  if ( v2 > 84 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
    v201920A &= 0xEFu;
  }
  return v4;
}
