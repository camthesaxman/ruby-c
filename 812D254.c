int __fastcall sub_812D254(int a1)
{
  _WORD *v1; // r1@2
  int v3; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 63) & 0x10 )
  {
    v1 = &byte_3004B28[40 * *(_WORD *)(a1 + 46)] + 2 * *(_WORD *)(a1 + 48);
    --*v1;
    DestroySprite(a1);
  }
  return v3;
}
