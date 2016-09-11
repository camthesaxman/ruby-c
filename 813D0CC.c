int __fastcall sub_813D0CC(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@4
  unsigned int v3; // r0@6
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 50) <= 191 )
  {
    DestroySprite(a1);
  }
  else if ( *(_WORD *)(a1 + 52) )
  {
    --*(_WORD *)(a1 + 52);
  }
  else
  {
    *(_BYTE *)(a1 + 62) &= 0xFBu;
    SetOamMatrix(*(_WORD *)(a1 + 48) & 0xFF, *(_WORD *)(a1 + 50), 0, 0, *(_WORD *)(a1 + 50));
    *(_WORD *)(v1 + 50) = 95 * *(_WORD *)(v1 + 50) / 100;
    v2 = *(_WORD *)(v1 + 50) - 192;
    if ( v2 < 0 )
      v2 = *(_WORD *)(v1 + 50) - 65;
    v3 = ((v2 >> 7) + 9) & 0xFF;
    if ( v3 > 0xF )
      LOBYTE(v3) = 15;
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF | 16 * v3;
  }
  return v5;
}
