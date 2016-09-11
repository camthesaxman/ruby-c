int ReadKeys()
{
  int v0; // r0@3
  __int16 *v1; // r0@4
  int v3; // [sp+0h] [bp-4h]@0

  word_300179A = (v4000130 ^ 0x3FF) & ~word_3001798;
  word_300179E = (v4000130 ^ 0x3FF) & ~word_3001798;
  word_30017A0 = (v4000130 ^ 0x3FF) & ~word_3001798;
  if ( v4000130 == 1023 || (unsigned __int16)word_300179C != (v4000130 ^ 0x3FF) )
  {
    v1 = &gKeyRepeatStartDelay;
  }
  else
  {
    v0 = (unsigned __int16)word_30017A2-- - 1;
    if ( v0 << 16 )
      goto LABEL_7;
    word_30017A0 = v4000130 ^ 0x3FF;
    v1 = &gKeyRepeatContinueDelay;
  }
  word_30017A2 = *v1;
LABEL_7:
  word_3001798 = v4000130 ^ 0x3FF;
  word_300179C = v4000130 ^ 0x3FF;
  if ( v2024EB7 == 2 )
  {
    if ( word_300179E & 0x200 )
      word_300179E |= 1u;
    if ( word_300179C & 0x200 )
      word_300179C |= 1u;
  }
  if ( (unsigned __int16)word_30017A6 & (unsigned __int16)word_300179E )
    word_30017A4 = 1;
  return v3;
}
