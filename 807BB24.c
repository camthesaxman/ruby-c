int __fastcall sub_807BB24(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r1@1
  __int16 v3; // r0@1
  char *v4; // r4@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 5) = v3;
  if ( v3 == 37 )
  {
    v4 = &gSprites[68 * (*((_WORD *)v2 + 19) & 0xFF)];
    FreeSpriteOamMatrix((int)v4);
    DestroySprite((int)v4);
  }
  else if ( v3 == 39 )
  {
    v4000050 = 0;
    v4000052 = 0;
    move_anim_task_del(v1);
  }
  return v6;
}
