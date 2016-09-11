int __fastcall sub_8130970(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  char *v4; // r0@3
  signed __int16 v5; // r1@3
  int v6; // r0@7
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 5) = v3;
  if ( v3 > 1 )
  {
    *((_WORD *)v2 + 5) = 0;
    if ( *((_WORD *)v2 + 6) & 1 )
    {
      v4 = &gSprites[68 * *((_WORD *)v2 + 19)];
      v5 = -2;
    }
    else
    {
      v4 = &gSprites[68 * *((_WORD *)v2 + 19)];
      v5 = 2;
    }
    *((_WORD *)v4 + 18) = v5;
  }
  if ( !(unsigned __int8)sub_807992C((int)v2) )
  {
    *(_WORD *)&gSprites[68 * *((_WORD *)v2 + 19) + 36] = 0;
    v6 = *((_WORD *)v2 + 4) - 1;
    *((_WORD *)v2 + 4) = v6;
    if ( v6 << 16 )
    {
      sub_80798F4((int)&dword_3004B20[10 * v1], BYTE2(dword_3004B20[10 * v1 + 9]));
      *((_WORD *)v2 + 5) = 0;
      *((_WORD *)v2 + 6) = 0;
    }
    else
    {
      move_anim_task_del(v1);
    }
  }
  return v8;
}
