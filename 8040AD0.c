signed int __fastcall sub_8040AD0(int a1, _BYTE *a2)
{
  int v2; // r4@2
  _BYTE *v3; // r2@3

  if ( a1 == (v2024EAE | (v2024EAF << 8) | (v2024EB0 << 16) | (v2024EB1 << 24)) )
  {
    v2 = 0;
    if ( *a2 == 255 )
      return 0;
    v3 = a2;
    while ( *v3 == *(_BYTE *)(v2 + 33705636) )
    {
      ++v3;
      ++v2;
      if ( *v3 == 255 )
        return 0;
    }
  }
  return 1;
}
