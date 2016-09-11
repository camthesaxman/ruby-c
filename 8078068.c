signed int __fastcall obj_id_for_side_relative_to_move(int a1)
{
  int v1; // r0@3
  _BYTE *v2; // r5@8

  a1 = (unsigned __int8)a1;
  if ( (_BYTE)a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        v2 = (_BYTE *)33748936;
        if ( !(b_side_obj__get_some_boolean(v202F7C8 ^ 2) << 24) )
          return 255;
      }
      else
      {
        v2 = (_BYTE *)33748937;
        if ( !(b_side_obj__get_some_boolean(v202F7C9 ^ 2) << 24) )
          return 255;
      }
      v1 = *v2 ^ 2;
      return *(_BYTE *)(v1 + 33704928);
    }
    if ( sub_8078874(v202F7C9) << 24 )
    {
      v1 = v202F7C9;
      return *(_BYTE *)(v1 + 33704928);
    }
    return 255;
  }
  if ( !(sub_8078874(v202F7C8) << 24) )
    return 255;
  v1 = v202F7C8;
  return *(_BYTE *)(v1 + 33704928);
}
