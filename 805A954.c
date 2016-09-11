int sub_805A954()
{
  char *v0; // r4@1
  int v1; // r5@1
  int v2; // r5@4
  int v4; // [sp+10h] [bp-4h]@0

  v0 = &gSprites[68 * v202E85C];
  AnimateSprite((int)v0);
  *((_WORD *)v0 + 18) = 0;
  *((_WORD *)v0 + 19) = 0;
  v1 = (unsigned __int8)v0[43];
  if ( *(_WORD *)(4 * v1 + *(_DWORD *)(4 * (unsigned __int8)v0[42] + *((_DWORD *)v0 + 2))) == -1
    || (v0[44] = v0[44] & 0xC0 | ((v0[44] & 0x3F) + 1) & 0x3F,
        *(_WORD *)(4 * v1 + *(_DWORD *)(4 * (unsigned __int8)v0[42] + *((_DWORD *)v0 + 2))) == -1) )
  {
    v1 = (v1 - 1) & 0xFF;
  }
  v2 = *(_BYTE *)(4 * v1 + *(_DWORD *)(4 * (unsigned __int8)v0[42] + *((_DWORD *)v0 + 2)));
  if ( ((v2 - 1) & 0xFFu) <= 2 )
  {
    *((_WORD *)v0 + 18) = 8;
    if ( (unsigned __int8)player_get_direction_lower_nybble() == 3 )
      *((_WORD *)v0 + 18) = -8;
  }
  if ( v2 == 5 )
    *((_WORD *)v0 + 19) = -8;
  if ( ((v2 - 10) & 0xFFu) <= 1 )
    *((_WORD *)v0 + 19) = 8;
  if ( v202E858 & 8 )
    sub_8127F28(BYTE2(dword_30048A0[9 * v202E85D + 6]), 1, *((_WORD *)v0 + 19));
  return v4;
}
