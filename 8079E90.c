signed int __fastcall sub_8079E90(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int result; // r0@3
  int v3; // r0@5
  signed int v4; // r1@5

  v1 = a1;
  if ( sub_8076BE0() << 24 )
  {
    if ( v1 == 2 )
      result = 30;
    else
      result = 40;
  }
  else
  {
    v3 = (unsigned __int8)battle_get_per_side_status(v1);
    v4 = 30;
    if ( v3 )
    {
      v4 = 20;
      if ( v3 != 2 )
      {
        v4 = 50;
        if ( v3 == 1 )
          v4 = 40;
      }
    }
    result = v4;
  }
  return result;
}
