int __fastcall sub_80DFC9C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  unsigned int v3; // r2@2
  int v4; // r1@2
  char *v5; // r0@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 6) == *((_BYTE *)v2 + 8) )
  {
    v3 = (*((_WORD *)v2 + 5) / 0x100u + 1) & 0xFF;
    v4 = (v3 << 8) | ((*((_WORD *)v2 + 5) & 0xFF) - 1) & 0xFF;
    *((_WORD *)v2 + 5) = v4;
    v4000052 = v4;
    *((_WORD *)v2 + 6) = 0;
    if ( v3 == 16 )
    {
      v5 = &gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0) + 62];
      *v5 |= 4u;
      move_anim_task_del(v1);
    }
  }
  else
  {
    ++*((_WORD *)v2 + 6);
  }
  return v7;
}
