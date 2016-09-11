signed int sub_8099D34()
{
  signed int v0; // r2@1
  int v1; // r0@2
  int v2; // r0@3
  signed int result; // r0@4

  v0 = (unsigned __int8)sub_80990AC();
  if ( v20008B8 )
  {
    v20008B4 = (v20008B6 + v20008B4) & 0x1FF;
    v1 = v20008B8 - 1;
    --v20008B8;
    if ( !(v1 << 16) )
    {
      v2 = sub_809A598();
      sub_809A810(v2);
    }
    result = 1;
  }
  else
  {
    result = v0;
  }
  return result;
}
