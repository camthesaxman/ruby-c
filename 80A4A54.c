signed int __fastcall sub_80A4A54(_BYTE *a1, _BYTE *a2, int a3)
{
  int v3; // r4@1
  _BYTE *v4; // r2@1
  _BYTE *v5; // r1@1
  int v6; // r3@2

  v3 = a3 + 1;
  v4 = a2;
  v5 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *v4;
      if ( ((v6 + 2) & 0xFFu) <= 1 )
        break;
      *v5 = v6;
      ++v4;
      ++v5;
    }
    if ( !--v3 )
    {
      *v5 = -1;
      return 1;
    }
    if ( (unsigned __int8)v6 == 255 )
      break;
    v5 = a1;
    ++v4;
  }
  return 0;
}
