int __fastcall sub_80E1864(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r0@2
  int (*v4)(); // r0@6
  unsigned int v5; // r5@7
  int v6; // r0@12
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( word_3004B02 )
    v3 = word_3004B02 + 3;
  else
    v3 = v202F7BC / 0xAu + 3;
  *((_WORD *)v2 + 19) = v3;
  *((_WORD *)v2 + 18) = v3;
  *((_WORD *)v2 + 7) = word_3004B04;
  if ( word_3004B00[0] == 4 )
  {
    *((_WORD *)v2 + 17) = 0;
    v5 = 0;
    do
    {
      if ( b_side_obj__get_some_boolean((unsigned __int8)v5) << 24 )
        *((_WORD *)v2 + (*((_WORD *)v2 + 17))++ + 9 + 4) = *(_BYTE *)(v5 + 33704928);
      v5 = (v5 + 1) & 0xFFFF;
    }
    while ( v5 <= 3 );
    goto _080E1924;
  }
  if ( word_3004B00[0] == 5 )
  {
    *((_WORD *)v2 + 17) = word_30041B0;
    v4 = sub_80E1934;
_080E1926:
    *v2 = (int)v4;
    return v8;
  }
  v6 = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  *((_WORD *)v2 + 13) = v6;
  if ( v6 != 255 )
  {
    *((_WORD *)v2 + 17) = 1;
_080E1924:
    v4 = sub_80E1A2C;
    goto _080E1926;
  }
  move_anim_task_del(v1);
  return v8;
}
