int sub_807775C()
{
  int v1; // [sp+4h] [bp-4h]@0

  ++v202F7A4;
  if ( sub_8076BE0() << 24 )
    v202F7A4 = *v202F7A4
             + (*(_BYTE *)(v202F7A4 + 1) << 8)
             + (*(_BYTE *)(v202F7A4 + 2) << 16)
             + (*(_BYTE *)(v202F7A4 + 3) << 24);
  else
    v202F7A4 += 4;
  return v1;
}
