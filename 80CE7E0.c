int __fastcall sub_80CE7E0(unsigned __int8 a1)
{
  __int16 v1; // r8@1
  int *v2; // r6@1
  unsigned int v3; // r3@1
  unsigned int v4; // r4@1
  unsigned int v5; // r5@1
  unsigned int i; // r5@3
  char *v7; // r4@4
  int v8; // r0@6
  __int16 v9; // r1@8
  signed __int16 v10; // r0@8
  int v12; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  *((_WORD *)v2 + 4) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *((_WORD *)v2 + 5) = (unsigned __int8)AllocSpritePalette(10097);
  v3 = (unsigned int)((*((_WORD *)v2 + 5) << 20) + 0x1000000) >> 16;
  v4 = 16 * (((unsigned int)(unsigned __int8)gSprites[68 * *((_WORD *)v2 + 4) + 5] >> 4) + 16);
  v5 = 1;
  do
  {
    *(_WORD *)(2 * (v3 + v5) + 0x202EAC8) = *(_WORD *)(2 * (v4 + v5) + 0x202EAC8);
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 0xF );
  BlendPalette(v3, 0x10u, 0xBu, 0);
  *((_WORD *)v2 + 7) = 0;
  for ( i = 0; i <= 1; i = (i + 1) & 0xFFFF )
  {
    v8 = (signed __int16)duplicate_obj_of_side_rel2move_in_transparent_mode(0);
    if ( (signed __int16)v8 < 0 )
      break;
    v7 = &gSprites[68 * v8];
    v7[5] = v7[5] & 0xF | 16 * *((_BYTE *)v2 + 10);
    *((_WORD *)v7 + 23) = 0;
    *((_WORD *)v7 + 24) = (_WORD)i << 7;
    *((_WORD *)v7 + 25) = v1;
    dword_2020020[17 * v8] = (int)sub_80CE974;
    ++*((_WORD *)v2 + 7);
  }
  *v2 = (int)sub_80CE910;
  if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8) == 1 )
  {
    v9 = v4000000;
    v10 = -513;
  }
  else
  {
    v9 = v4000000;
    v10 = -1025;
  }
  v4000000 = v10 & v9;
  return v12;
}
