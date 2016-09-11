int __fastcall sub_80E2CD0(unsigned __int8 a1)
{
  int v1; // r7@1
  int v2; // r6@1
  int *v3; // r3@1
  unsigned int v4; // r4@2
  int v5; // r8@2
  int *v6; // r5@3
  int *v7; // r2@7
  __int16 v8; // r0@7
  int v9; // r3@7
  int v10; // r1@7
  int v12; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v3 + 13) == *((_WORD *)v3 + 6) )
  {
    *((_WORD *)v3 + 13) = 0;
    v4 = *((_WORD *)v3 + 4) | (*((_WORD *)v3 + 5) << 16);
    v5 = 4 * a1;
    if ( v4 )
    {
      v6 = &dword_3004B20[10 * a1];
      do
      {
        if ( v4 & 1 )
          BlendPalette(v2, 0x10u, *((_BYTE *)v6 + 28), *((_WORD *)v6 + 9));
        v2 = (v2 + 16) & 0xFFFF;
        v4 >>= 1;
      }
      while ( v4 );
    }
    v7 = &dword_3004B20[2 * (v5 + v1)];
    v8 = *((_WORD *)v7 + 14);
    v9 = *((_WORD *)v7 + 14);
    v10 = *((_WORD *)v7 + 8);
    if ( v9 >= v10 )
    {
      if ( v9 <= v10 )
        move_anim_task_del(v1);
      else
        *((_WORD *)v7 + 14) = v8 - 1;
    }
    else
    {
      *((_WORD *)v7 + 14) = v8 + 1;
    }
  }
  else
  {
    ++*((_WORD *)v3 + 13);
  }
  return v12;
}
