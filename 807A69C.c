int __fastcall sub_807A69C(unsigned __int8 a1)
{
  int *v1; // r5@1
  int v2; // r0@1
  signed __int16 v3; // r1@1
  char *v4; // r0@3
  int v5; // r6@3
  unsigned int v6; // r4@3
  int v7; // r0@3
  signed __int16 v8; // r0@5
  int v10; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  v2 = battle_side_get_owner(v202F7C8);
  v3 = 8;
  if ( v2 << 24 )
    v3 = -8;
  *((_WORD *)v1 + 5) = v3;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = 0;
  v4 = &gSprites[68 * *((_WORD *)v1 + 4)];
  *((_WORD *)v4 + 18) -= *((_WORD *)v1 + 4);
  *((_WORD *)v1 + 8) = (unsigned __int8)AllocSpritePalette(10097);
  *((_WORD *)v1 + 9) = 0;
  v5 = 16 * (*((_WORD *)v1 + 8) + 16) & 0xFFFF;
  v6 = 16 * (((unsigned int)(unsigned __int8)gSprites[68 * *((_WORD *)v1 + 4) + 5] >> 4) + 16);
  v7 = (unsigned __int8)sub_8079E90(v202F7C8);
  *((_WORD *)v1 + 10) = v7;
  if ( v7 != 20 && v7 != 40 )
    v8 = 3;
  else
    v8 = 2;
  *((_WORD *)v1 + 10) = v8;
  CpuSet(2 * v6 + 33745608, 2 * v5 + 33746632, 67108872);
  BlendPalette(v5, 0x10u, word_3004B02, word_3004B00[0]);
  *v1 = (int)sub_807A784;
  return v10;
}
