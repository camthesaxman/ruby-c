int sub_8108670()
{
  unsigned __int8 *v0; // r0@2
  int v1; // r4@4
  char v2; // r0@5
  int v3; // r0@7
  char *v4; // r3@11
  int v5; // r0@14
  int v7; // [sp+10h] [bp-4h]@0

  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v0 = (unsigned __int8 *)33704967;
  else
    v0 = (unsigned __int8 *)33704968;
  v1 = *v0;
  if ( battle_side_get_owner(*v0) << 24 )
  {
    v5 = *(_BYTE *)(88 * v1 + 0x2024AA0);
    goto _08108782;
  }
  v2 = battle_get_per_side_status(v1);
  if ( !*(_BYTE *)((v2 & 1) + 0x2016A20) )
  {
    v3 = *(_BYTE *)(88 * v1 + 0x2024AA0);
    if ( v3 == 23 || v3 == 42 || v3 == 71 )
    {
      v2016808 = *(_BYTE *)(88 * v1 + 0x2024AA0);
      goto _08108784;
    }
    v4 = (char *)&gBaseStats + 28 * *(_WORD *)(88 * v1 + 0x2024A80);
    if ( !v4[22] )
    {
      v2016808 = (unsigned __int8)v4[23];
      goto _08108784;
    }
    if ( !v4[23] )
    {
      v2016808 = (unsigned __int8)v4[22];
      goto _08108784;
    }
    if ( Random() & 1 )
      v5 = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v1 + 0x2024A80) + 22);
    else
      v5 = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v1 + 0x2024A80) + 23);
_08108782:
    v2016808 = v5;
    goto _08108784;
  }
  v2016808 = *(_BYTE *)((v2 & 1) + 0x2016A20);
_08108784:
  v2039238 += 2;
  return v7;
}
