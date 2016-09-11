int __fastcall sub_8043F44(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r6@1
  __int16 v3; // r5@1
  __int16 v4; // r4@1
  signed int v5; // r0@5
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = 0;
  v4 = 0;
  if ( battle_type_is_double(v1) << 24 )
  {
    v5 = (unsigned __int8)battle_get_per_side_status(v2);
    if ( v5 == 1 )
    {
      v3 = 44;
      v4 = 19;
    }
    else if ( v5 > 1 )
    {
      if ( v5 == 2 )
      {
        v3 = 171;
        v4 = 102;
      }
      else if ( v5 == 3 )
      {
        v3 = 32;
        v4 = 44;
      }
    }
    else if ( !v5 )
    {
      v3 = 159;
      v4 = 77;
    }
  }
  else if ( battle_side_get_owner(v2) << 24 )
  {
    v3 = 44;
    v4 = 30;
  }
  else
  {
    v3 = 158;
    v4 = 88;
  }
  sub_8043E50(byte_3004340[v2], v3, v4);
  return v7;
}
