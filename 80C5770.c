int __fastcall sub_80C5770(unsigned __int8 a1, int a2, int a3)
{
  unsigned __int8 v3; // r5@1
  _BYTE *v4; // r4@1
  signed int v5; // r0@1
  int v6; // r1@7
  int v7; // r2@7
  int v8; // r0@9
  signed int v9; // r0@13
  int v11; // [sp+8h] [bp-4h]@0

  v3 = a1;
  v4 = &byte_3004B28[40 * a1];
  v5 = *(_WORD *)v4;
  if ( v5 == 1 )
  {
    if ( sub_8064C84() << 24 )
      --*(_WORD *)v4;
  }
  else if ( v5 > 1 )
  {
    if ( v5 == 2 )
    {
      v9 = sub_80C56A8(2, 0, a3);
      if ( v9 )
        v202E8DC = 1;
      else
        v202E8DC = v9;
      script_env_2_enable_and_set_ctx_running();
      DestroyTask(v3);
    }
  }
  else if ( !*(_WORD *)v4 )
  {
    v6 = *((_WORD *)v4 + 1);
    v7 = 2;
    if ( (signed int)*((_WORD *)v4 + 1) > 5 )
    {
_080C57C4:
      *(_WORD *)v4 = 2;
    }
    else
    {
      while ( !sub_80C5728(v6, v6, v7) )
      {
        v8 = *((_WORD *)v4 + 1) + 1;
        *((_WORD *)v4 + 1) = v8;
        v6 = v8;
        if ( (signed __int16)v8 > 5 )
          goto _080C57C4;
      }
      sub_80C56DC(v4[2]);
      box_related_two__2((int)&UnknownString_81A1132);
      ++*(_WORD *)v4;
    }
  }
  return v11;
}
