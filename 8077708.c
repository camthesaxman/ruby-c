int ma21_08074164()
{
  int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = v202F7A4++;
  if ( (signed __int16)(*(_BYTE *)(v202F7A4 + 1) | (unsigned __int16)(*(_BYTE *)(v202F7A4 + 2) << 8)) == word_3004B00[*v202F7A4] )
    v202F7A4 = *(_BYTE *)(v202F7A4 + 3)
             + (*(_BYTE *)(v202F7A4 + 4) << 8)
             + (*(_BYTE *)(v202F7A4 + 5) << 16)
             + (*(_BYTE *)(v202F7A4 + 6) << 24);
  else
    v202F7A4 = v0 + 8;
  return v2;
}
