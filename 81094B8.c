int tai49_unk()
{
  _BYTE *v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v0 = (_BYTE *)33704967;
  else
    v0 = (_BYTE *)33704968;
  v2016808 = GetGenderFromSpeciesAndPersonality(*(_WORD *)(88 * *v0 + 0x2024A80), *(_DWORD *)(88 * *v0 + 0x2024AC8));
  v2016808 = v2016808;
  v2039238 += 2;
  return v2;
}
