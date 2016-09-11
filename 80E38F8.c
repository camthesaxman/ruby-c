int __fastcall sub_80E38F8(unsigned __int8 a1)
{
  int *v1; // r4@1
  signed int v2; // r1@1
  __int16 v3; // r0@7
  __int16 v4; // r0@9
  unsigned int v5; // r5@10
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 1 )
  {
    v4 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v4;
    if ( v4 > 1 )
    {
      *((_WORD *)v1 + 5) = 0;
      --*((_WORD *)v1 + 6);
      v5 = 0;
      do
      {
        if ( ((signed int)*((_WORD *)v1 + 19) >> v5) & 1 )
          BlendPalette(16 * v5, 0x10u, *((_BYTE *)v1 + 12), -1);
        if ( ((signed int)*((_WORD *)v1 + 18) >> v5) & 1 )
          BlendPalette(((v5 << 20) + 0x1000000) >> 16, 0x10u, *((_BYTE *)v1 + 12), 0);
        v5 = (v5 + 1) & 0xFFFF;
      }
      while ( v5 <= 0xF );
      if ( !*((_WORD *)v1 + 6) )
        goto _080E39A4;
    }
  }
  else if ( v2 > 1 )
  {
    if ( v2 == 2 )
      move_anim_task_del(a1);
  }
  else if ( !*((_WORD *)v1 + 4) )
  {
    v3 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v3;
    if ( v3 > 6 )
    {
      *((_WORD *)v1 + 5) = 0;
      *((_WORD *)v1 + 6) = 16;
_080E39A4:
      ++*((_WORD *)v1 + 4);
      return v7;
    }
  }
  return v7;
}
