int __fastcall sub_80C9458(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  unsigned int v3; // r7@1
  _BYTE *v4; // r4@1
  int v5; // r0@3
  int v6; // r2@5
  int v7; // r1@5
  char *v8; // r0@6
  int v10; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = 40 * a1;
  v4 = &byte_3004B28[v3];
  if ( *(_WORD *)&byte_3004B28[v3 + 6] )
    goto _080C950C;
  if ( *((_WORD *)v4 + 4) != 4 )
  {
    audio_play(0x48u);
    ++*((_WORD *)v4 + 4);
_080C950C:
    *((_WORD *)v4 + 3) = (*((_WORD *)v4 + 3) + 1) & 0x1F;
    return v10;
  }
  v5 = (unsigned __int8)sub_80C9908(*(_WORD *)v4, *((_WORD *)v4 + 1));
  if ( v5 )
  {
    sub_80C997C((unsigned __int8)gUnknown_083D61F0[v5 - 1]);
    dword_3004B20[v3 / 4] = (int)sub_80C99EC;
  }
  else
  {
    v6 = player_get_direction_lower_nybble() & 0xFF;
    v7 = 0;
    do
    {
      v8 = &gUnknown_083D61F0[v7];
      LOBYTE(v7) = v7 + 1;
      if ( v6 == (unsigned __int8)*v8 )
        *((_WORD *)v4 + 5) = v7 & 3;
      v7 = (unsigned __int8)v7;
    }
    while ( (unsigned __int8)v7 <= 3u );
    dword_3004B20[2 * (v2 + v1)] = (int)sub_80C9A38;
    *((_WORD *)v4 + 3) = 0;
    *((_WORD *)v4 + 2) = 0;
  }
  return v10;
}
