signed int __fastcall sub_80A1CD8(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r2@1
  signed int result; // r0@2
  char v6; // r0@3

  v3 = a1;
  if ( GetMonData(a1, 57, a3) )
  {
    v6 = GetMonData(v3, 55, v4);
    result = (unsigned __int8)pokemon_ailments_get_primary(v6);
    if ( !result )
    {
      if ( sub_8040110(v3, 0) << 24 )
        result = 6;
      else
        result = 0;
    }
  }
  else
  {
    result = 7;
  }
  return result;
}
