int __fastcall sub_80DE2DC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  signed int v3; // r0@1
  __int16 v4; // r1@7
  __int16 v5; // r0@16
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 8);
  if ( v3 == 1 )
  {
    v5 = *((_WORD *)v2 + 10) + 1;
    *((_WORD *)v2 + 10) = v5;
    if ( v5 > 1 )
    {
      v4000050 = 0;
      v4000052 = 0;
      ++*((_WORD *)v2 + 8);
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
      move_anim_task_del(v1);
  }
  else if ( !*((_WORD *)v2 + 8) )
  {
    v4 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v4;
    *((_WORD *)v2 + 9) = v4 & 3;
    if ( (v4 & 3) == 1 && (signed int)*((_WORD *)v2 + 6) > 0 )
      --*((_WORD *)v2 + 6);
    if ( *((_WORD *)v2 + 9) == 3 && (signed int)*((_WORD *)v2 + 7) <= 15 )
      ++*((_WORD *)v2 + 7);
    v4000052 = (*((_WORD *)v2 + 7) << 8) | *((_WORD *)v2 + 6);
    if ( v2[3] == 0x100000 && (signed int)*((_WORD *)v2 + 5) > 80 )
    {
      obj_delete_but_dont_free_vram((int)&gSprites[68 * *((_WORD *)v2 + 4)]);
      *((_WORD *)v2 + 8) = 1;
    }
  }
  return v7;
}
