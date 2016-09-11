int __fastcall sub_813F4EC(unsigned __int8 a1)
{
  unsigned __int8 v1; // ST00_1@1
  char *v2; // r6@1
  int v3; // ST04_4@1
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r9@1
  char *v7; // r5@1
  unsigned int v8; // r4@1
  int v10; // [sp+28h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * (unsigned __int8)byte_3004340[v202F7C8]];
  v3 = (unsigned __int8)v2[6];
  v4 = *((_WORD *)v2 + 28) & 0xFF;
  v5 = (unsigned __int8)AllocSpritePalette(-10487);
  v6 = (unsigned __int8)AllocSpritePalette(-10486);
  v7 = &gSprites[68 * v4];
  v8 = 16 * ((unsigned int)(unsigned __int8)v7[5] >> 4) | 0x100;
  v5 *= 16;
  LoadPalette(2 * (16 * ((unsigned int)(unsigned __int8)v2[5] >> 4) | 0x100) + 33745608, v5 + 256, 32);
  v6 *= 16;
  LoadPalette(2 * v8 + 33745608, v6 + 256, 32);
  v2[5] = v2[5] & 0xF | v5;
  gSprites[68 * v3 + 5] = gSprites[68 * v3 + 5] & 0xF | v5;
  v7[5] = v7[5] & 0xF | v6;
  move_anim_task_del(v1);
  return v10;
}
