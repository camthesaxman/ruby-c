int __fastcall sub_80A8B3C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r1@1
  char *v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = &gSprites[68 * *((_BYTE *)v2 + 8)];
  *((_WORD *)v3 + 18) += *((_WORD *)v2 + 5);
  if ( (unsigned int)(*((_WORD *)v3 + 18) + *((_WORD *)v3 + 16) + 32) > 0x130 )
    move_anim_task_del(v1);
  return v5;
}
