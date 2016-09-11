int __fastcall sub_8051650(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  *(_WORD *)(a1 + 38) = ++*(_WORD *)(a1 + 46) / -3;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
    DestroySprite(a1);
  return v2;
}
