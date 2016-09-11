int __fastcall sub_812CEF0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  __int16 v4; // r0@4
  __int16 v5; // r0@7
  signed int v6; // r1@8
  __int16 v7; // r0@11
  signed int v8; // r3@14
  signed int v9; // r3@15
  signed int v10; // r3@16
  signed int v11; // r3@17
  int v13; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) - *((_WORD *)v2 + 9);
  *((_WORD *)v2 + 4) = v3;
  if ( v3 < (signed int)*((_WORD *)v2 + 6) )
    *((_WORD *)v2 + 4) = *((_WORD *)v2 + 6);
  if ( *((_WORD *)v2 + 8) )
  {
    --*((_WORD *)v2 + 8);
  }
  else
  {
    v4 = *((_WORD *)v2 + 5) - *((_WORD *)v2 + 9);
    *((_WORD *)v2 + 5) = v4;
    if ( v4 < (signed int)*((_WORD *)v2 + 6) )
    {
      *((_WORD *)v2 + 5) = *((_WORD *)v2 + 6);
      *((_WORD *)v2 + 19) = 1;
    }
  }
  v5 = *((_WORD *)v2 + 10) + 1;
  *((_WORD *)v2 + 10) = v5;
  if ( v5 > 1 )
  {
    *((_WORD *)v2 + 10) = 0;
    v6 = 0;
    if ( !*((_WORD *)v2 + 11) )
      v6 = 1;
    *((_WORD *)v2 + 11) = v6;
    if ( v6 )
      v7 = *((_WORD *)v2 + 12);
    else
      v7 = *((_WORD *)v2 + 13);
    *((_WORD *)v2 + 16) = v7;
  }
  v8 = *((_WORD *)v2 + 4) << 16;
  if ( *((_WORD *)v2 + 4) < (signed int)*((_WORD *)v2 + 5) )
  {
    do
    {
      v9 = v8 >> 16;
      word_3004DE0[v9] = *((_WORD *)v2 + 16);
      word_3005560[v9] = *((_WORD *)v2 + 16);
      v8 = (v9 + 1) << 16;
    }
    while ( v8 >> 16 < *((_WORD *)v2 + 5) );
  }
  v10 = *((_WORD *)v2 + 5) << 16;
  if ( *((_WORD *)v2 + 5) <= (signed int)*((_WORD *)v2 + 7) )
  {
    do
    {
      v11 = v10 >> 16;
      word_3004DE0[v11] = *((_WORD *)v2 + 15);
      word_3005560[v11] = *((_WORD *)v2 + 15);
      v10 = (v11 + 1) << 16;
    }
    while ( v10 >> 16 <= *((_WORD *)v2 + 7) );
  }
  if ( *((_WORD *)v2 + 19) )
  {
    if ( *((_WORD *)v2 + 14) )
      byte_3004DD5 = 3;
    move_anim_task_del(v1);
  }
  return v13;
}
