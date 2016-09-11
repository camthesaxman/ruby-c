int sub_80BC56C()
{
  unsigned __int8 v0; // r0@1
  signed __int16 v1; // r0@4
  int v3; // [sp+0h] [bp-4h]@0

  v0 = sub_80BC14C(v20387DC);
  if ( (unsigned __int8)sub_80BC268(v0) == 1 )
  {
    v202E8DC = 1;
  }
  else
  {
    if ( (unsigned __int8)sub_80BC538() <= 9u )
      v1 = 0;
    else
      v1 = 2;
    v202E8DC = v1;
  }
  return v3;
}
