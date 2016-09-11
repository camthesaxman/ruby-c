signed int sub_80B713C()
{
  int v0; // r5@1
  int v1; // r4@1
  signed int result; // r0@2

  v0 = (unsigned __int8)sub_80B6F84();
  v1 = *(_BYTE *)(v0 + 0x2000011);
  if ( sub_80B7264(v1) << 24 )
  {
    sub_80B7370(v1, v0);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
