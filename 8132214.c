int __fastcall sub_8132214(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    *((_WORD *)v2 + 15) = (*((_WORD *)v2 + 15) + 8) & 0xFF;
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 7) + 36] = gSineTable[*((_WORD *)v2 + 15)] << 16 >> 21;
    if ( !*((_WORD *)v2 + 15) )
    {
      *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 7) + 36] = 0;
      goto _081322FC;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 )
      move_anim_task_del(v1);
  }
  else if ( !*((_WORD *)v2 + 4) )
  {
    *((_WORD *)v2 + 15) = (*((_WORD *)v2 + 15) + 8) & 0xFF;
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 7) + 36] = gSineTable[*((_WORD *)v2 + 15)] << 16 >> 21;
    *((_WORD *)v2 + 13) = (*((_WORD *)v2 + 13) + 2) & 0xFF;
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 7) + 32] = (gSineTable[*((_WORD *)v2 + 13)] << 16 >> 19)
                                                      * *((_WORD *)v2 + 8)
                                                      + *((_WORD *)v2 + 9);
    if ( !*((_WORD *)v2 + 13) )
    {
      *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 7) + 32] = *((_WORD *)v2 + 9);
_081322FC:
      ++*((_WORD *)v2 + 4);
      return v5;
    }
  }
  return v5;
}
