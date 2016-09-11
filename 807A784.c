int __fastcall sub_807A784(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  char *v4; // r0@7
  __int16 v5; // r1@7
  char *v6; // r0@9
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 6);
  if ( v3 == 1 )
  {
    sub_807A850(v2, v1);
    v6 = &gSprites[68 * *((_WORD *)v2 + 4)];
    *((_WORD *)v6 + 18) -= *((_WORD *)v2 + 5);
    LOWORD(v6) = *((_WORD *)v2 + 7) - 1;
    *((_WORD *)v2 + 7) = (_WORD)v6;
    if ( !(_WORD)v6 )
    {
      *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 4) + 36] = 0;
      goto _0807A822;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 && !*((_WORD *)v2 + 9) )
    {
      FreeSpritePaletteByTag(0x2771u);
      move_anim_task_del(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 6) )
  {
    sub_807A850(v2, v1);
    v4 = &gSprites[68 * *((_WORD *)v2 + 4)];
    *((_WORD *)v4 + 18) += *((_WORD *)v2 + 5);
    v5 = *((_WORD *)v2 + 7);
    *((_WORD *)v2 + 7) = v5 + 1;
    if ( (signed __int16)(v5 + 1) == 5 )
    {
      *((_WORD *)v2 + 7) = v5;
_0807A822:
      ++*((_WORD *)v2 + 6);
      return v8;
    }
  }
  return v8;
}
