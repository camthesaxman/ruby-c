int __fastcall sub_80E4368(unsigned __int8 a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( word_3004B0E == 4096 )
  {
    *(_BYTE *)(4 * v202F7C8 + 0x2017800) = *(_BYTE *)(4 * v202F7C8 + 0x2017800) & 0xFE | dword_3004B20[10 * a1 + 2] & 1;
    DestroyTask(a1);
  }
  return v2;
}
