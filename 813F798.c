int __fastcall sub_813F798(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int v2; // r5@1
  int *v3; // r4@1
  signed int v4; // r0@1
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_BYTE *)(v202F7C8 + 0x2024BE0);
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_WORD *)v3 + 4);
  if ( v4 == 1 )
  {
    *((_WORD *)v3 + 14) += 48;
    obj_id_set_rotscale(v2, *((_WORD *)v3 + 14), *((_WORD *)v3 + 14), 0);
    sub_8079A64(v2);
    if ( (signed int)*((_WORD *)v3 + 14) > 719 )
    {
_0813F80A:
      ++*((_WORD *)v3 + 4);
      return v6;
    }
  }
  else
  {
    if ( v4 <= 1 )
    {
      if ( *((_WORD *)v3 + 4) )
        return v6;
      sub_8078E70(*(_BYTE *)(v202F7C8 + 0x2024BE0), 0);
      *((_WORD *)v3 + 14) = 256;
      goto _0813F80A;
    }
    if ( v4 == 2 )
    {
      sub_8078F40(*(_BYTE *)(v202F7C8 + 0x2024BE0));
      gSprites[68 * v2 + 62] |= 4u;
      move_anim_task_del(v1);
    }
  }
  return v6;
}
