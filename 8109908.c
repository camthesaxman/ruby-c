signed int sub_8109908()
{
  char v0; // r0@1
  signed int result; // r0@2

  v0 = v2016C20;
  if ( v2016C20 )
  {
    --v2016C20;
    v2039238 = *(_DWORD *)(4 * (unsigned __int8)(v0 - 1) + 0x2016C00);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
