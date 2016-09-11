signed int sub_809B960()
{
  int *v0; // r12@1
  unsigned int v2; // r5@6
  int v3; // r4@7
  __int16 v4; // r0@9
  signed int v5; // r2@14
  unsigned int v6; // r5@18
  int v7; // r0@19

  v0 = &gUnknown_083B6DB4;
  if ( v200267D )
    return v200267C;
  if ( v2002684 )
  {
    if ( v2002684 != 1 )
      return -1;
    v6 = 0;
    while ( 1 )
    {
      LOWORD(v7) = GetBoxMonData((unsigned int *)(2400 * v2002680 + 80 * v2002681 + 33751204), 80, (_BYTE *)0x2002686);
      if ( (_WORD)v7 && v2002682 != v2002680 )
      {
        if ( v7 & 1 )
          v200267E = 0;
        if ( v7 & 2 )
          v200267F = 0;
      }
      ++v2002681;
      if ( v2002681 > 29 )
      {
        v2002681 = 0;
        ++v2002680;
        if ( v2002680 > 13 )
          break;
      }
      v6 = (v6 + 1) & 0xFFFF;
      if ( v6 > 4 )
        goto _0809BB3C;
    }
    v200267D = 1;
    v200267C = 0;
_0809BB3C:
    v5 = 0x2000000;
    if ( v200267E )
      return -1;
    v200267D = 1;
    goto _0809BB54;
  }
  v2 = 0;
  do
  {
    v3 = *v0;
    if ( *(_BYTE *)(*v0 + 9858) != 14 || *(_BYTE *)(v3 + 9859) != v2 )
    {
      v4 = GetMonData((int)&dword_3004360[25 * v2], 80, v3 + 9862);
      if ( v4 & 1 )
        *(_BYTE *)(v3 + 9854) = 0;
      v0 = &gUnknown_083B6DB4;
      if ( v4 & 2 )
        *(_BYTE *)(v3 + 9855) = 0;
    }
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 5 );
  v5 = *v0;
  if ( !*(_WORD *)(*v0 + 9854) )
  {
    *(_BYTE *)(v5 + 9853) = 1;
_0809BB54:
    *(_BYTE *)(v5 + 9852) = 1;
    return -1;
  }
  *(_BYTE *)(v5 + 9856) = 0;
  *(_BYTE *)(v5 + 9857) = 0;
  ++*(_WORD *)(v5 + 9860);
  return -1;
}
