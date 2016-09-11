int __fastcall sub_81312E4(unsigned __int8 a1)
{
  int v1; // r6@1
  unsigned __int8 v2; // r0@1
  int v3; // r5@1
  int *v4; // r4@1
  __int16 v5; // r0@4
  signed int v6; // r1@9
  char *v7; // r0@9
  int v9; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = obj_id_for_side_relative_to_move(0);
  v3 = v2;
  v4 = &dword_3004B20[10 * v1];
  if ( !*((_WORD *)v4 + 4) )
  {
    sub_8078E70(v2, 0);
    *((_WORD *)v4 + 5) = 256;
    *((_WORD *)v4 + 6) = 256;
_08131378:
    ++*((_WORD *)v4 + 4);
    return v9;
  }
  if ( *((_WORD *)v4 + 4) == 1 )
  {
    *((_WORD *)v4 + 5) += 96;
    *((_WORD *)v4 + 6) -= 13;
    obj_id_set_rotscale(v2, *((_WORD *)v4 + 5), *((_WORD *)v4 + 6), 0);
    v5 = *((_WORD *)v4 + 7) + 1;
    *((_WORD *)v4 + 7) = v5;
    if ( v5 == 9 )
    {
      *((_WORD *)v4 + 7) = 0;
      sub_8078F40(v3);
      gSprites[68 * v3 + 62] |= 4u;
      goto _08131378;
    }
  }
  else
  {
    refresh_graphics_maybe(v202F7C8, 0, v2);
    if ( sub_8076BE0() << 24 )
    {
      *((_DWORD *)&unk_2020014 + 17 * *(_BYTE *)(v202F7C8 + 0x2024BE0)) = &gSpriteAffineAnimTable_81E7C18;
      StartSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0)], 0);
    }
    v6 = 15;
    v7 = (char *)&dword_3004B20[10 * v1 + 9] + 2;
    do
    {
      *(_WORD *)v7 = 0;
      v7 -= 2;
      --v6;
    }
    while ( v6 >= 0 );
    dword_3004B20[10 * v1] = (int)sub_8131408;
  }
  return v9;
}
