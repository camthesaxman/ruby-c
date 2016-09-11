int sub_8126338()
{
  int result; // r0@2
  int v1; // r5@3
  int v2; // r0@3

  if ( sub_8126288() )
  {
    v1 = v20291B6;
    v2 = v20291B5 - 1;
    --v20291B5;
    if ( v2 << 24 )
      v20291B0 = sub_8126268();
    else
      sub_81262C0();
    result = v1;
  }
  else
  {
    sub_81262C0();
    result = 0;
  }
  return result;
}
