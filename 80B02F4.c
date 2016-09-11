int __fastcall sub_80B02F4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x20 )
  {
    FreeSpriteOamMatrix(a1);
    *(_BYTE *)(v1 + 1) &= 0xFCu;
    *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
  }
  return v3;
}
