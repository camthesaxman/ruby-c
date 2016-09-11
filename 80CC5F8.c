int __fastcall sub_80CC5F8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  int *v2; // r5@1
  __int16 v3; // r0@5
  __int16 v4; // r0@6
  __int16 v5; // r0@7
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 4) )
  {
    if ( *((_WORD *)v2 + 4) == 1 )
    {
      v3 = *((_WORD *)v2 + 13) + 1;
      *((_WORD *)v2 + 13) = v3;
      if ( !(v3 & 0x8000) )
      {
        *((_WORD *)v2 + 13) = 0;
        BlendPalette(*((_WORD *)v2 + 12), 0x10u, *((_BYTE *)v2 + 28), gUnknown_083D6984[*((_WORD *)v2 + 15)]);
        BlendPalette(*((_WORD *)v2 + 16), 0x10u, *((_BYTE *)v2 + 28), gUnknown_083D6984[*((_WORD *)v2 + 15)]);
        v4 = *((_WORD *)v2 + 14) + 1;
        *((_WORD *)v2 + 14) = v4;
        if ( v4 == 17 )
        {
          *((_WORD *)v2 + 14) = 0;
          v5 = *((_WORD *)v2 + 15) + 1;
          *((_WORD *)v2 + 15) = v5;
          if ( v5 == 7 )
            *((_WORD *)v2 + 15) = 0;
        }
      }
    }
  }
  else
  {
    *((_WORD *)v2 + 12) = (16 * IndexOfSpritePaletteTag(0x274Fu) & 0xFFF) + 256;
    *((_WORD *)v2 + 16) = (16 * IndexOfSpritePaletteTag(0x27B0u) & 0xFFF) + 256;
    ++*((_WORD *)v2 + 4);
  }
  if ( word_3004B0E == -1 )
    move_anim_task_del(v1);
  return v7;
}
