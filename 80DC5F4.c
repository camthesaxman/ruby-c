int __fastcall sub_80DC5F4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    *((_WORD *)v2 + 5) -= 4;
    *((_WORD *)v2 + 6) = 256 - (gSineTable[*((_WORD *)v2 + 5)] << 16 >> 17);
    obj_id_set_rotscale(*((_BYTE *)v2 + 38), *((_WORD *)v2 + 6), *((_WORD *)v2 + 6), 0);
    sub_8079AB8(*((_BYTE *)v2 + 38), *((_BYTE *)v2 + 34));
    if ( *((_WORD *)v2 + 5) )
      return v5;
    goto _080DC6DA;
  }
  if ( v3 > 1 )
  {
    if ( v3 != 2 )
    {
      if ( v3 == 3 )
      {
        FreeOamMatrix(*((_BYTE *)v2 + 36));
        move_anim_task_del(v1);
      }
      return v5;
    }
    obj_delete_but_dont_free_vram((int)&gSprites[68 * *((_WORD *)v2 + 19)]);
_080DC6DA:
    ++*((_WORD *)v2 + 4);
    return v5;
  }
  if ( !*((_WORD *)v2 + 4) )
  {
    *((_WORD *)v2 + 5) += 4;
    *((_WORD *)v2 + 6) = 256 - (gSineTable[*((_WORD *)v2 + 5)] << 16 >> 17);
    obj_id_set_rotscale(*((_BYTE *)v2 + 38), *((_WORD *)v2 + 6), *((_WORD *)v2 + 6), 0);
    sub_8079AB8(*((_BYTE *)v2 + 38), *((_BYTE *)v2 + 34));
    if ( *((_WORD *)v2 + 5) == 48 )
      goto _080DC6DA;
  }
  return v5;
}
