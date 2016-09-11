int __fastcall sub_80D1808(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@2
  __int16 v4; // r0@3
  char *v5; // r3@4
  char *v6; // r0@4
  char v7; // r1@4
  __int16 v8; // r0@6
  __int16 v9; // r0@7
  char *v10; // r0@9
  int v12; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
  {
    v3 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v3;
    if ( v3 > (signed int)*((_WORD *)v2 + 8) )
    {
      *((_WORD *)v2 + 5) = 0;
      v4 = *((_WORD *)v2 + 6) + 1;
      *((_WORD *)v2 + 6) = v4;
      if ( v4 & 1 )
      {
        v5 = gSprites;
        v6 = &gSprites[68 * *((_WORD *)v2 + 19) + 62];
        v7 = *v6 & 0xFB;
      }
      else
      {
        v5 = gSprites;
        v6 = &gSprites[68 * *((_WORD *)v2 + 19) + 62];
        v7 = *v6 | 4;
      }
      *v6 = v7;
      v8 = *((_WORD *)v2 + 7) + 1;
      *((_WORD *)v2 + 7) = v8;
      if ( v8 >= (signed int)*((_WORD *)v2 + 17) )
      {
        v9 = *((_WORD *)v2 + 8) + 1;
        *((_WORD *)v2 + 8) = v9;
        if ( v9 >= (signed int)*((_WORD *)v2 + 18) )
        {
          v10 = &v5[68 * *((_WORD *)v2 + 19) + 62];
          *v10 &= 0xFBu;
          move_anim_task_del(v1);
        }
        else
        {
          *((_WORD *)v2 + 5) = 0;
          *((_WORD *)v2 + 6) = 0;
          *((_WORD *)v2 + 7) = 0;
        }
      }
    }
  }
  return v12;
}
