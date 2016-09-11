signed int sub_810D8EC()
{
  int v0; // r4@1
  unsigned int v1; // r4@1
  unsigned __int8 v2; // r0@2
  signed int result; // r0@2

  v0 = (unsigned __int16)VarGet(16424);
  v1 = v0 + (VarGet(16425) << 16);
  if ( v1 )
  {
    v2 = VarGet(16423);
    sub_810D74C(v1, v2);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
