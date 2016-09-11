int __fastcall sub_813F5E8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r8@1
  char *v2; // r5@1
  int v3; // r10@1
  int v4; // r6@1
  char v5; // r4@1
  char v6; // r0@1
  int v8; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * (unsigned __int8)byte_3004340[v202F7C8]];
  v3 = (unsigned __int8)v2[6];
  v4 = *((_WORD *)v2 + 28) & 0xFF;
  FreeSpritePaletteByTag(0xD709u);
  FreeSpritePaletteByTag(0xD70Au);
  v5 = IndexOfSpritePaletteTag(0xD6FFu);
  v6 = IndexOfSpritePaletteTag(0xD704u);
  v5 *= 16;
  v2[5] = v2[5] & 0xF | v5;
  gSprites[68 * v3 + 5] = gSprites[68 * v3 + 5] & 0xF | v5;
  gSprites[68 * v4 + 5] = gSprites[68 * v4 + 5] & 0xF | 16 * v6;
  move_anim_task_del(v1);
  return v8;
}
