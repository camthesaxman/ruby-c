int __fastcall sub_80DC3F4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r5@1
  signed int v3; // r0@1
  int v4; // r3@7
  int v5; // r4@7
  signed int v6; // r2@8
  int v7; // r1@8
  int v8; // r3@8
  __int16 v9; // r0@9
  int v10; // r3@13
  signed int v11; // r2@13
  __int16 v12; // r0@14
  int v14; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    byte_3004DD5 = 3;
_080DC4D4:
    ++*((_WORD *)v2 + 4);
    return v14;
  }
  if ( v3 > 1 )
  {
    if ( v3 == 2 )
      move_anim_task_del(v1);
  }
  else
  {
    if ( *((_WORD *)v2 + 4) )
      return v14;
    v4 = *((_WORD *)v2 + 17);
    LOWORD(v5) = *((_WORD *)v2 + 18);
    if ( *((_WORD *)v2 + 18) <= (signed int)*((_WORD *)v2 + 19) )
    {
      while ( 1 )
      {
        v6 = v4 << 16;
        v7 = ((signed int)*(_WORD *)((char *)gSineTable + (v4 << 16 >> 15)) >> *((_WORD *)v2 + 16)) & 0xFFFF;
        v8 = (signed __int16)((signed int)*(_WORD *)((char *)gSineTable + (v4 << 16 >> 15)) >> *((_WORD *)v2 + 16));
        if ( v8 > 0 )
          break;
        if ( v8 < 0 )
        {
          v9 = v8 - (*((_WORD *)v2 + 5) & 3);
          goto _080DC484;
        }
_080DC488:
        v10 = (signed __int16)v5;
        word_3004DE0[v10] = v7 + *((_WORD *)v2 + 14);
        word_3005560[v10] = v7 + *((_WORD *)v2 + 14);
        v4 = ((v6 >> 16) + *((_WORD *)v2 + 15)) & 0xFFFF;
        v11 = ((signed __int16)v5 + 1) << 16;
        v5 = ((signed __int16)v5 + 1) & 0xFFFF;
        if ( v11 >> 16 > *((_WORD *)v2 + 19) )
          goto _080DC4BE;
      }
      v9 = v8 + (*((_WORD *)v2 + 5) & 3);
_080DC484:
      LOWORD(v7) = v9;
      goto _080DC488;
    }
_080DC4BE:
    v12 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v12;
    if ( v12 > 23 )
      goto _080DC4D4;
  }
  return v14;
}
