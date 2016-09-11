int __fastcall sub_813F6CC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  __int16 v4; // r2@2
  signed __int16 v5; // r1@2
  __int16 v6; // r0@7
  __int16 v7; // r0@11
  int v9; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) += 2;
  if ( v3 >= (signed int)*((_WORD *)v2 + 15) )
  {
    *((_WORD *)v2 + 4) = 0;
    v4 = (unsigned __int8)IndexOfSpritePaletteTag(0xD709u);
    v5 = 2;
    if ( !*((_WORD *)v2 + 14) )
      v5 = 6;
    if ( *((_WORD *)v2 + 5) )
    {
      if ( *((_WORD *)v2 + 5) == 1 )
      {
        v7 = *((_WORD *)v2 + 6) - 2;
        *((_WORD *)v2 + 6) = v7;
        if ( v7 & 0x8000 )
          *((_WORD *)v2 + 6) = 0;
        BlendPalette((16 * v4 + 256) | v5, 1u, *((_BYTE *)v2 + 12), 32628);
        if ( !*((_WORD *)v2 + 6) )
          move_anim_task_del(v1);
      }
    }
    else
    {
      v6 = *((_WORD *)v2 + 6) + 2;
      *((_WORD *)v2 + 6) = v6;
      if ( v6 > 16 )
        *((_WORD *)v2 + 6) = 16;
      BlendPalette((16 * v4 + 256) | v5, 1u, *((_BYTE *)v2 + 12), 32628);
      if ( *((_WORD *)v2 + 6) == 16 )
        ++*((_WORD *)v2 + 5);
    }
  }
  return v9;
}
